using System;
using Microsoft.Win32.SafeHandles;

namespace FLTK.NET;

public sealed unsafe class WidgetTracker : IDisposable
{
    private readonly FLTKNative.Fl_Widget_Tracker* widgetTrackerHandle;

    public WidgetTracker(Widget widget)
        : this(widget.NativeHandle)
    {
        
    }
    
    public WidgetTracker(IntPtr handle)
    {
        this.widgetTrackerHandle = FLTKNative.Fl_Widget_Tracker_new((FLTKNative.Fl_Widget*)handle);
    }

    public bool Deleted =>
        FLTKNative.Fl_Widget_Tracker_deleted(this.widgetTrackerHandle) != 0;
    
    public bool Exists => !Deleted;

    public void Dispose()
    {
        FLTKNative.Fl_Widget_Tracker_delete(this.widgetTrackerHandle);
    }
}