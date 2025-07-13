using System;
using System.Drawing;
using Interop.Runtime;

namespace FLTK.NET;

public unsafe class Image : IDisposable
{
    private bool isDisposed;
    private FLTKNative.Fl_Image* self;

    public IntPtr NativeHandle => (IntPtr)self;

    protected Image(IntPtr handle)
    {
        this.self = (FLTKNative.Fl_Image*)handle;
    }

    public void Draw(Rectangle bounds)
    {
        ObjectDisposedException.ThrowIf(isDisposed, this);
        FLTKNative.Fl_Image_draw(self, bounds.X, bounds.Y, bounds.Width, bounds.Height);
    }
    
    public void Draw(Rectangle bounds, Point p)
    {
        ObjectDisposedException.ThrowIf(isDisposed, this);
        FLTKNative.Fl_Image_draw_ext(self, bounds.X, bounds.Y, bounds.Width, bounds.Height, p.X, p.Y);
    }

    public void Scale(Size size, bool proportional = true, bool canExpand = false)
    {
        ObjectDisposedException.ThrowIf(isDisposed, this);
        FLTKNative.Fl_Image_scale(self, size.Width, size.Height, proportional ? 1 : 0, canExpand ? 1 : 0);
    }

    public int Fail
    {
        get
        {
            ObjectDisposedException.ThrowIf(isDisposed, this);
            return FLTKNative.Fl_Image_fail(self);
        }
    }

    public int ImageDepth
    {
        get
        {
            ObjectDisposedException.ThrowIf(isDisposed, this);
            return FLTKNative.Fl_Image_d(self);
        }
    }

    public int LineDataSize
    {
        get
        {
            ObjectDisposedException.ThrowIf(isDisposed, this);
            return FLTKNative.Fl_Image_ld(self);
        }
    }

    private void ReleaseUnmanagedResources()
    {
        FLTKNative.Fl_Image_delete(self);
    }

    protected virtual void Dispose(bool disposing)
    {
        ReleaseUnmanagedResources();
        if (disposing)
        {
            // TODO release managed resources here
        }
    }

    public void Dispose()
    {
        if (isDisposed)
        {
            return;
        }
        
        Dispose(true);
        GC.SuppressFinalize(this);
        isDisposed = true;
    }

    ~Image()
    {
        Dispose(false);
    }
}

public class RgbImage : Image
{
    protected RgbImage(IntPtr handle) : base(handle)
    {
        
    }
}

public class BmpImage : Image
{
    private static unsafe IntPtr Create(string filePath)
    {
        var str = new TemporaryUtf8String(filePath);
        fixed (byte* ptr = str.Bytes)
        {
            return (IntPtr)FLTKNative.Fl_BMP_Image_new(ptr);
        }
    }
    
    private static unsafe IntPtr CreateFrom(ReadOnlySpan<byte> imageData)
    {
        fixed (byte* ptr = imageData)
        {
            return (IntPtr)FLTKNative.Fl_BMP_Image_from(ptr, imageData.Length);
        }
    }
    
    protected BmpImage(IntPtr handle) : base(handle)
    {
        
    }

    public BmpImage(string filePath) : this(Create(filePath))
    {
        
    }
    
    public BmpImage(ReadOnlySpan<byte> imageData) : this(CreateFrom(imageData))
    {
        
    }
    
    public BmpImage(ReadOnlyMemory<byte> imageData) : this(CreateFrom(imageData.Span))
    {
        
    }
}

public class PngImage : Image
{
    private static unsafe IntPtr Create(string filePath)
    {
        var str = new TemporaryUtf8String(filePath);
        fixed (byte* ptr = str.Bytes)
        {
            return (IntPtr)FLTKNative.Fl_PNG_Image_new(ptr);
        }
    }
    
    private static unsafe IntPtr CreateFrom(ReadOnlySpan<byte> imageData)
    {
        fixed (byte* ptr = imageData)
        {
            return (IntPtr)FLTKNative.Fl_PNG_Image_from(ptr, imageData.Length);
        }
    }
    
    protected PngImage(IntPtr handle) : base(handle)
    {
        
    }

    public PngImage(string filePath) : this(Create(filePath))
    {
        
    }
    
    public PngImage(ReadOnlySpan<byte> imageData) : this(CreateFrom(imageData))
    {
        
    }
    
    public PngImage(ReadOnlyMemory<byte> imageData) : this(CreateFrom(imageData.Span))
    {
        
    }
}