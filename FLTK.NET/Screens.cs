using System.Drawing;

namespace FLTK.NET;

public class Screens
{
    public static Rectangle MainScreen()
    {
        return new Rectangle(FLTKNative.Fl_screen_x(), FLTKNative.Fl_screen_y(), FLTKNative.Fl_screen_w(), FLTKNative.Fl_screen_h());
    }
}