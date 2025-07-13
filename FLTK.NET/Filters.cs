using System.Collections.Immutable;

namespace FLTK.NET;

public static class Filters
{
    public static void OutputToBuffer(IImmutableList<FilterEntry> entries, Utf8Builder builder)
    {
        builder.Clear();
        bool first = true;
        foreach (var entry in entries)
        {
            if (!first)
            {
                builder.Append('\n');
            }

            if (entry.Description != null)
            {
                builder.Append(entry.Description);
                builder.Append('\t');
            }
            
            builder.Append(entry.Wildcard);
            
            first = false;
        }
    }
}