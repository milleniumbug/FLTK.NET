namespace FLTK.NET;

public enum CallbackTrigger
{
    Never = FLTKNative.Fl_CallbackTrigger.Fl_CallbackTrigger_Never,
    Changed = FLTKNative.Fl_CallbackTrigger.Fl_CallbackTrigger_Changed,
    NotChanged = FLTKNative.Fl_CallbackTrigger.Fl_CallbackTrigger_NotChanged,
    Release = FLTKNative.Fl_CallbackTrigger.Fl_CallbackTrigger_Release,
    ReleaseAlways = FLTKNative.Fl_CallbackTrigger.Fl_CallbackTrigger_ReleaseAlways,
    EnterKey = FLTKNative.Fl_CallbackTrigger.Fl_CallbackTrigger_EnterKey,
    EnterKeyAlways = FLTKNative.Fl_CallbackTrigger.Fl_CallbackTrigger_EnterKeyAlways,
    EnterKeyChanged = FLTKNative.Fl_CallbackTrigger.Fl_CallbackTrigger_EnterKeyChanged,
}