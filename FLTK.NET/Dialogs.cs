using System;
using System.Text;
using Interop.Runtime;

namespace FLTK.NET;

public static class Dialogs
{
    public static unsafe void Message(string s)
    {
        using var str = new TemporaryUtf8String(s);
        fixed (byte* ptr = str.Bytes)
        {
            FLTKNative.Fl_message(new CString(ptr));
        }
    }
    
    public static unsafe void Alert(string s)
    {
        using var str = new TemporaryUtf8String(s);
        fixed (byte* ptr = str.Bytes)
        {
            FLTKNative.Fl_alert(new CString(ptr));
        }
    }
    
    public static unsafe int Choice(string prompt, string button0, string button1, string? button2 = null)
    {
        using var textStr = new TemporaryUtf8String(prompt);
        using var button0Str = new TemporaryUtf8String(button0);
        using var button1Str = new TemporaryUtf8String(button1);
        using var button2Str = new TemporaryUtf8String(button2 ?? "");
        fixed (byte* textPtr = textStr.Bytes)
        fixed (byte* button0Ptr = button0Str.Bytes)
        fixed (byte* button1Ptr = button1Str.Bytes)
        fixed (byte* button2Ptr = button2Str.Bytes)
        {
            return FLTKNative.Fl_choice(new CString(textPtr), new CString(button0Ptr), new CString(button1Ptr), new CString(button2Ptr));
        }
    }
    
    public static unsafe int ChoiceN(string prompt, string button0, string button1, string? button2 = null)
    {
        using var textStr = new TemporaryUtf8String(prompt);
        using var button0Str = new TemporaryUtf8String(button0);
        using var button1Str = new TemporaryUtf8String(button1);
        using var button2Str = new TemporaryUtf8String(button2 ?? "");
        fixed (byte* textPtr = textStr.Bytes)
        fixed (byte* button0Ptr = button0Str.Bytes)
        fixed (byte* button1Ptr = button1Str.Bytes)
        fixed (byte* button2Ptr = button2Str.Bytes)
        {
            return FLTKNative.Fl_choice_n(new CString(textPtr), new CString(button0Ptr), new CString(button1Ptr), new CString(button2Ptr));
        }
    }
    
    public static unsafe string Input(string prompt, string @default)
    {
        using var textStr = new TemporaryUtf8String(prompt);
        using var defaultStr = new TemporaryUtf8String(@default);
        fixed (byte* textPtr = textStr.Bytes)
        fixed (byte* defaultPtr = defaultStr.Bytes)
        {
            var cstr = FLTKNative.Fl_input(new CString(textPtr), new CString(defaultPtr));
            return CString.ToString(cstr);
        }
    }
    
    public static unsafe char[] Password(string prompt, string @default)
    {
        using var textStr = new TemporaryUtf8String(prompt);
        using var defaultStr = new TemporaryUtf8String(@default);
        fixed (byte* textPtr = textStr.Bytes)
        fixed (byte* defaultPtr = defaultStr.Bytes)
        {
            var cstr = FLTKNative.Fl_password(new CString(textPtr), new CString(defaultPtr));
            return ToCharArray(cstr);
        }
    }
    
    private static unsafe char[] ToCharArray(CString value)
    {
        if (value.IsNull)
        {
            return [];
        }

        var begin = (byte*)value.Pointer;
        int size = 0;
        for (byte* iter = begin; *iter != 0; iter++)
        {
            size++;
        }

        var bytes = new ReadOnlySpan<byte>(begin, size);
        var array = new char[Encoding.UTF8.GetCharCount(bytes)];
        Encoding.UTF8.GetChars(bytes, array.AsSpan());

        return array;
    }
}