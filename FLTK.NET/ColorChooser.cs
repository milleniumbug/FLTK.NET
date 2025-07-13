using System;
using System.Drawing;

namespace FLTK.NET;

public class ColorChooser : Group
{
    public unsafe ColorChooser(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Color_Chooser_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected ColorChooser(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }

    public unsafe ColorRgbF64 Rgb
    {
        get
        {
            ThrowIfDisposed();
            return new ColorRgbF64(
                FLTKNative.Fl_Color_Chooser_r((FLTKNative.Fl_Color_Chooser*)this.NativeHandle.ToPointer()), 
                FLTKNative.Fl_Color_Chooser_g((FLTKNative.Fl_Color_Chooser*)this.NativeHandle.ToPointer()), 
                FLTKNative.Fl_Color_Chooser_b((FLTKNative.Fl_Color_Chooser*)this.NativeHandle.ToPointer()));
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Color_Chooser_set_rgb(
                (FLTKNative.Fl_Color_Chooser*)this.NativeHandle.ToPointer(),
                Math.Clamp(value.Red, 0, 1),
                Math.Clamp(value.Green, 0, 1),
                Math.Clamp(value.Blue, 0, 1));
        }
    }
}

public readonly record struct ColorRgbF64(
    double Red,
    double Green,
    double Blue);