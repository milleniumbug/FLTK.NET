using System;
using System.Drawing;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace FLTK.NET;

public static class Fl
{
    static Fl()
    {
        FLTKNative.Fl_init_all(); 
        FLTKNative.Fl_register_images();
        FLTKNative.Fl_lock();
    }

    public static void EnsureInitialized()
    {
        
    }

    public static void Beep(BeepType type)
    {
        FLTKNative.Fl_beep((int)type);
    }

    public static void Run()
    {
        FLTKNative.Fl_run();
    }
    
    public static bool Wait()
    {
        return FLTKNative.Fl_wait() != 0;
    }
    
    public static bool Wait(TimeSpan time)
    {
        return FLTKNative.Fl_wait_for(time.TotalSeconds) != 0;
    }
    
    public static bool Check()
    {
        return FLTKNative.Fl_check() != 0;
    }
    
    public static void Awake()
    {
        FLTKNative.Fl_awake();
    }
    
    public static unsafe bool Awake(Action action)
    {
        var handle = GCHandle.Alloc(action, GCHandleType.Normal);
        return FLTKNative.Fl_awake_callback(new FLTKNative.Fl_Awake_Handler(&AwakeCallback), GCHandle.ToIntPtr(handle).ToPointer()) == 0;
    }

    [UnmanagedCallersOnly(CallConvs = [typeof(CallConvCdecl)])]
    private static unsafe void AwakeCallback(void* data)
    {
        var handle = GCHandle.FromIntPtr((IntPtr)data);
        var callback = (Action?)handle.Target;
        try
        {
            callback?.Invoke();
        }
        finally
        {
            handle.Free();
        }
    }

    public static unsafe Point GetMouse()
    {
        int x;
        int y;
        FLTKNative.Fl_get_mouse(&x, &y);
        return new Point(x, y);
    }

    public static event EventHandler<Exception>? UnhandledCallback;

    internal static void OnUnhandledCallback(Widget w, Exception e)
    {
        try
        {
            UnhandledCallback?.Invoke(w, e);
        }
        catch
        {
            // if your unhandled exception callback throws an exception then we're basically doomed
            // because it means neither you nor me know what to do with the exception
            try
            {
                Console.Error.WriteLine("unhandled exception handler threw an exception");
            }
            catch
            {
                // lmao
            }
        }
    }

    public static GlobalUiLocker WithLocked()
    {
        return new GlobalUiLocker();
    }
}

public readonly ref struct GlobalUiLocker
{
    public GlobalUiLocker()
    {
        FLTKNative.Fl_lock();
    }

    public void Dispose()
    {
        FLTKNative.Fl_unlock();
    }
}