using System;
using System.Drawing;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Interop.Runtime;

namespace FLTK.NET;

public unsafe class Widget : IDisposable
{
    private FLTKNative.Fl_Widget* self;
    private GCHandle handle;
    private EventHandler<CallbackReason>? callback;
    private bool isDisposed;

    public IntPtr NativeHandle => new IntPtr(self);

    public bool IsDisposed => isDisposed;

    public void ThrowIfDisposed()
    {
        ObjectDisposedException.ThrowIf(isDisposed, this);
    }

    bool IsVisible => FLTKNative.Fl_Widget_visible(self) != 0;
    
    bool IsVisibleRecursive => FLTKNative.Fl_Widget_visible_r(self) != 0;
    
    bool HasVisibleFocus => FLTKNative.Fl_Widget_has_visible_focus(self) != 0;

    protected Widget(IntPtr widget, string? title = null)
    {
        Fl.EnsureInitialized();
        if (widget == IntPtr.Zero)
        {
            throw new OutOfMemoryException();
        }
        self = (FLTKNative.Fl_Widget*)widget.ToPointer();
        handle = GCHandle.Alloc(this, GCHandleType.Normal);
        FLTKNative.Fl_Widget_set_user_data(self, GCHandle.ToIntPtr(handle).ToPointer());
        /*FLTKNative.Fl_Widget_set_deletion_callback(
            self,
            new FLTKNative.FnPtr_FlWidgetPtr_VoidPtr_Void(&DeleterCallback),
            GCHandle.ToIntPtr(handle).ToPointer());*/
        if (title != null)
        {
            this.Label = title;
        }
    }

    public Widget(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Widget_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
        
    }
    
    [UnmanagedCallersOnly(CallConvs = [typeof(CallConvCdecl)])]
    private static unsafe void DeleterCallback(FLTKNative.Fl_Widget* w, void* data)
    {
        if (data == null)
        {
            return;
        }
        
        var handle = GCHandle.FromIntPtr((IntPtr)data);
        var obj = (Widget?)handle.Target;

        if (obj != null)
        {
            obj.self = null;
            obj.Dispose();
        }
    }
    
    [UnmanagedCallersOnly(CallConvs = [typeof(CallConvCdecl)])]
    private static unsafe void WidgetCallback(FLTKNative.Fl_Widget* w, void* data)
    {
        if (data == null)
        {
            return;
        }
        
        var handle = GCHandle.FromIntPtr((IntPtr)data);
        var obj = (Widget?)handle.Target;

        if (obj == null)
        {
            return;
        }

        if (obj.IsDisposed)
        {
            return;
        }
        
        try
        {
            obj.callback?.Invoke(obj, (CallbackReason)FLTKNative.Fl_callback_reason());
        }
        catch (Exception ex)
        {
            Fl.OnUnhandledCallback(obj, ex);
        }
    }

    public void SetCallback(EventHandler<CallbackReason>? cb)
    {
        if (cb != null)
        {
            ThrowIfDisposed();
            this.callback = cb;
            FLTKNative.Fl_Widget_set_callback(
                self,
                new FLTKNative.Fl_Callback(&WidgetCallback),
                GCHandle.ToIntPtr(handle).ToPointer());
        }
        else
        {
            FLTKNative.Fl_Widget_set_callback(
                self,
                new FLTKNative.Fl_Callback(null),
                null);
            this.callback = null;
        }
    }
    
    public Window? GetWindow()
    {
        ThrowIfDisposed();
        var windowPtr = FLTKNative.Fl_Widget_window(self);
        if (windowPtr == null)
        {
            return null;
        }

        return FromNativeHandle<Window>((IntPtr)windowPtr);
    }
    
    public Window? GetTopLevelWindow()
    {
        ThrowIfDisposed();
        var topWindowPtr = FLTKNative.Fl_Widget_top_window(self);
        if (topWindowPtr == null)
        {
            return null;
        }

        return FromNativeHandle<Window>((IntPtr)topWindowPtr);
    }

    public Rectangle Rectangle
    {
        get
        {
            ThrowIfDisposed();
            return new Rectangle(x: FLTKNative.Fl_Widget_x(self), y: FLTKNative.Fl_Widget_y(self),
                width: FLTKNative.Fl_Widget_width(self), height: FLTKNative.Fl_Widget_height(self));
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_resize(self, value.X, value.Y, value.Width, value.Height);
        }
    }

    public bool Contains(Widget other)
    {
        ThrowIfDisposed();
        other.ThrowIfDisposed();
        return FLTKNative.Fl_Widget_inside((FLTKNative.Fl_Widget*)other.NativeHandle.ToPointer(), self) != 0;
    }
    
    public bool Inside(Widget other)
    {
        ThrowIfDisposed();
        other.ThrowIfDisposed();
        return FLTKNative.Fl_Widget_inside(self, other.NativeHandle.ToPointer()) != 0;
    }

    public static TWidget FromNativeHandle<TWidget>(IntPtr handle)
        where TWidget : Widget
    {
        var userData = FLTKNative.Fl_Widget_user_data((FLTKNative.Fl_Widget*)handle.ToPointer());
        if (userData == null)
        {
            throw new InvalidOperationException("the native widget does not have a corresponding .NET object");
        }
        var gcHandle = GCHandle.FromIntPtr((IntPtr)userData);
        var obj = (TWidget?)gcHandle.Target;
        if (obj == null)
        {
            throw new InvalidOperationException("the native widget does not have a corresponding .NET object");
        }

        return obj;
    }

    public Group? Parent
    {
        get
        {
            ThrowIfDisposed();
            var groupPtr = (FLTKNative.Fl_Group*)FLTKNative.Fl_Widget_parent(self);
            if (groupPtr == null)
            {
                return null;
            }
        
            
            return FromNativeHandle<Group>((IntPtr)groupPtr);
        }
    }
    
    public Point Position
    {
        get
        {
            ThrowIfDisposed();
            return new Point(
                x: FLTKNative.Fl_Widget_x(self),
                y: FLTKNative.Fl_Widget_y(self));
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_resize(
                self,
                value.X,
                value.Y,
                FLTKNative.Fl_Widget_width(self),
                FLTKNative.Fl_Widget_height(self));
        }
    }
    
    public Size Size
    {
        get
        {
            ThrowIfDisposed();
            return new Size(
                width: FLTKNative.Fl_Widget_width(self),
                height: FLTKNative.Fl_Widget_height(self));
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_resize(
                self,
                FLTKNative.Fl_Widget_x(self),
                FLTKNative.Fl_Widget_y(self),
                value.Width,
                value.Height);
        }
    }
    
    public Color Color
    {
        get
        {
            ThrowIfDisposed();
            var color = FLTKNative.Fl_Widget_color(self);
            return new Color(color);
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_set_color(self, value.Value);
        }
    }
    
    public Color LabelColor
    {
        get
        {
            ThrowIfDisposed();
            var color = FLTKNative.Fl_Widget_label_color(self);
            return new Color(color);
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_set_label_color(self, value.Value);
        }
    }

    public Color SelectionColor
    {
        get
        {
            ThrowIfDisposed();
            var color = FLTKNative.Fl_Widget_selection_color(self);
            return new Color(color);
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_set_selection_color(self, value.Value);
        }
    }

    public string Label
    {
        get
        {
            ThrowIfDisposed();
            var cstr = FLTKNative.Fl_Widget_label(self);
            return CString.ToString(cstr);
        }
        set
        {
            ThrowIfDisposed();
            using var s = new TemporaryUtf8String(value);
            fixed (byte* ptr = s.Bytes)
            {
                FLTKNative.Fl_Widget_set_label(self, ptr);
            }
        }
    }

    private Image? image;
    public Image? Image
    {
        get
        {
            ThrowIfDisposed();
            var imagePtr = FLTKNative.Fl_Widget_image(self);
            if ((IntPtr)imagePtr != (image?.NativeHandle ?? IntPtr.Zero))
            {
                throw new InvalidOperationException("underlying image changed by native code");
            }

            return image;
        }
        set
        {
            ThrowIfDisposed();
            image = value;
            FLTKNative.Fl_Widget_set_image(self, (void*)image?.NativeHandle);
        }
    }
    
    private Image? deimage;
    public Image? DeImage
    {
        get
        {
            ThrowIfDisposed();
            var imagePtr = FLTKNative.Fl_Widget_deimage(self);
            if ((IntPtr)imagePtr != (image?.NativeHandle ?? IntPtr.Zero))
            {
                throw new InvalidOperationException("underlying image changed by native code");
            }

            return image;
        }
        set
        {
            ThrowIfDisposed();
            deimage = value;
            FLTKNative.Fl_Widget_set_deimage(self, (void*)deimage?.NativeHandle);
        }
    }
    
    public string Tooltip
    {
        get
        {
            ThrowIfDisposed();
            var cstr = FLTKNative.Fl_Widget_tooltip(self);
            return CString.ToString(cstr);
        }
        set
        {
            ThrowIfDisposed();
            using var s = new TemporaryUtf8String(value);
            fixed (byte* ptr = s.Bytes)
            {
                FLTKNative.Fl_Widget_set_tooltip(self, ptr);
            }
        }
    }
    
    public bool IsActive
    {
        get
        {
            ThrowIfDisposed();
            return FLTKNative.Fl_Widget_active(self) != 0;
        }
    }
    
    public bool IsActiveRecursive
    {
        get
        {
            ThrowIfDisposed();
            return FLTKNative.Fl_Widget_active_r(self) != 0;
        }
    }

    protected virtual bool IsValidType(int type)
    {
        return false;
    }

    public int Type
    {
        get
        {
            ThrowIfDisposed();
            return FLTKNative.Fl_Widget_get_type(self);
        }
        set
        {
            ThrowIfDisposed();
            if (!IsValidType(value))
            {
                throw new ArgumentException("attempted to set type for something outside of the range of accepted values", nameof(value));
            }
            FLTKNative.Fl_Widget_set_type(self, value);
        }
    }

    public BoxType BoxType
    {
        get
        {
            ThrowIfDisposed();
            return (BoxType)FLTKNative.Fl_Widget_box(self);
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_set_box(self, (int)value);
        }
    }

    public bool Changed
    {
        get
        {
            ThrowIfDisposed();
            return FLTKNative.Fl_Widget_changed(self) != 0;
        }
    }
    
    public void SetChanged()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_set_changed(self);
    }

    public void ClearChanged()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_clear_changed(self);
    }
    
    public void Hide()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_hide(self);
    }
    
    public void Show()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_show(self);
    }
    
    public void Activate()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_activate(self);
    }
    
    public void Deactivate()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_deactivate(self);
    }
    
    public void Redraw()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_redraw(self);
    }
    
    public void RedrawLabel()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_redraw_label(self);
    }

    public Damage Damage
    {
        get
        {
            ThrowIfDisposed();
            return (Damage)FLTKNative.Fl_Widget_damage(self);
        }
    }

    public void SetDamage(Damage damage)
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_set_damage(self, (byte)damage);
    }
    
    public void SetDamage(Damage damage, Rectangle area)
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_set_damage_area(self, (byte)damage, area.X, area.Y, area.Width, area.Height);
    }

    public void ClearDamage()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Widget_clear_damage(self);
    }

    protected virtual void Dispose(bool disposing)
    {
        FLTKNative.Fl_Widget_delete(self);
        handle.Free();
        if (disposing)
        {
            SetCallback(null);
        }
    }

    public Font LabelFont
    {
        get
        {
            ThrowIfDisposed();
            return (Font)FLTKNative.Fl_Widget_label_font(self);
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_set_label_font(self, (int)value);
        }
    }

    public CallbackTrigger When
    {
        get
        {
            ThrowIfDisposed();
            return (CallbackTrigger)FLTKNative.Fl_Widget_when(self);
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Widget_set_when(self, (int)value);
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
    
    public object? UserData { get; set; }

    ~Widget()
    {
        Dispose(false);
    }
}