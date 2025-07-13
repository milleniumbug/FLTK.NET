using System;
using System.Drawing;

namespace FLTK.NET;

public class Scroll : Group
{
    public unsafe Scroll(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Scroll_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected Scroll(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }

    /*public Rectangle BoundingBox
    {
        get
        {
            ThrowIfDisposed();
            int x, y, w, h;
            FLTKNative.Fl_Scroll_bbox(out x, out y, out w, out h);
        }
    }*/
}