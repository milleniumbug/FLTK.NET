using System;
using System.Drawing;

namespace FLTK.NET;

public class Wizard : Group
{
    public unsafe Wizard(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Wizard_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected Wizard(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
    
    public unsafe void Prev()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Wizard_prev((FLTKNative.Fl_Wizard*)this.NativeHandle.ToPointer());
    }

    public unsafe void Next()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Wizard_next((FLTKNative.Fl_Wizard*)this.NativeHandle.ToPointer());
    }

    public unsafe Widget Value
    {
        get
        {
            ThrowIfDisposed();
            var widget = FLTKNative.Fl_Wizard_value((FLTKNative.Fl_Wizard*)this.NativeHandle.ToPointer());
            return FromNativeHandle<Widget>((IntPtr)widget);
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Wizard_set_value((FLTKNative.Fl_Wizard*)this.NativeHandle.ToPointer(), (FLTKNative.Fl_Widget*)value.NativeHandle.ToPointer());
        }
    }
}