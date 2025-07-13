namespace FLTK.NET;

public enum ButtonType : int
{
    Normal = FLTKNative.Fl_ButtonType.Fl_ButtonType_Normal,
    Toggle = FLTKNative.Fl_ButtonType.Fl_ButtonType_Toggle,
    Radio = FLTKNative.Fl_ButtonType.Fl_ButtonType_Radio,
    Hidden = FLTKNative.Fl_ButtonType.Fl_ButtonType_Hidden,
}