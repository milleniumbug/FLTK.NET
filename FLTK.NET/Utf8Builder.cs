using System;
using System.Text;

namespace FLTK.NET;

public struct Utf8Builder()
{
    private byte[] bytes = [];
    private int current = 0;

    private void Reallocate(int extraSize)
    {
        if (current + extraSize + 1 > Capacity())
        {
            var newSize = Math.Max(Capacity() * 3 / 2 + 1, extraSize + Capacity() + 1);
            var newArray = GC.AllocateUninitializedArray<byte>(length: newSize, pinned: true);
            StringAsSpan().CopyTo(newArray);
            bytes = newArray;
        }
    }

    private int Capacity()
    {
        return bytes.Length;
    }

    private Span<byte> BufferAsSpan()
    {
        return bytes.AsSpan();
    }
    
    private Span<byte> StringAsSpan()
    {
        return bytes.AsSpan(0, current);
    }
    
    private Span<byte> RemainingAreaAsSpan()
    {
        return bytes.AsSpan( current);
    }
    
    public void Clear()
    {
        current = 0;
    }

    public void Append(char b)
    {
        unsafe
        {
            if (char.IsAscii(b))
            {
                Reallocate(extraSize: 1);
                var span = RemainingAreaAsSpan();
                span[0] = (byte)b;
                current++;
            }
            else
            {
                Reallocate(extraSize: 10);
                var count = Encoding.UTF8.GetBytes(new Span<char>(&b, 1), RemainingAreaAsSpan());
                current += count;
            }
            
        }
    }
    
    public void Assign(string b)
    {
        Clear();
        Append(b);
    }
    
    public void Append(string b)
    {
        Reallocate(extraSize: Encoding.UTF8.GetByteCount(b) + 1);
        var count = Encoding.UTF8.GetBytes(b, RemainingAreaAsSpan());
        current += count;
    }

    public ReadOnlySpan<byte> ToNullTerminatedBytes()
    {
        Reallocate(extraSize: 1);
        var span = RemainingAreaAsSpan();
        span[0] = 0;
        return BufferAsSpan()[0..(current+1)];
    }
    
    public ReadOnlySpan<byte> ToBytes()
    {
        return StringAsSpan();
    }

    public override string ToString()
    {
        return Encoding.UTF8.GetString(StringAsSpan());
    }
}