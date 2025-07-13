using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Runtime.InteropServices;
using System.Threading;

namespace FLTK.NET;

public unsafe class Group : Widget
{
    public unsafe Group(Rectangle r, string? title = null)
        : this((IntPtr)FLTKNative.Fl_Group_new(r.X, r.Y, r.Width, r.Height, null), title)
    {
    }

    protected unsafe Group(IntPtr widget, string? title = null)
        : base(widget, title)
    {
        
    }

    public void Resizable(Widget? widget)
    {
        ThrowIfDisposed();
        // If you set any other widget that is not a direct child of the group as its resizable then the behavior is undefined. This is not checked by Fl_Group for historical reasons.
        FLTKNative.Fl_Group_resizable(
            (FLTKNative.Fl_Group*)this.NativeHandle.ToPointer(),
            widget != null ? widget.NativeHandle.ToPointer() : null);
    }

    public static Group? Current
    {
        get
        {
            var current = FLTKNative.Fl_Group_current();
            if (current == null)
            {
                return null;
            }
        
            return FromNativeHandle<Group>((IntPtr)current);
        }

        set
        {
            if (value != null)
            {
                FLTKNative.Fl_Group_set_current((FLTKNative.Fl_Group*)value.NativeHandle.ToPointer());
            }
            else
            {
                FLTKNative.Fl_Group_set_current(null);
            }
        }
    }
    
    public void Begin()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Group_begin((FLTKNative.Fl_Group*)this.NativeHandle.ToPointer());
    }
    
    public void End()
    {
        ThrowIfDisposed();
        FLTKNative.Fl_Group_end((FLTKNative.Fl_Group*)this.NativeHandle.ToPointer());
    }
    
    public GroupAdder BeginEnd()
    {
        return new GroupAdder(this);
    }
}

public unsafe class GroupChildrenList : IReadOnlyList<Widget>, ICollection<Widget>
{
    private uint version = 0;
    private readonly Group group;

    internal GroupChildrenList(Group group)
    {
        this.group = group;
    }

    public IEnumerator<Widget> GetEnumerator()
    {
        group.ThrowIfDisposed();

        var v = version;
        int count = this.Count;
        for (int i = 0; i < count; i++)
        {
            if (v != version)
            {
                throw new InvalidOperationException("collection was modified during iteration");
            }
            yield return this[i];
        }
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }
    
    public Widget this[int index]
    {
        get
        {
            group.ThrowIfDisposed();
            var ptr = FLTKNative.Fl_Group_child((FLTKNative.Fl_Group*)group.NativeHandle.ToPointer(), index);
            return Widget.FromNativeHandle<Widget>((IntPtr)ptr);
        }
    }

    public void Add(Widget item)
    {
        group.ThrowIfDisposed();
        FLTKNative.Fl_Group_add((FLTKNative.Fl_Group*)group.NativeHandle.ToPointer(), item.NativeHandle.ToPointer());
        Interlocked.Increment(ref version);
    }

    public void Clear()
    {
        group.ThrowIfDisposed();
        throw new NotImplementedException();
        Interlocked.Increment(ref version);
    }

    public bool Contains(Widget item)
    {
        group.ThrowIfDisposed();
        int count = this.Count;
        for (int i = 0; i < count; i++)
        {
            if (this[i].NativeHandle == item.NativeHandle)
            {
                return true;
            }
        }

        return false;
    }
    
    public int IndexOf(Widget item)
    {
        group.ThrowIfDisposed();
        int index = FLTKNative.Fl_Group_find((FLTKNative.Fl_Group*)group.NativeHandle.ToPointer(), item.NativeHandle.ToPointer());
        if (index == Count)
        {
            return -1;
        }
        
        return index;
    }

    public void CopyTo(Widget[] array, int arrayIndex)
    {
        group.ThrowIfDisposed();
        throw new NotImplementedException();
    }

    public bool Remove(Widget item)
    {
        group.ThrowIfDisposed();
        var index = IndexOf(item);
        if (index != -1)
        {
            return false;
        }
        
        FLTKNative.Fl_Group_remove_by_index((FLTKNative.Fl_Group*)group.NativeHandle.ToPointer(), index);
        Interlocked.Increment(ref version);
        return true;
    }

    public int Count
    {
        get
        {
            group.ThrowIfDisposed();
            int count = FLTKNative.Fl_Group_children((FLTKNative.Fl_Group*)group.NativeHandle.ToPointer());
            return count;
        }
    }

    public bool IsReadOnly => false;
}

public readonly ref struct GroupAdder
{
    private readonly Group group;

    public GroupAdder(Group group)
    {
        this.group = group;
        group.Begin();
    }

    public void Dispose()
    {
        group.End();
    }
}