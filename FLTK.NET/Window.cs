using System;
using System.Drawing;

namespace FLTK.NET;

public unsafe class Window : Group
{
    private readonly GroupChildrenList collection;

    public unsafe Window(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Window_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected Window(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        this.collection = new GroupChildrenList(this);
    }

    public bool Shown
    {
        get
        {
            ThrowIfDisposed();
            return FLTKNative.Fl_Window_shown((FLTKNative.Fl_Window*)this.NativeHandle.ToPointer()) != 0;
        }
    }

    public int ScreenIndex
    {
        get
        {
            ThrowIfDisposed();
            if (!Shown)
            {
                throw new InvalidOperationException("window is not shown");
            }
            
            return FLTKNative.Fl_Window_screen_num((FLTKNative.Fl_Window*)this.NativeHandle.ToPointer());
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Window_set_screen_num((FLTKNative.Fl_Window*)this.NativeHandle.ToPointer(), value);
        }
    }

    public GroupChildrenList Children
    {
        get
        {
            ThrowIfDisposed();
            return collection;
        }
    }
    
    protected override bool IsValidType(int type)
    {
        return Enum.IsDefined(typeof(WindowType), type);
    }
    
    public new WindowType Type
    {
        get
        {
            Widget w = this;
            return (WindowType)w.Type;
        }
        set
        {
            Widget w = this;
            w.Type = (int)value;
        }
    }
}