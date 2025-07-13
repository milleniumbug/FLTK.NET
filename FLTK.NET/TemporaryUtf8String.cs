using System.Buffers;
using System.Text;

namespace FLTK.NET;

public readonly ref struct TemporaryUtf8String
{
    public TemporaryUtf8String(string s)
    {
        var nullTerminatorIndex = Encoding.UTF8.GetByteCount(s);
        var size = nullTerminatorIndex + 1;
        var bytes = ArrayPool<byte>.Shared.Rent(size);
        Encoding.UTF8.GetBytes(s, bytes);
        bytes[nullTerminatorIndex] = 0;
        Bytes = bytes;
    }

    public byte[] Bytes { get; }
        
    public void Dispose()
    {
        ArrayPool<byte>.Shared.Return(Bytes);
    }
}