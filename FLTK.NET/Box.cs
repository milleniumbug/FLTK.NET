using System;
using System.Drawing;

namespace FLTK.NET;

public unsafe class Box : Widget
{
    protected Box(IntPtr widget, string? title = null)
        : base(widget, title)
    {
    }

    public Box(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Box_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }
}