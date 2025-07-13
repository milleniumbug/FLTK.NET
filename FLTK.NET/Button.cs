using System;
using System.Drawing;

namespace FLTK.NET;

public class Button : Widget
{
    public unsafe Button(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected Button(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }

    public unsafe bool Value
    {
        get
        {
            ThrowIfDisposed();
            return FLTKNative.Fl_Button_value((FLTKNative.Fl_Button*)this.NativeHandle.ToPointer()) != 0;
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Button_set_value((FLTKNative.Fl_Button*)this.NativeHandle.ToPointer(),  value ? 1 : 0);
        }
    }
    
    protected override bool IsValidType(int type)
    {
        return Enum.IsDefined(typeof(ButtonType), type);
    }
    
    public new ButtonType Type
    {
        get
        {
            Widget w = this;
            return (ButtonType)w.Type;
        }
        set
        {
            Widget w = this;
            w.Type = (int)value;
        }
    }
}

public class LightButton : Button
{
    public unsafe LightButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Light_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected LightButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}

public class CheckButton : LightButton
{
    public unsafe CheckButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Check_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected CheckButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}

public class RadioLightButton : LightButton
{
    public unsafe RadioLightButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Radio_Light_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected RadioLightButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}

public class RoundButton : LightButton
{
    public unsafe RoundButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Round_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected RoundButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}

public class RadioRoundButton : RadioButton
{
    public unsafe RadioRoundButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Round_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected RadioRoundButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}

public class RadioButton : Button
{
    public unsafe RadioButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Radio_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected RadioButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}


public class RepeatButton : Button
{
    public unsafe RepeatButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Repeat_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected RepeatButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}

public class ReturnButton : Button
{
    public unsafe ReturnButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Return_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected ReturnButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}

public class ShortcutButton : Button
{
    public unsafe ShortcutButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Shortcut_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected ShortcutButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}

public class ToggleButton : Button
{
    public unsafe ToggleButton(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Toggle_Button_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected ToggleButton(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }
}