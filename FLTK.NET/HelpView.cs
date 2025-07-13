using System;
using System.Drawing;
using Interop.Runtime;

namespace FLTK.NET;

public unsafe class HelpView : Group
{
    public unsafe HelpView(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Help_View_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected HelpView(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }

    public void ClearSelection()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Help_View_clear_selection((FLTKNative.Fl_Help_View*)this.NativeHandle);
    }

    public string Directory
    {
        get
        {
            ThrowIfDisposed();
            var cstr = FLTKNative.Fl_Help_View_directory((FLTKNative.Fl_Help_View*)this.NativeHandle);
            return CString.ToString(cstr);
        }
    }
    
    public string Filename
    {
        get
        {
            ThrowIfDisposed();
            var cstr = FLTKNative.Fl_Help_View_filename((FLTKNative.Fl_Help_View*)this.NativeHandle);
            return CString.ToString(cstr);
        }
    }

    public string Value
    {
        get
        {
            ThrowIfDisposed();
            var str = FLTKNative.Fl_Help_View_value((FLTKNative.Fl_Help_View*)this.NativeHandle);
            return CString.ToString(str);
        }
        set
        {
            ThrowIfDisposed();
            var str = new TemporaryUtf8String(value);
            fixed (byte* p = str.Bytes)
            {
                FLTKNative.Fl_Help_View_set_value((FLTKNative.Fl_Help_View*)this.NativeHandle, p);
            }
        }
    }
}