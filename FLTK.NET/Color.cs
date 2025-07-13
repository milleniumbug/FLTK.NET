namespace FLTK.NET;

public readonly struct Color
{
    public Color(uint value)
    {
        Value = value;
    }
    
    public static Color FromIndex(byte index)
    {
        return new Color(index);
    }

    public static Color FromRgb(byte red, byte green, byte blue)
    {
        if (red == 0 && green == 0 && blue == 0)
        {
            return Black;
        }
        uint value = (uint)red << 24 | (uint)green << 16 | (uint)blue << 8;
        return new Color(value);
    }
    
    public static Color FromGrayscale(byte grayscale)
    {
        if (grayscale == 0)
        {
            return Black;
        }
        uint value = (uint)grayscale << 24 | (uint)grayscale << 16 | (uint)grayscale << 8;
        return new Color(value);
    }

    public uint Value { get; }
    
    public byte R => unchecked((byte)(Value >> 24));
    public byte G => unchecked((byte)(Value >> 16));
    public byte B => unchecked((byte)(Value >> 8));
    public byte I => unchecked((byte)(Value >> 0));
    
    public static readonly Color ForegroundColor = new Color(0);
    public static readonly Color Background2Color = new Color(7);
    public static readonly Color InactiveColor = new Color(8);
    public static readonly Color SelectionColor = new Color(15);
    public static readonly Color Gray0 = new Color(32);
    public static readonly Color Dark3 = new Color(39);
    public static readonly Color Dark2 = new Color(45);
    public static readonly Color Dark1 = new Color(47);
    public static readonly Color BackgroundColor = new Color(49);
    public static readonly Color Light1 = new Color(50);
    public static readonly Color Light2 = new Color(52);
    public static readonly Color Light3 = new Color(54);
    public static readonly Color Black = new Color(56);
    public static readonly Color Red = new Color(88);
    public static readonly Color Green = new Color(63);
    public static readonly Color Yellow = new Color(95);
    public static readonly Color Blue = new Color(216);
    public static readonly Color Magenta = new Color(248);
    public static readonly Color Cyan = new Color(223);
    public static readonly Color DarkRed = new Color(72);
    public static readonly Color DarkGreen = new Color(60);
    public static readonly Color DarkYellow = new Color(76);
    public static readonly Color DarkBlue = new Color(136);
    public static readonly Color DarkMagenta = new Color(152);
    public static readonly Color DarkCyan = new Color(140);
    public static readonly Color White = new Color(255);

    public static Color Contrast(Color foreground, Color background, int context = 0, int size = 0)
    {
        return new Color(FLTKNative.Fl_contrast(foreground.Value, background.Value));
    }
}