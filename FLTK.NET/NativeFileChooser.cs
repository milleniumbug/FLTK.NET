using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Reflection;
using System.Runtime.InteropServices.Marshalling;
using System.Text.Unicode;
using Interop.Runtime;

namespace FLTK.NET;

public sealed unsafe class NativeFileChooser : IDisposable
{
    private FLTKNative.Fl_Native_File_Chooser* handle;
    private Utf8Builder builder;

    public bool IsDisposed => handle == null;

    public void ThrowIfDisposed()
    {
        if (IsDisposed)
        {
            throw new ObjectDisposedException(nameof(NativeFileChooser));
        }
    }

    public NativeFileChooser(FileChooserType type = FileChooserType.BrowseFile)
    {
        this.handle = FLTKNative.Fl_Native_File_Chooser_new((int)type);
        this.type = type;
    }
    
    public string Directory
    {
        get
        {
            ThrowIfDisposed();
            return CString.ToString(FLTKNative.Fl_Native_File_Chooser_directory(handle));
        }
        set
        {
            ThrowIfDisposed();
            using var cstr = new TemporaryUtf8String(value);
            fixed (byte* ptr = cstr.Bytes)
            {
                FLTKNative.Fl_Native_File_Chooser_set_directory(handle, ptr);
            }
        }
    }
    
    public string Title
    {
        /*get
        {
            ThrowIfDisposed();
            return CString.ToString(FLTKNative.Fl_Native_File_Chooser_title(handle));
        }*/
        set
        {
            ThrowIfDisposed();
            using var cstr = new TemporaryUtf8String(value);
            fixed (byte* ptr = cstr.Bytes)
            {
                FLTKNative.Fl_Native_File_Chooser_set_title(handle, ptr);
            }
        }
    }
    
    public string? ErrorMessage
    {
        get
        {
            ThrowIfDisposed();
            var cstr = FLTKNative.Fl_Native_File_Chooser_errmsg(handle);
            if (cstr.IsNull)
            {
                return null;
            }
            
            return CString.ToString(cstr);
        }
    }

    public string? Filename
    {
        get
        {
            ThrowIfDisposed();
            var cstr = FLTKNative.Fl_Native_File_Chooser_filename(handle);
            if (cstr.IsNull)
            {
                return null;
            }

            var p = (byte*)cstr.Pointer;
            if (p[0] == 0)
            {
                return null;
            }
            
            return CString.ToString(cstr);
        }
    }

    public FileChooserOption Options
    {
        set
        {
            FLTKNative.Fl_Native_File_Chooser_set_option(handle, (int)value);
        }
    }

    public IReadOnlyList<string> Filenames
    {
        get
        {
            ThrowIfDisposed();
            int count = FLTKNative.Fl_Native_File_Chooser_count(handle);
            var filenames = new string[count];
            for (int i = 0; i < count; i++)
            {
                filenames[i] = CString.ToString(FLTKNative.Fl_Native_File_Chooser_filenames(handle, i));
            }
            
            return filenames;
        }
    }

    public ImmutableArray<FilterEntry>? Filter
    {
        get
        {
            ThrowIfDisposed();
            var cstr = FLTKNative.Fl_Native_File_Chooser_filter(handle);
            if (cstr.IsNull)
            {
                return null;
            }

            throw new NotImplementedException();
            //return CString.ToString(cstr);
        }
        set
        {
            ThrowIfDisposed();
            if (value == null)
            {
                FLTKNative.Fl_Native_File_Chooser_set_filter(handle, null);
                return;
            }

            this.builder = new Utf8Builder();
            Filters.OutputToBuffer(value, builder);
            fixed (byte* ptr = builder.ToNullTerminatedBytes())
            {
                FLTKNative.Fl_Native_File_Chooser_set_filter(handle, ptr);
            }
        }
    }

    public int FilterValue
    {
        get
        {
            ThrowIfDisposed();
            return FLTKNative.Fl_Native_File_Chooser_filter_value(handle);
        }
    }
    
    public string PresetFile
    {
        set
        {
            ThrowIfDisposed();
            using var cstr = new TemporaryUtf8String(value);
            fixed (byte* ptr = cstr.Bytes)
            {
                FLTKNative.Fl_Native_File_Chooser_set_preset_file(handle, ptr);
            }
        }
    }

    private FileChooserType type;
    public FileChooserType Type
    {
        get
        {
            ThrowIfDisposed();
            return type;
        }
        set
        {
            ThrowIfDisposed();
            FLTKNative.Fl_Native_File_Chooser_set_type(handle, (int)value);
            type = value;
        }
    }

    public FileChooserResult Show()
    {
        return (FileChooserResult)FLTKNative.Fl_Native_File_Chooser_show(handle);
    }

    private void ReleaseUnmanagedResources()
    {
        FLTKNative.Fl_Native_File_Chooser_delete(handle);
        handle = null;
    }

    public void Dispose()
    {
        if (IsDisposed)
        {
            return;
        }
        
        ReleaseUnmanagedResources();
        GC.SuppressFinalize(this);
    }

    ~NativeFileChooser()
    {
        ReleaseUnmanagedResources();
    }
}

public enum FileChooserType
{
    BrowseFile = FLTKNative.Fl_NativeFileChooserType.Fl_NativeFileChooserType_BrowseFile,
    BrowseDirectory = FLTKNative.Fl_NativeFileChooserType.Fl_NativeFileChooserType_BrowseDirectory,
    MultiFile = FLTKNative.Fl_NativeFileChooserType.Fl_NativeFileChooserType_MultiFile,
    MultiDirectory = FLTKNative.Fl_NativeFileChooserType.Fl_NativeFileChooserType_MultiDirectory,
    SaveFile = FLTKNative.Fl_NativeFileChooserType.Fl_NativeFileChooserType_SaveFile,
    SaveDirectory = FLTKNative.Fl_NativeFileChooserType.Fl_NativeFileChooserType_SaveDirectory,
}

[Flags]
public enum FileChooserOption : int
{
    NoOptions = 0,
    SaveAsConfirm = 1 << 0,
    NewFolder = 1 << 1,
    Preview = 1 << 2,
    UseFilterExt = 1 << 3,
}

public enum FileChooserResult : int
{
    Success = 0,
    Cancelled = 1,
    Failed = -1,
}