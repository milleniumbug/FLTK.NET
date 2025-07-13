namespace FLTK.NET;

// CHECK OUT
public enum CallbackReason : int
{
    Unknown,
    Selected,
    Deselected,
    Reselected,
    Opened,
    Closed,
    Dragged,
    Cancelled,
    Changed,
    GotFocus,
    LostFocus,
    Released,
    EnterKey,
    User,
}