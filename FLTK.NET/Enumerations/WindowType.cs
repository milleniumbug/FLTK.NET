namespace FLTK.NET;

public enum WindowType : int
{
    Normal = FLTKNative.Fl_WindowType.Fl_WindowType_Normal,
    Double = FLTKNative.Fl_WindowType.Fl_WindowType_Double,
}