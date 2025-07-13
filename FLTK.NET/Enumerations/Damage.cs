using System;

namespace FLTK.NET;

[Flags]
public enum Damage : int
{
    Child = FLTKNative.Fl_Damage.Fl_Damage_Child,
    Expose = FLTKNative.Fl_Damage.Fl_Damage_Expose,
    Scroll = FLTKNative.Fl_Damage.Fl_Damage_Scroll,
    Overlay = FLTKNative.Fl_Damage.Fl_Damage_Overlay,
    User1 = FLTKNative.Fl_Damage.Fl_Damage_User1,
    User2 = FLTKNative.Fl_Damage.Fl_Damage_User2,
    All = FLTKNative.Fl_Damage.Fl_Damage_All,
}