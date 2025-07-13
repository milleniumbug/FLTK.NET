


typedef struct Fl_Widget Fl_Widget;
typedef void(Fl_Callback)(Fl_Widget *, void *);
typedef int (*custom_handler_callback)(Fl_Widget *, int, void *);
typedef void (*custom_draw_callback)(Fl_Widget *, void *);





typedef struct Fl_Box Fl_Box;
 Fl_Box *Fl_Box_new( int x, int y, int width, int height, const char *title );
 int Fl_Box_x(Fl_Box *);
 int Fl_Box_y(Fl_Box *);
 int Fl_Box_width(Fl_Box *);
 int Fl_Box_height(Fl_Box *);
 const char *Fl_Box_label(Fl_Box *);
 void Fl_Box_set_label(Fl_Box *, const char *title);
 void Fl_Box_redraw(Fl_Box *);
 void Fl_Box_show(Fl_Box *);
 void Fl_Box_hide(Fl_Box *);
 void Fl_Box_activate(Fl_Box *);
 void Fl_Box_deactivate(Fl_Box *);
 void Fl_Box_redraw_label(Fl_Box *);
 void Fl_Box_resize(Fl_Box *, int x, int y, int width, int height);
 void Fl_Box_widget_resize( Fl_Box *, int x, int y, int width, int height );
 const char *Fl_Box_tooltip(Fl_Box *);
 void Fl_Box_set_tooltip(Fl_Box *, const char *txt);
 int Fl_Box_get_type(Fl_Box *);
 void Fl_Box_set_type(Fl_Box *, int typ);
 unsigned int Fl_Box_color(Fl_Box *);
 void Fl_Box_set_color(Fl_Box *, unsigned int color);
 void Fl_Box_measure_label(const Fl_Box *, int *, int *);
 unsigned int Fl_Box_label_color(Fl_Box *);
 void Fl_Box_set_label_color(Fl_Box *, unsigned int color);
 int Fl_Box_label_font(Fl_Box *);
 void Fl_Box_set_label_font(Fl_Box *, int font);
 int Fl_Box_label_size(Fl_Box *);
 void Fl_Box_set_label_size(Fl_Box *, int sz);
 int Fl_Box_label_type(Fl_Box *);
 void Fl_Box_set_label_type(Fl_Box *, int typ);
 int Fl_Box_box(Fl_Box *);
 void Fl_Box_set_box(Fl_Box *, int typ);
 int Fl_Box_changed(Fl_Box *);
 void Fl_Box_set_changed(Fl_Box *);
 void Fl_Box_clear_changed(Fl_Box *);
 int Fl_Box_align(Fl_Box *);
 void Fl_Box_set_align(Fl_Box *, int typ);
 void Fl_Box_delete(Fl_Box *);
 void Fl_Box_set_image(Fl_Box *, void *);
 void Fl_Box_handle( Fl_Box *self, custom_handler_callback cb, void *data );
 int Fl_Box_handle_event(Fl_Box *self, int event);
 void Fl_Box_draw(Fl_Box *self, custom_draw_callback cb, void *data);
 void Fl_Box_resize_callback( Fl_Box *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Box_set_when(Fl_Box *, int);
 int Fl_Box_when(const Fl_Box *);
 const void *Fl_Box_image(const Fl_Box *);
 void *Fl_Box_parent(const Fl_Box *self);
 unsigned int Fl_Box_selection_color(Fl_Box *);
 void Fl_Box_set_selection_color(Fl_Box *, unsigned int color);
 void Fl_Box_do_callback(Fl_Box *);
 int Fl_Box_inside(const Fl_Box *self, void *);
 void *Fl_Box_window(const Fl_Box *);
 void *Fl_Box_top_window(const Fl_Box *);
 int Fl_Box_takes_events(const Fl_Box *);
 void *Fl_Box_user_data(const Fl_Box *);
 int Fl_Box_take_focus(Fl_Box *self);
 void Fl_Box_set_visible_focus(Fl_Box *self);
 void Fl_Box_clear_visible_focus(Fl_Box *self);
 void Fl_Box_visible_focus(Fl_Box *self, int v);
 unsigned int Fl_Box_has_visible_focus(Fl_Box *self);
 void Fl_Box_set_user_data(Fl_Box *, void *data);
 void *Fl_Box_draw_data(const Fl_Box *self);
 void *Fl_Box_handle_data(const Fl_Box *self);
 void Fl_Box_set_draw_data(Fl_Box *self, void *data);
 void Fl_Box_set_handle_data(Fl_Box *self, void *data);
 unsigned char Fl_Box_damage(const Fl_Box *self);
 void Fl_Box_set_damage(Fl_Box *self, unsigned char flag);
 void Fl_Box_set_damage_area( Fl_Box *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Box_clear_damage(Fl_Box *self);
 void *Fl_Box_as_window(Fl_Box *self);
 void *Fl_Box_as_group(Fl_Box *self);
 void Fl_Box_set_deimage(Fl_Box *, void *);
 const void *Fl_Box_deimage(const Fl_Box *);
 void Fl_Box_set_callback(Fl_Box *, Fl_Callback *, void *);
 int Fl_Box_visible(const Fl_Box *self);
 int Fl_Box_visible_r(const Fl_Box *self);
 unsigned int Fl_Box_active(const Fl_Box *self);
 int Fl_Box_active_r(const Fl_Box *self);
 Fl_Callback *Fl_Box_callback(const Fl_Box *self);
 void Fl_Box_set_deletion_callback( Fl_Box *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Box *Fl_Box_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Box *Fl_Box_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Box_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Box_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Box_super_handle_first(Fl_Widget *ptr, int flag);

typedef struct Fl_Browser Fl_Browser;
 Fl_Browser *Fl_Browser_new( int x, int y, int width, int height, const char *title );
 int Fl_Browser_x(Fl_Browser *);
 int Fl_Browser_y(Fl_Browser *);
 int Fl_Browser_width(Fl_Browser *);
 int Fl_Browser_height(Fl_Browser *);
 const char *Fl_Browser_label(Fl_Browser *);
 void Fl_Browser_set_label(Fl_Browser *, const char *title);
 void Fl_Browser_redraw(Fl_Browser *);
 void Fl_Browser_show(Fl_Browser *);
 void Fl_Browser_hide(Fl_Browser *);
 void Fl_Browser_activate(Fl_Browser *);
 void Fl_Browser_deactivate(Fl_Browser *);
 void Fl_Browser_redraw_label(Fl_Browser *);
 void Fl_Browser_resize(Fl_Browser *, int x, int y, int width, int height);
 void Fl_Browser_widget_resize( Fl_Browser *, int x, int y, int width, int height );
 const char *Fl_Browser_tooltip(Fl_Browser *);
 void Fl_Browser_set_tooltip(Fl_Browser *, const char *txt);
 int Fl_Browser_get_type(Fl_Browser *);
 void Fl_Browser_set_type(Fl_Browser *, int typ);
 unsigned int Fl_Browser_color(Fl_Browser *);
 void Fl_Browser_set_color(Fl_Browser *, unsigned int color);
 void Fl_Browser_measure_label(const Fl_Browser *, int *, int *);
 unsigned int Fl_Browser_label_color(Fl_Browser *);
 void Fl_Browser_set_label_color(Fl_Browser *, unsigned int color);
 int Fl_Browser_label_font(Fl_Browser *);
 void Fl_Browser_set_label_font(Fl_Browser *, int font);
 int Fl_Browser_label_size(Fl_Browser *);
 void Fl_Browser_set_label_size(Fl_Browser *, int sz);
 int Fl_Browser_label_type(Fl_Browser *);
 void Fl_Browser_set_label_type(Fl_Browser *, int typ);
 int Fl_Browser_box(Fl_Browser *);
 void Fl_Browser_set_box(Fl_Browser *, int typ);
 int Fl_Browser_changed(Fl_Browser *);
 void Fl_Browser_set_changed(Fl_Browser *);
 void Fl_Browser_clear_changed(Fl_Browser *);
 int Fl_Browser_align(Fl_Browser *);
 void Fl_Browser_set_align(Fl_Browser *, int typ);
 void Fl_Browser_delete(Fl_Browser *);
 void Fl_Browser_set_image(Fl_Browser *, void *);
 void Fl_Browser_handle( Fl_Browser *self, custom_handler_callback cb, void *data );
 int Fl_Browser_handle_event(Fl_Browser *self, int event);
 void Fl_Browser_draw(Fl_Browser *self, custom_draw_callback cb, void *data);
 void Fl_Browser_resize_callback( Fl_Browser *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Browser_set_when(Fl_Browser *, int);
 int Fl_Browser_when(const Fl_Browser *);
 const void *Fl_Browser_image(const Fl_Browser *);
 void *Fl_Browser_parent(const Fl_Browser *self);
 unsigned int Fl_Browser_selection_color(Fl_Browser *);
 void Fl_Browser_set_selection_color(Fl_Browser *, unsigned int color);
 void Fl_Browser_do_callback(Fl_Browser *);
 int Fl_Browser_inside(const Fl_Browser *self, void *);
 void *Fl_Browser_window(const Fl_Browser *);
 void *Fl_Browser_top_window(const Fl_Browser *);
 int Fl_Browser_takes_events(const Fl_Browser *);
 void *Fl_Browser_user_data(const Fl_Browser *);
 int Fl_Browser_take_focus(Fl_Browser *self);
 void Fl_Browser_set_visible_focus(Fl_Browser *self);
 void Fl_Browser_clear_visible_focus(Fl_Browser *self);
 void Fl_Browser_visible_focus(Fl_Browser *self, int v);
 unsigned int Fl_Browser_has_visible_focus(Fl_Browser *self);
 void Fl_Browser_set_user_data(Fl_Browser *, void *data);
 void *Fl_Browser_draw_data(const Fl_Browser *self);
 void *Fl_Browser_handle_data(const Fl_Browser *self);
 void Fl_Browser_set_draw_data(Fl_Browser *self, void *data);
 void Fl_Browser_set_handle_data(Fl_Browser *self, void *data);
 unsigned char Fl_Browser_damage(const Fl_Browser *self);
 void Fl_Browser_set_damage(Fl_Browser *self, unsigned char flag);
 void Fl_Browser_set_damage_area( Fl_Browser *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Browser_clear_damage(Fl_Browser *self);
 void *Fl_Browser_as_window(Fl_Browser *self);
 void *Fl_Browser_as_group(Fl_Browser *self);
 void Fl_Browser_set_deimage(Fl_Browser *, void *);
 const void *Fl_Browser_deimage(const Fl_Browser *);
 void Fl_Browser_set_callback(Fl_Browser *, Fl_Callback *, void *);
 int Fl_Browser_visible(const Fl_Browser *self);
 int Fl_Browser_visible_r(const Fl_Browser *self);
 unsigned int Fl_Browser_active(const Fl_Browser *self);
 int Fl_Browser_active_r(const Fl_Browser *self);
 Fl_Callback *Fl_Browser_callback(const Fl_Browser *self);
 void Fl_Browser_set_deletion_callback( Fl_Browser *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Browser *Fl_Browser_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Browser *Fl_Browser_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Browser_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Browser_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Browser_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Browser_value(Fl_Browser *);
 void Fl_Browser_remove(Fl_Browser *, int line);
 void Fl_Browser_add(Fl_Browser *, const char *newtext);
 void Fl_Browser_insert(Fl_Browser *, int line, const char *newtext);
 void Fl_Browser_move(Fl_Browser *, int to, int from);
 void Fl_Browser_swap(Fl_Browser *, int a, int b);
 void Fl_Browser_clear(Fl_Browser *);
 int Fl_Browser_size(const Fl_Browser *);
 int Fl_Browser_select(Fl_Browser *, int line);
 int Fl_Browser_select_ext(Fl_Browser *, int line, int val);
 int Fl_Browser_selected(const Fl_Browser *, int line);
 const char *Fl_Browser_text(const Fl_Browser *, int line);
 void Fl_Browser_set_text(Fl_Browser *, int line, const char *newtext);
 void Fl_Browser_load_file(Fl_Browser *, const char *file);
 int Fl_Browser_text_size(Fl_Browser *);
 void Fl_Browser_set_text_size(Fl_Browser *, int s);
 void Fl_Browser_set_icon(Fl_Browser *, int line, void *icon);
 void *Fl_Browser_icon(const Fl_Browser *, int line);
 void Fl_Browser_remove_icon(Fl_Browser *, int line);
 void Fl_Browser_topline(Fl_Browser *self, int line);
 int Fl_Browser_is_topline(Fl_Browser *self);
 void Fl_Browser_bottomline(Fl_Browser *self, int line);
 void Fl_Browser_middleline(Fl_Browser *self, int line);
 char Fl_Browser_format_char(const Fl_Browser *self);
 void Fl_Browser_set_format_char(Fl_Browser *self, char c);
 char Fl_Browser_column_char(const Fl_Browser *self);
 void Fl_Browser_set_column_char(Fl_Browser *self, char c);
 const int *Fl_Browser_column_widths(const Fl_Browser *self);
 void Fl_Browser_set_column_widths(Fl_Browser *self, const int *arr);
 int Fl_Browser_displayed(const Fl_Browser *self, int line);
 void Fl_Browser_make_visible(Fl_Browser *self, int line);
 int Fl_Browser_position(const Fl_Browser *self);
 void Fl_Browser_set_position(Fl_Browser *self, int pos);
 int Fl_Browser_hposition(const Fl_Browser *self);
 void Fl_Browser_set_hposition(Fl_Browser *self, int);
 unsigned char Fl_Browser_has_scrollbar(const Fl_Browser *self);
 void Fl_Browser_set_has_scrollbar(Fl_Browser *self, unsigned char mode);
 int Fl_Browser_scrollbar_size(const Fl_Browser *self);
 void Fl_Browser_set_scrollbar_size(Fl_Browser *self, int newSize);
 void Fl_Browser_sort(Fl_Browser *self);
 void *Fl_Browser_scrollbar(Fl_Browser *self);
 void *Fl_Browser_hscrollbar(Fl_Browser *self);
 void *Fl_Browser_data(const Fl_Browser *self, int line);
 void Fl_Browser_set_data(Fl_Browser *self, int line, void *data);
 void Fl_Browser_hide_line(Fl_Browser *self, int line);


typedef struct Fl_Hold_Browser Fl_Hold_Browser;
 Fl_Hold_Browser *Fl_Hold_Browser_new( int x, int y, int width, int height, const char *title );
 int Fl_Hold_Browser_x(Fl_Hold_Browser *);
 int Fl_Hold_Browser_y(Fl_Hold_Browser *);
 int Fl_Hold_Browser_width(Fl_Hold_Browser *);
 int Fl_Hold_Browser_height(Fl_Hold_Browser *);
 const char *Fl_Hold_Browser_label(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_label(Fl_Hold_Browser *, const char *title);
 void Fl_Hold_Browser_redraw(Fl_Hold_Browser *);
 void Fl_Hold_Browser_show(Fl_Hold_Browser *);
 void Fl_Hold_Browser_hide(Fl_Hold_Browser *);
 void Fl_Hold_Browser_activate(Fl_Hold_Browser *);
 void Fl_Hold_Browser_deactivate(Fl_Hold_Browser *);
 void Fl_Hold_Browser_redraw_label(Fl_Hold_Browser *);
 void Fl_Hold_Browser_resize(Fl_Hold_Browser *, int x, int y, int width, int height);
 void Fl_Hold_Browser_widget_resize( Fl_Hold_Browser *, int x, int y, int width, int height );
 const char *Fl_Hold_Browser_tooltip(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_tooltip(Fl_Hold_Browser *, const char *txt);
 int Fl_Hold_Browser_get_type(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_type(Fl_Hold_Browser *, int typ);
 unsigned int Fl_Hold_Browser_color(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_color(Fl_Hold_Browser *, unsigned int color);
 void Fl_Hold_Browser_measure_label(const Fl_Hold_Browser *, int *, int *);
 unsigned int Fl_Hold_Browser_label_color(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_label_color(Fl_Hold_Browser *, unsigned int color);
 int Fl_Hold_Browser_label_font(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_label_font(Fl_Hold_Browser *, int font);
 int Fl_Hold_Browser_label_size(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_label_size(Fl_Hold_Browser *, int sz);
 int Fl_Hold_Browser_label_type(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_label_type(Fl_Hold_Browser *, int typ);
 int Fl_Hold_Browser_box(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_box(Fl_Hold_Browser *, int typ);
 int Fl_Hold_Browser_changed(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_changed(Fl_Hold_Browser *);
 void Fl_Hold_Browser_clear_changed(Fl_Hold_Browser *);
 int Fl_Hold_Browser_align(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_align(Fl_Hold_Browser *, int typ);
 void Fl_Hold_Browser_delete(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_image(Fl_Hold_Browser *, void *);
 void Fl_Hold_Browser_handle( Fl_Hold_Browser *self, custom_handler_callback cb, void *data );
 int Fl_Hold_Browser_handle_event(Fl_Hold_Browser *self, int event);
 void Fl_Hold_Browser_draw(Fl_Hold_Browser *self, custom_draw_callback cb, void *data);
 void Fl_Hold_Browser_resize_callback( Fl_Hold_Browser *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Hold_Browser_set_when(Fl_Hold_Browser *, int);
 int Fl_Hold_Browser_when(const Fl_Hold_Browser *);
 const void *Fl_Hold_Browser_image(const Fl_Hold_Browser *);
 void *Fl_Hold_Browser_parent(const Fl_Hold_Browser *self);
 unsigned int Fl_Hold_Browser_selection_color(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_selection_color(Fl_Hold_Browser *, unsigned int color);
 void Fl_Hold_Browser_do_callback(Fl_Hold_Browser *);
 int Fl_Hold_Browser_inside(const Fl_Hold_Browser *self, void *);
 void *Fl_Hold_Browser_window(const Fl_Hold_Browser *);
 void *Fl_Hold_Browser_top_window(const Fl_Hold_Browser *);
 int Fl_Hold_Browser_takes_events(const Fl_Hold_Browser *);
 void *Fl_Hold_Browser_user_data(const Fl_Hold_Browser *);
 int Fl_Hold_Browser_take_focus(Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_visible_focus(Fl_Hold_Browser *self);
 void Fl_Hold_Browser_clear_visible_focus(Fl_Hold_Browser *self);
 void Fl_Hold_Browser_visible_focus(Fl_Hold_Browser *self, int v);
 unsigned int Fl_Hold_Browser_has_visible_focus(Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_user_data(Fl_Hold_Browser *, void *data);
 void *Fl_Hold_Browser_draw_data(const Fl_Hold_Browser *self);
 void *Fl_Hold_Browser_handle_data(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_draw_data(Fl_Hold_Browser *self, void *data);
 void Fl_Hold_Browser_set_handle_data(Fl_Hold_Browser *self, void *data);
 unsigned char Fl_Hold_Browser_damage(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_damage(Fl_Hold_Browser *self, unsigned char flag);
 void Fl_Hold_Browser_set_damage_area( Fl_Hold_Browser *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Hold_Browser_clear_damage(Fl_Hold_Browser *self);
 void *Fl_Hold_Browser_as_window(Fl_Hold_Browser *self);
 void *Fl_Hold_Browser_as_group(Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_deimage(Fl_Hold_Browser *, void *);
 const void *Fl_Hold_Browser_deimage(const Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_callback(Fl_Hold_Browser *, Fl_Callback *, void *);
 int Fl_Hold_Browser_visible(const Fl_Hold_Browser *self);
 int Fl_Hold_Browser_visible_r(const Fl_Hold_Browser *self);
 unsigned int Fl_Hold_Browser_active(const Fl_Hold_Browser *self);
 int Fl_Hold_Browser_active_r(const Fl_Hold_Browser *self);
 Fl_Callback *Fl_Hold_Browser_callback(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_deletion_callback( Fl_Hold_Browser *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Hold_Browser *Fl_Hold_Browser_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Hold_Browser *Fl_Hold_Browser_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Hold_Browser_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Hold_Browser_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Hold_Browser_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Hold_Browser_value(Fl_Hold_Browser *);
 void Fl_Hold_Browser_remove(Fl_Hold_Browser *, int line);
 void Fl_Hold_Browser_add(Fl_Hold_Browser *, const char *newtext);
 void Fl_Hold_Browser_insert(Fl_Hold_Browser *, int line, const char *newtext);
 void Fl_Hold_Browser_move(Fl_Hold_Browser *, int to, int from);
 void Fl_Hold_Browser_swap(Fl_Hold_Browser *, int a, int b);
 void Fl_Hold_Browser_clear(Fl_Hold_Browser *);
 int Fl_Hold_Browser_size(const Fl_Hold_Browser *);
 int Fl_Hold_Browser_select(Fl_Hold_Browser *, int line);
 int Fl_Hold_Browser_select_ext(Fl_Hold_Browser *, int line, int val);
 int Fl_Hold_Browser_selected(const Fl_Hold_Browser *, int line);
 const char *Fl_Hold_Browser_text(const Fl_Hold_Browser *, int line);
 void Fl_Hold_Browser_set_text(Fl_Hold_Browser *, int line, const char *newtext);
 void Fl_Hold_Browser_load_file(Fl_Hold_Browser *, const char *file);
 int Fl_Hold_Browser_text_size(Fl_Hold_Browser *);
 void Fl_Hold_Browser_set_text_size(Fl_Hold_Browser *, int s);
 void Fl_Hold_Browser_set_icon(Fl_Hold_Browser *, int line, void *icon);
 void *Fl_Hold_Browser_icon(const Fl_Hold_Browser *, int line);
 void Fl_Hold_Browser_remove_icon(Fl_Hold_Browser *, int line);
 void Fl_Hold_Browser_topline(Fl_Hold_Browser *self, int line);
 int Fl_Hold_Browser_is_topline(Fl_Hold_Browser *self);
 void Fl_Hold_Browser_bottomline(Fl_Hold_Browser *self, int line);
 void Fl_Hold_Browser_middleline(Fl_Hold_Browser *self, int line);
 char Fl_Hold_Browser_format_char(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_format_char(Fl_Hold_Browser *self, char c);
 char Fl_Hold_Browser_column_char(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_column_char(Fl_Hold_Browser *self, char c);
 const int *Fl_Hold_Browser_column_widths(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_column_widths(Fl_Hold_Browser *self, const int *arr);
 int Fl_Hold_Browser_displayed(const Fl_Hold_Browser *self, int line);
 void Fl_Hold_Browser_make_visible(Fl_Hold_Browser *self, int line);
 int Fl_Hold_Browser_position(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_position(Fl_Hold_Browser *self, int pos);
 int Fl_Hold_Browser_hposition(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_hposition(Fl_Hold_Browser *self, int);
 unsigned char Fl_Hold_Browser_has_scrollbar(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_has_scrollbar(Fl_Hold_Browser *self, unsigned char mode);
 int Fl_Hold_Browser_scrollbar_size(const Fl_Hold_Browser *self);
 void Fl_Hold_Browser_set_scrollbar_size(Fl_Hold_Browser *self, int newSize);
 void Fl_Hold_Browser_sort(Fl_Hold_Browser *self);
 void *Fl_Hold_Browser_scrollbar(Fl_Hold_Browser *self);
 void *Fl_Hold_Browser_hscrollbar(Fl_Hold_Browser *self);
 void *Fl_Hold_Browser_data(const Fl_Hold_Browser *self, int line);
 void Fl_Hold_Browser_set_data(Fl_Hold_Browser *self, int line, void *data);
 void Fl_Hold_Browser_hide_line(Fl_Hold_Browser *self, int line);


typedef struct Fl_Select_Browser Fl_Select_Browser;
 Fl_Select_Browser *Fl_Select_Browser_new( int x, int y, int width, int height, const char *title );
 int Fl_Select_Browser_x(Fl_Select_Browser *);
 int Fl_Select_Browser_y(Fl_Select_Browser *);
 int Fl_Select_Browser_width(Fl_Select_Browser *);
 int Fl_Select_Browser_height(Fl_Select_Browser *);
 const char *Fl_Select_Browser_label(Fl_Select_Browser *);
 void Fl_Select_Browser_set_label(Fl_Select_Browser *, const char *title);
 void Fl_Select_Browser_redraw(Fl_Select_Browser *);
 void Fl_Select_Browser_show(Fl_Select_Browser *);
 void Fl_Select_Browser_hide(Fl_Select_Browser *);
 void Fl_Select_Browser_activate(Fl_Select_Browser *);
 void Fl_Select_Browser_deactivate(Fl_Select_Browser *);
 void Fl_Select_Browser_redraw_label(Fl_Select_Browser *);
 void Fl_Select_Browser_resize(Fl_Select_Browser *, int x, int y, int width, int height);
 void Fl_Select_Browser_widget_resize( Fl_Select_Browser *, int x, int y, int width, int height );
 const char *Fl_Select_Browser_tooltip(Fl_Select_Browser *);
 void Fl_Select_Browser_set_tooltip(Fl_Select_Browser *, const char *txt);
 int Fl_Select_Browser_get_type(Fl_Select_Browser *);
 void Fl_Select_Browser_set_type(Fl_Select_Browser *, int typ);
 unsigned int Fl_Select_Browser_color(Fl_Select_Browser *);
 void Fl_Select_Browser_set_color(Fl_Select_Browser *, unsigned int color);
 void Fl_Select_Browser_measure_label(const Fl_Select_Browser *, int *, int *);
 unsigned int Fl_Select_Browser_label_color(Fl_Select_Browser *);
 void Fl_Select_Browser_set_label_color(Fl_Select_Browser *, unsigned int color);
 int Fl_Select_Browser_label_font(Fl_Select_Browser *);
 void Fl_Select_Browser_set_label_font(Fl_Select_Browser *, int font);
 int Fl_Select_Browser_label_size(Fl_Select_Browser *);
 void Fl_Select_Browser_set_label_size(Fl_Select_Browser *, int sz);
 int Fl_Select_Browser_label_type(Fl_Select_Browser *);
 void Fl_Select_Browser_set_label_type(Fl_Select_Browser *, int typ);
 int Fl_Select_Browser_box(Fl_Select_Browser *);
 void Fl_Select_Browser_set_box(Fl_Select_Browser *, int typ);
 int Fl_Select_Browser_changed(Fl_Select_Browser *);
 void Fl_Select_Browser_set_changed(Fl_Select_Browser *);
 void Fl_Select_Browser_clear_changed(Fl_Select_Browser *);
 int Fl_Select_Browser_align(Fl_Select_Browser *);
 void Fl_Select_Browser_set_align(Fl_Select_Browser *, int typ);
 void Fl_Select_Browser_delete(Fl_Select_Browser *);
 void Fl_Select_Browser_set_image(Fl_Select_Browser *, void *);
 void Fl_Select_Browser_handle( Fl_Select_Browser *self, custom_handler_callback cb, void *data );
 int Fl_Select_Browser_handle_event(Fl_Select_Browser *self, int event);
 void Fl_Select_Browser_draw(Fl_Select_Browser *self, custom_draw_callback cb, void *data);
 void Fl_Select_Browser_resize_callback( Fl_Select_Browser *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Select_Browser_set_when(Fl_Select_Browser *, int);
 int Fl_Select_Browser_when(const Fl_Select_Browser *);
 const void *Fl_Select_Browser_image(const Fl_Select_Browser *);
 void *Fl_Select_Browser_parent(const Fl_Select_Browser *self);
 unsigned int Fl_Select_Browser_selection_color(Fl_Select_Browser *);
 void Fl_Select_Browser_set_selection_color(Fl_Select_Browser *, unsigned int color);
 void Fl_Select_Browser_do_callback(Fl_Select_Browser *);
 int Fl_Select_Browser_inside(const Fl_Select_Browser *self, void *);
 void *Fl_Select_Browser_window(const Fl_Select_Browser *);
 void *Fl_Select_Browser_top_window(const Fl_Select_Browser *);
 int Fl_Select_Browser_takes_events(const Fl_Select_Browser *);
 void *Fl_Select_Browser_user_data(const Fl_Select_Browser *);
 int Fl_Select_Browser_take_focus(Fl_Select_Browser *self);
 void Fl_Select_Browser_set_visible_focus(Fl_Select_Browser *self);
 void Fl_Select_Browser_clear_visible_focus(Fl_Select_Browser *self);
 void Fl_Select_Browser_visible_focus(Fl_Select_Browser *self, int v);
 unsigned int Fl_Select_Browser_has_visible_focus(Fl_Select_Browser *self);
 void Fl_Select_Browser_set_user_data(Fl_Select_Browser *, void *data);
 void *Fl_Select_Browser_draw_data(const Fl_Select_Browser *self);
 void *Fl_Select_Browser_handle_data(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_draw_data(Fl_Select_Browser *self, void *data);
 void Fl_Select_Browser_set_handle_data(Fl_Select_Browser *self, void *data);
 unsigned char Fl_Select_Browser_damage(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_damage(Fl_Select_Browser *self, unsigned char flag);
 void Fl_Select_Browser_set_damage_area( Fl_Select_Browser *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Select_Browser_clear_damage(Fl_Select_Browser *self);
 void *Fl_Select_Browser_as_window(Fl_Select_Browser *self);
 void *Fl_Select_Browser_as_group(Fl_Select_Browser *self);
 void Fl_Select_Browser_set_deimage(Fl_Select_Browser *, void *);
 const void *Fl_Select_Browser_deimage(const Fl_Select_Browser *);
 void Fl_Select_Browser_set_callback(Fl_Select_Browser *, Fl_Callback *, void *);
 int Fl_Select_Browser_visible(const Fl_Select_Browser *self);
 int Fl_Select_Browser_visible_r(const Fl_Select_Browser *self);
 unsigned int Fl_Select_Browser_active(const Fl_Select_Browser *self);
 int Fl_Select_Browser_active_r(const Fl_Select_Browser *self);
 Fl_Callback *Fl_Select_Browser_callback(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_deletion_callback( Fl_Select_Browser *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Select_Browser *Fl_Select_Browser_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Select_Browser *Fl_Select_Browser_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Select_Browser_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Select_Browser_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Select_Browser_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Select_Browser_value(Fl_Select_Browser *);
 void Fl_Select_Browser_remove(Fl_Select_Browser *, int line);
 void Fl_Select_Browser_add(Fl_Select_Browser *, const char *newtext);
 void Fl_Select_Browser_insert(Fl_Select_Browser *, int line, const char *newtext);
 void Fl_Select_Browser_move(Fl_Select_Browser *, int to, int from);
 void Fl_Select_Browser_swap(Fl_Select_Browser *, int a, int b);
 void Fl_Select_Browser_clear(Fl_Select_Browser *);
 int Fl_Select_Browser_size(const Fl_Select_Browser *);
 int Fl_Select_Browser_select(Fl_Select_Browser *, int line);
 int Fl_Select_Browser_select_ext(Fl_Select_Browser *, int line, int val);
 int Fl_Select_Browser_selected(const Fl_Select_Browser *, int line);
 const char *Fl_Select_Browser_text(const Fl_Select_Browser *, int line);
 void Fl_Select_Browser_set_text(Fl_Select_Browser *, int line, const char *newtext);
 void Fl_Select_Browser_load_file(Fl_Select_Browser *, const char *file);
 int Fl_Select_Browser_text_size(Fl_Select_Browser *);
 void Fl_Select_Browser_set_text_size(Fl_Select_Browser *, int s);
 void Fl_Select_Browser_set_icon(Fl_Select_Browser *, int line, void *icon);
 void *Fl_Select_Browser_icon(const Fl_Select_Browser *, int line);
 void Fl_Select_Browser_remove_icon(Fl_Select_Browser *, int line);
 void Fl_Select_Browser_topline(Fl_Select_Browser *self, int line);
 int Fl_Select_Browser_is_topline(Fl_Select_Browser *self);
 void Fl_Select_Browser_bottomline(Fl_Select_Browser *self, int line);
 void Fl_Select_Browser_middleline(Fl_Select_Browser *self, int line);
 char Fl_Select_Browser_format_char(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_format_char(Fl_Select_Browser *self, char c);
 char Fl_Select_Browser_column_char(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_column_char(Fl_Select_Browser *self, char c);
 const int *Fl_Select_Browser_column_widths(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_column_widths(Fl_Select_Browser *self, const int *arr);
 int Fl_Select_Browser_displayed(const Fl_Select_Browser *self, int line);
 void Fl_Select_Browser_make_visible(Fl_Select_Browser *self, int line);
 int Fl_Select_Browser_position(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_position(Fl_Select_Browser *self, int pos);
 int Fl_Select_Browser_hposition(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_hposition(Fl_Select_Browser *self, int);
 unsigned char Fl_Select_Browser_has_scrollbar(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_has_scrollbar(Fl_Select_Browser *self, unsigned char mode);
 int Fl_Select_Browser_scrollbar_size(const Fl_Select_Browser *self);
 void Fl_Select_Browser_set_scrollbar_size(Fl_Select_Browser *self, int newSize);
 void Fl_Select_Browser_sort(Fl_Select_Browser *self);
 void *Fl_Select_Browser_scrollbar(Fl_Select_Browser *self);
 void *Fl_Select_Browser_hscrollbar(Fl_Select_Browser *self);
 void *Fl_Select_Browser_data(const Fl_Select_Browser *self, int line);
 void Fl_Select_Browser_set_data(Fl_Select_Browser *self, int line, void *data);
 void Fl_Select_Browser_hide_line(Fl_Select_Browser *self, int line);


typedef struct Fl_Multi_Browser Fl_Multi_Browser;
 Fl_Multi_Browser *Fl_Multi_Browser_new( int x, int y, int width, int height, const char *title );
 int Fl_Multi_Browser_x(Fl_Multi_Browser *);
 int Fl_Multi_Browser_y(Fl_Multi_Browser *);
 int Fl_Multi_Browser_width(Fl_Multi_Browser *);
 int Fl_Multi_Browser_height(Fl_Multi_Browser *);
 const char *Fl_Multi_Browser_label(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_label(Fl_Multi_Browser *, const char *title);
 void Fl_Multi_Browser_redraw(Fl_Multi_Browser *);
 void Fl_Multi_Browser_show(Fl_Multi_Browser *);
 void Fl_Multi_Browser_hide(Fl_Multi_Browser *);
 void Fl_Multi_Browser_activate(Fl_Multi_Browser *);
 void Fl_Multi_Browser_deactivate(Fl_Multi_Browser *);
 void Fl_Multi_Browser_redraw_label(Fl_Multi_Browser *);
 void Fl_Multi_Browser_resize(Fl_Multi_Browser *, int x, int y, int width, int height);
 void Fl_Multi_Browser_widget_resize( Fl_Multi_Browser *, int x, int y, int width, int height );
 const char *Fl_Multi_Browser_tooltip(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_tooltip(Fl_Multi_Browser *, const char *txt);
 int Fl_Multi_Browser_get_type(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_type(Fl_Multi_Browser *, int typ);
 unsigned int Fl_Multi_Browser_color(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_color(Fl_Multi_Browser *, unsigned int color);
 void Fl_Multi_Browser_measure_label(const Fl_Multi_Browser *, int *, int *);
 unsigned int Fl_Multi_Browser_label_color(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_label_color(Fl_Multi_Browser *, unsigned int color);
 int Fl_Multi_Browser_label_font(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_label_font(Fl_Multi_Browser *, int font);
 int Fl_Multi_Browser_label_size(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_label_size(Fl_Multi_Browser *, int sz);
 int Fl_Multi_Browser_label_type(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_label_type(Fl_Multi_Browser *, int typ);
 int Fl_Multi_Browser_box(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_box(Fl_Multi_Browser *, int typ);
 int Fl_Multi_Browser_changed(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_changed(Fl_Multi_Browser *);
 void Fl_Multi_Browser_clear_changed(Fl_Multi_Browser *);
 int Fl_Multi_Browser_align(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_align(Fl_Multi_Browser *, int typ);
 void Fl_Multi_Browser_delete(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_image(Fl_Multi_Browser *, void *);
 void Fl_Multi_Browser_handle( Fl_Multi_Browser *self, custom_handler_callback cb, void *data );
 int Fl_Multi_Browser_handle_event(Fl_Multi_Browser *self, int event);
 void Fl_Multi_Browser_draw(Fl_Multi_Browser *self, custom_draw_callback cb, void *data);
 void Fl_Multi_Browser_resize_callback( Fl_Multi_Browser *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Multi_Browser_set_when(Fl_Multi_Browser *, int);
 int Fl_Multi_Browser_when(const Fl_Multi_Browser *);
 const void *Fl_Multi_Browser_image(const Fl_Multi_Browser *);
 void *Fl_Multi_Browser_parent(const Fl_Multi_Browser *self);
 unsigned int Fl_Multi_Browser_selection_color(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_selection_color(Fl_Multi_Browser *, unsigned int color);
 void Fl_Multi_Browser_do_callback(Fl_Multi_Browser *);
 int Fl_Multi_Browser_inside(const Fl_Multi_Browser *self, void *);
 void *Fl_Multi_Browser_window(const Fl_Multi_Browser *);
 void *Fl_Multi_Browser_top_window(const Fl_Multi_Browser *);
 int Fl_Multi_Browser_takes_events(const Fl_Multi_Browser *);
 void *Fl_Multi_Browser_user_data(const Fl_Multi_Browser *);
 int Fl_Multi_Browser_take_focus(Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_visible_focus(Fl_Multi_Browser *self);
 void Fl_Multi_Browser_clear_visible_focus(Fl_Multi_Browser *self);
 void Fl_Multi_Browser_visible_focus(Fl_Multi_Browser *self, int v);
 unsigned int Fl_Multi_Browser_has_visible_focus(Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_user_data(Fl_Multi_Browser *, void *data);
 void *Fl_Multi_Browser_draw_data(const Fl_Multi_Browser *self);
 void *Fl_Multi_Browser_handle_data(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_draw_data(Fl_Multi_Browser *self, void *data);
 void Fl_Multi_Browser_set_handle_data(Fl_Multi_Browser *self, void *data);
 unsigned char Fl_Multi_Browser_damage(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_damage(Fl_Multi_Browser *self, unsigned char flag);
 void Fl_Multi_Browser_set_damage_area( Fl_Multi_Browser *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Multi_Browser_clear_damage(Fl_Multi_Browser *self);
 void *Fl_Multi_Browser_as_window(Fl_Multi_Browser *self);
 void *Fl_Multi_Browser_as_group(Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_deimage(Fl_Multi_Browser *, void *);
 const void *Fl_Multi_Browser_deimage(const Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_callback(Fl_Multi_Browser *, Fl_Callback *, void *);
 int Fl_Multi_Browser_visible(const Fl_Multi_Browser *self);
 int Fl_Multi_Browser_visible_r(const Fl_Multi_Browser *self);
 unsigned int Fl_Multi_Browser_active(const Fl_Multi_Browser *self);
 int Fl_Multi_Browser_active_r(const Fl_Multi_Browser *self);
 Fl_Callback *Fl_Multi_Browser_callback(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_deletion_callback( Fl_Multi_Browser *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Multi_Browser *Fl_Multi_Browser_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Multi_Browser *Fl_Multi_Browser_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Multi_Browser_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Multi_Browser_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Multi_Browser_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Multi_Browser_value(Fl_Multi_Browser *);
 void Fl_Multi_Browser_remove(Fl_Multi_Browser *, int line);
 void Fl_Multi_Browser_add(Fl_Multi_Browser *, const char *newtext);
 void Fl_Multi_Browser_insert(Fl_Multi_Browser *, int line, const char *newtext);
 void Fl_Multi_Browser_move(Fl_Multi_Browser *, int to, int from);
 void Fl_Multi_Browser_swap(Fl_Multi_Browser *, int a, int b);
 void Fl_Multi_Browser_clear(Fl_Multi_Browser *);
 int Fl_Multi_Browser_size(const Fl_Multi_Browser *);
 int Fl_Multi_Browser_select(Fl_Multi_Browser *, int line);
 int Fl_Multi_Browser_select_ext(Fl_Multi_Browser *, int line, int val);
 int Fl_Multi_Browser_selected(const Fl_Multi_Browser *, int line);
 const char *Fl_Multi_Browser_text(const Fl_Multi_Browser *, int line);
 void Fl_Multi_Browser_set_text(Fl_Multi_Browser *, int line, const char *newtext);
 void Fl_Multi_Browser_load_file(Fl_Multi_Browser *, const char *file);
 int Fl_Multi_Browser_text_size(Fl_Multi_Browser *);
 void Fl_Multi_Browser_set_text_size(Fl_Multi_Browser *, int s);
 void Fl_Multi_Browser_set_icon(Fl_Multi_Browser *, int line, void *icon);
 void *Fl_Multi_Browser_icon(const Fl_Multi_Browser *, int line);
 void Fl_Multi_Browser_remove_icon(Fl_Multi_Browser *, int line);
 void Fl_Multi_Browser_topline(Fl_Multi_Browser *self, int line);
 int Fl_Multi_Browser_is_topline(Fl_Multi_Browser *self);
 void Fl_Multi_Browser_bottomline(Fl_Multi_Browser *self, int line);
 void Fl_Multi_Browser_middleline(Fl_Multi_Browser *self, int line);
 char Fl_Multi_Browser_format_char(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_format_char(Fl_Multi_Browser *self, char c);
 char Fl_Multi_Browser_column_char(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_column_char(Fl_Multi_Browser *self, char c);
 const int *Fl_Multi_Browser_column_widths(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_column_widths(Fl_Multi_Browser *self, const int *arr);
 int Fl_Multi_Browser_displayed(const Fl_Multi_Browser *self, int line);
 void Fl_Multi_Browser_make_visible(Fl_Multi_Browser *self, int line);
 int Fl_Multi_Browser_position(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_position(Fl_Multi_Browser *self, int pos);
 int Fl_Multi_Browser_hposition(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_hposition(Fl_Multi_Browser *self, int);
 unsigned char Fl_Multi_Browser_has_scrollbar(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_has_scrollbar(Fl_Multi_Browser *self, unsigned char mode);
 int Fl_Multi_Browser_scrollbar_size(const Fl_Multi_Browser *self);
 void Fl_Multi_Browser_set_scrollbar_size(Fl_Multi_Browser *self, int newSize);
 void Fl_Multi_Browser_sort(Fl_Multi_Browser *self);
 void *Fl_Multi_Browser_scrollbar(Fl_Multi_Browser *self);
 void *Fl_Multi_Browser_hscrollbar(Fl_Multi_Browser *self);
 void *Fl_Multi_Browser_data(const Fl_Multi_Browser *self, int line);
 void Fl_Multi_Browser_set_data(Fl_Multi_Browser *self, int line, void *data);
 void Fl_Multi_Browser_hide_line(Fl_Multi_Browser *self, int line);


typedef struct Fl_File_Browser Fl_File_Browser;
 Fl_File_Browser *Fl_File_Browser_new( int x, int y, int width, int height, const char *title );
 int Fl_File_Browser_x(Fl_File_Browser *);
 int Fl_File_Browser_y(Fl_File_Browser *);
 int Fl_File_Browser_width(Fl_File_Browser *);
 int Fl_File_Browser_height(Fl_File_Browser *);
 const char *Fl_File_Browser_label(Fl_File_Browser *);
 void Fl_File_Browser_set_label(Fl_File_Browser *, const char *title);
 void Fl_File_Browser_redraw(Fl_File_Browser *);
 void Fl_File_Browser_show(Fl_File_Browser *);
 void Fl_File_Browser_hide(Fl_File_Browser *);
 void Fl_File_Browser_activate(Fl_File_Browser *);
 void Fl_File_Browser_deactivate(Fl_File_Browser *);
 void Fl_File_Browser_redraw_label(Fl_File_Browser *);
 void Fl_File_Browser_resize(Fl_File_Browser *, int x, int y, int width, int height);
 void Fl_File_Browser_widget_resize( Fl_File_Browser *, int x, int y, int width, int height );
 const char *Fl_File_Browser_tooltip(Fl_File_Browser *);
 void Fl_File_Browser_set_tooltip(Fl_File_Browser *, const char *txt);
 int Fl_File_Browser_get_type(Fl_File_Browser *);
 void Fl_File_Browser_set_type(Fl_File_Browser *, int typ);
 unsigned int Fl_File_Browser_color(Fl_File_Browser *);
 void Fl_File_Browser_set_color(Fl_File_Browser *, unsigned int color);
 void Fl_File_Browser_measure_label(const Fl_File_Browser *, int *, int *);
 unsigned int Fl_File_Browser_label_color(Fl_File_Browser *);
 void Fl_File_Browser_set_label_color(Fl_File_Browser *, unsigned int color);
 int Fl_File_Browser_label_font(Fl_File_Browser *);
 void Fl_File_Browser_set_label_font(Fl_File_Browser *, int font);
 int Fl_File_Browser_label_size(Fl_File_Browser *);
 void Fl_File_Browser_set_label_size(Fl_File_Browser *, int sz);
 int Fl_File_Browser_label_type(Fl_File_Browser *);
 void Fl_File_Browser_set_label_type(Fl_File_Browser *, int typ);
 int Fl_File_Browser_box(Fl_File_Browser *);
 void Fl_File_Browser_set_box(Fl_File_Browser *, int typ);
 int Fl_File_Browser_changed(Fl_File_Browser *);
 void Fl_File_Browser_set_changed(Fl_File_Browser *);
 void Fl_File_Browser_clear_changed(Fl_File_Browser *);
 int Fl_File_Browser_align(Fl_File_Browser *);
 void Fl_File_Browser_set_align(Fl_File_Browser *, int typ);
 void Fl_File_Browser_delete(Fl_File_Browser *);
 void Fl_File_Browser_set_image(Fl_File_Browser *, void *);
 void Fl_File_Browser_handle( Fl_File_Browser *self, custom_handler_callback cb, void *data );
 int Fl_File_Browser_handle_event(Fl_File_Browser *self, int event);
 void Fl_File_Browser_draw(Fl_File_Browser *self, custom_draw_callback cb, void *data);
 void Fl_File_Browser_resize_callback( Fl_File_Browser *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_File_Browser_set_when(Fl_File_Browser *, int);
 int Fl_File_Browser_when(const Fl_File_Browser *);
 const void *Fl_File_Browser_image(const Fl_File_Browser *);
 void *Fl_File_Browser_parent(const Fl_File_Browser *self);
 unsigned int Fl_File_Browser_selection_color(Fl_File_Browser *);
 void Fl_File_Browser_set_selection_color(Fl_File_Browser *, unsigned int color);
 void Fl_File_Browser_do_callback(Fl_File_Browser *);
 int Fl_File_Browser_inside(const Fl_File_Browser *self, void *);
 void *Fl_File_Browser_window(const Fl_File_Browser *);
 void *Fl_File_Browser_top_window(const Fl_File_Browser *);
 int Fl_File_Browser_takes_events(const Fl_File_Browser *);
 void *Fl_File_Browser_user_data(const Fl_File_Browser *);
 int Fl_File_Browser_take_focus(Fl_File_Browser *self);
 void Fl_File_Browser_set_visible_focus(Fl_File_Browser *self);
 void Fl_File_Browser_clear_visible_focus(Fl_File_Browser *self);
 void Fl_File_Browser_visible_focus(Fl_File_Browser *self, int v);
 unsigned int Fl_File_Browser_has_visible_focus(Fl_File_Browser *self);
 void Fl_File_Browser_set_user_data(Fl_File_Browser *, void *data);
 void *Fl_File_Browser_draw_data(const Fl_File_Browser *self);
 void *Fl_File_Browser_handle_data(const Fl_File_Browser *self);
 void Fl_File_Browser_set_draw_data(Fl_File_Browser *self, void *data);
 void Fl_File_Browser_set_handle_data(Fl_File_Browser *self, void *data);
 unsigned char Fl_File_Browser_damage(const Fl_File_Browser *self);
 void Fl_File_Browser_set_damage(Fl_File_Browser *self, unsigned char flag);
 void Fl_File_Browser_set_damage_area( Fl_File_Browser *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_File_Browser_clear_damage(Fl_File_Browser *self);
 void *Fl_File_Browser_as_window(Fl_File_Browser *self);
 void *Fl_File_Browser_as_group(Fl_File_Browser *self);
 void Fl_File_Browser_set_deimage(Fl_File_Browser *, void *);
 const void *Fl_File_Browser_deimage(const Fl_File_Browser *);
 void Fl_File_Browser_set_callback(Fl_File_Browser *, Fl_Callback *, void *);
 int Fl_File_Browser_visible(const Fl_File_Browser *self);
 int Fl_File_Browser_visible_r(const Fl_File_Browser *self);
 unsigned int Fl_File_Browser_active(const Fl_File_Browser *self);
 int Fl_File_Browser_active_r(const Fl_File_Browser *self);
 Fl_Callback *Fl_File_Browser_callback(const Fl_File_Browser *self);
 void Fl_File_Browser_set_deletion_callback( Fl_File_Browser *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_File_Browser *Fl_File_Browser_from_dyn_ptr(Fl_Widget *ptr);
 Fl_File_Browser *Fl_File_Browser_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_File_Browser_super_draw(Fl_Widget *ptr, int flag);
 void Fl_File_Browser_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_File_Browser_super_handle_first(Fl_Widget *ptr, int flag);


unsigned Fl_File_Browser_iconsize(const Fl_File_Browser *self);


void Fl_File_Browser_set_iconsize(Fl_File_Browser *self, unsigned s);


void Fl_File_Browser_set_filter(Fl_File_Browser *self, const char *pattern);


const char *Fl_File_Browser_filter(const Fl_File_Browser *self);


int Fl_File_Browser_filetype(const Fl_File_Browser *self);


void Fl_File_Browser_set_filetype(Fl_File_Browser *self, int t);


int Fl_File_Browser_value(Fl_File_Browser *);
 void Fl_File_Browser_remove(Fl_File_Browser *, int line);
 void Fl_File_Browser_add(Fl_File_Browser *, const char *newtext);
 void Fl_File_Browser_insert(Fl_File_Browser *, int line, const char *newtext);
 void Fl_File_Browser_move(Fl_File_Browser *, int to, int from);
 void Fl_File_Browser_swap(Fl_File_Browser *, int a, int b);
 void Fl_File_Browser_clear(Fl_File_Browser *);
 int Fl_File_Browser_size(const Fl_File_Browser *);
 int Fl_File_Browser_select(Fl_File_Browser *, int line);
 int Fl_File_Browser_select_ext(Fl_File_Browser *, int line, int val);
 int Fl_File_Browser_selected(const Fl_File_Browser *, int line);
 const char *Fl_File_Browser_text(const Fl_File_Browser *, int line);
 void Fl_File_Browser_set_text(Fl_File_Browser *, int line, const char *newtext);
 void Fl_File_Browser_load_file(Fl_File_Browser *, const char *file);
 int Fl_File_Browser_text_size(Fl_File_Browser *);
 void Fl_File_Browser_set_text_size(Fl_File_Browser *, int s);
 void Fl_File_Browser_set_icon(Fl_File_Browser *, int line, void *icon);
 void *Fl_File_Browser_icon(const Fl_File_Browser *, int line);
 void Fl_File_Browser_remove_icon(Fl_File_Browser *, int line);
 void Fl_File_Browser_topline(Fl_File_Browser *self, int line);
 int Fl_File_Browser_is_topline(Fl_File_Browser *self);
 void Fl_File_Browser_bottomline(Fl_File_Browser *self, int line);
 void Fl_File_Browser_middleline(Fl_File_Browser *self, int line);
 char Fl_File_Browser_format_char(const Fl_File_Browser *self);
 void Fl_File_Browser_set_format_char(Fl_File_Browser *self, char c);
 char Fl_File_Browser_column_char(const Fl_File_Browser *self);
 void Fl_File_Browser_set_column_char(Fl_File_Browser *self, char c);
 const int *Fl_File_Browser_column_widths(const Fl_File_Browser *self);
 void Fl_File_Browser_set_column_widths(Fl_File_Browser *self, const int *arr);
 int Fl_File_Browser_displayed(const Fl_File_Browser *self, int line);
 void Fl_File_Browser_make_visible(Fl_File_Browser *self, int line);
 int Fl_File_Browser_position(const Fl_File_Browser *self);
 void Fl_File_Browser_set_position(Fl_File_Browser *self, int pos);
 int Fl_File_Browser_hposition(const Fl_File_Browser *self);
 void Fl_File_Browser_set_hposition(Fl_File_Browser *self, int);
 unsigned char Fl_File_Browser_has_scrollbar(const Fl_File_Browser *self);
 void Fl_File_Browser_set_has_scrollbar(Fl_File_Browser *self, unsigned char mode);
 int Fl_File_Browser_scrollbar_size(const Fl_File_Browser *self);
 void Fl_File_Browser_set_scrollbar_size(Fl_File_Browser *self, int newSize);
 void Fl_File_Browser_sort(Fl_File_Browser *self);
 void *Fl_File_Browser_scrollbar(Fl_File_Browser *self);
 void *Fl_File_Browser_hscrollbar(Fl_File_Browser *self);
 void *Fl_File_Browser_data(const Fl_File_Browser *self, int line);
 void Fl_File_Browser_set_data(Fl_File_Browser *self, int line, void *data);
 void Fl_File_Browser_hide_line(Fl_File_Browser *self, int line);


typedef struct Fl_Check_Browser Fl_Check_Browser;
 Fl_Check_Browser *Fl_Check_Browser_new( int x, int y, int width, int height, const char *title );
 int Fl_Check_Browser_x(Fl_Check_Browser *);
 int Fl_Check_Browser_y(Fl_Check_Browser *);
 int Fl_Check_Browser_width(Fl_Check_Browser *);
 int Fl_Check_Browser_height(Fl_Check_Browser *);
 const char *Fl_Check_Browser_label(Fl_Check_Browser *);
 void Fl_Check_Browser_set_label(Fl_Check_Browser *, const char *title);
 void Fl_Check_Browser_redraw(Fl_Check_Browser *);
 void Fl_Check_Browser_show(Fl_Check_Browser *);
 void Fl_Check_Browser_hide(Fl_Check_Browser *);
 void Fl_Check_Browser_activate(Fl_Check_Browser *);
 void Fl_Check_Browser_deactivate(Fl_Check_Browser *);
 void Fl_Check_Browser_redraw_label(Fl_Check_Browser *);
 void Fl_Check_Browser_resize(Fl_Check_Browser *, int x, int y, int width, int height);
 void Fl_Check_Browser_widget_resize( Fl_Check_Browser *, int x, int y, int width, int height );
 const char *Fl_Check_Browser_tooltip(Fl_Check_Browser *);
 void Fl_Check_Browser_set_tooltip(Fl_Check_Browser *, const char *txt);
 int Fl_Check_Browser_get_type(Fl_Check_Browser *);
 void Fl_Check_Browser_set_type(Fl_Check_Browser *, int typ);
 unsigned int Fl_Check_Browser_color(Fl_Check_Browser *);
 void Fl_Check_Browser_set_color(Fl_Check_Browser *, unsigned int color);
 void Fl_Check_Browser_measure_label(const Fl_Check_Browser *, int *, int *);
 unsigned int Fl_Check_Browser_label_color(Fl_Check_Browser *);
 void Fl_Check_Browser_set_label_color(Fl_Check_Browser *, unsigned int color);
 int Fl_Check_Browser_label_font(Fl_Check_Browser *);
 void Fl_Check_Browser_set_label_font(Fl_Check_Browser *, int font);
 int Fl_Check_Browser_label_size(Fl_Check_Browser *);
 void Fl_Check_Browser_set_label_size(Fl_Check_Browser *, int sz);
 int Fl_Check_Browser_label_type(Fl_Check_Browser *);
 void Fl_Check_Browser_set_label_type(Fl_Check_Browser *, int typ);
 int Fl_Check_Browser_box(Fl_Check_Browser *);
 void Fl_Check_Browser_set_box(Fl_Check_Browser *, int typ);
 int Fl_Check_Browser_changed(Fl_Check_Browser *);
 void Fl_Check_Browser_set_changed(Fl_Check_Browser *);
 void Fl_Check_Browser_clear_changed(Fl_Check_Browser *);
 int Fl_Check_Browser_align(Fl_Check_Browser *);
 void Fl_Check_Browser_set_align(Fl_Check_Browser *, int typ);
 void Fl_Check_Browser_delete(Fl_Check_Browser *);
 void Fl_Check_Browser_set_image(Fl_Check_Browser *, void *);
 void Fl_Check_Browser_handle( Fl_Check_Browser *self, custom_handler_callback cb, void *data );
 int Fl_Check_Browser_handle_event(Fl_Check_Browser *self, int event);
 void Fl_Check_Browser_draw(Fl_Check_Browser *self, custom_draw_callback cb, void *data);
 void Fl_Check_Browser_resize_callback( Fl_Check_Browser *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Check_Browser_set_when(Fl_Check_Browser *, int);
 int Fl_Check_Browser_when(const Fl_Check_Browser *);
 const void *Fl_Check_Browser_image(const Fl_Check_Browser *);
 void *Fl_Check_Browser_parent(const Fl_Check_Browser *self);
 unsigned int Fl_Check_Browser_selection_color(Fl_Check_Browser *);
 void Fl_Check_Browser_set_selection_color(Fl_Check_Browser *, unsigned int color);
 void Fl_Check_Browser_do_callback(Fl_Check_Browser *);
 int Fl_Check_Browser_inside(const Fl_Check_Browser *self, void *);
 void *Fl_Check_Browser_window(const Fl_Check_Browser *);
 void *Fl_Check_Browser_top_window(const Fl_Check_Browser *);
 int Fl_Check_Browser_takes_events(const Fl_Check_Browser *);
 void *Fl_Check_Browser_user_data(const Fl_Check_Browser *);
 int Fl_Check_Browser_take_focus(Fl_Check_Browser *self);
 void Fl_Check_Browser_set_visible_focus(Fl_Check_Browser *self);
 void Fl_Check_Browser_clear_visible_focus(Fl_Check_Browser *self);
 void Fl_Check_Browser_visible_focus(Fl_Check_Browser *self, int v);
 unsigned int Fl_Check_Browser_has_visible_focus(Fl_Check_Browser *self);
 void Fl_Check_Browser_set_user_data(Fl_Check_Browser *, void *data);
 void *Fl_Check_Browser_draw_data(const Fl_Check_Browser *self);
 void *Fl_Check_Browser_handle_data(const Fl_Check_Browser *self);
 void Fl_Check_Browser_set_draw_data(Fl_Check_Browser *self, void *data);
 void Fl_Check_Browser_set_handle_data(Fl_Check_Browser *self, void *data);
 unsigned char Fl_Check_Browser_damage(const Fl_Check_Browser *self);
 void Fl_Check_Browser_set_damage(Fl_Check_Browser *self, unsigned char flag);
 void Fl_Check_Browser_set_damage_area( Fl_Check_Browser *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Check_Browser_clear_damage(Fl_Check_Browser *self);
 void *Fl_Check_Browser_as_window(Fl_Check_Browser *self);
 void *Fl_Check_Browser_as_group(Fl_Check_Browser *self);
 void Fl_Check_Browser_set_deimage(Fl_Check_Browser *, void *);
 const void *Fl_Check_Browser_deimage(const Fl_Check_Browser *);
 void Fl_Check_Browser_set_callback(Fl_Check_Browser *, Fl_Callback *, void *);
 int Fl_Check_Browser_visible(const Fl_Check_Browser *self);
 int Fl_Check_Browser_visible_r(const Fl_Check_Browser *self);
 unsigned int Fl_Check_Browser_active(const Fl_Check_Browser *self);
 int Fl_Check_Browser_active_r(const Fl_Check_Browser *self);
 Fl_Callback *Fl_Check_Browser_callback(const Fl_Check_Browser *self);
 void Fl_Check_Browser_set_deletion_callback( Fl_Check_Browser *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Check_Browser *Fl_Check_Browser_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Check_Browser *Fl_Check_Browser_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Check_Browser_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Check_Browser_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Check_Browser_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Check_Browser_add(Fl_Check_Browser *self, const char *s, int b);


int Fl_Check_Browser_remove(Fl_Check_Browser *self, int item);


void Fl_Check_Browser_clear(Fl_Check_Browser *self);


int Fl_Check_Browser_nitems(const Fl_Check_Browser *self);


int Fl_Check_Browser_nchecked(const Fl_Check_Browser *self);


int Fl_Check_Browser_checked(const Fl_Check_Browser *self, int item);


void Fl_Check_Browser_set_checked(Fl_Check_Browser *self, int item);


void Fl_Check_Browser_check_all(Fl_Check_Browser *self);


void Fl_Check_Browser_check_none(Fl_Check_Browser *self);


int Fl_Check_Browser_value(const Fl_Check_Browser *self);


const char *Fl_Check_Browser_text(const Fl_Check_Browser *self, int item);


int Fl_Check_Browser_position(const Fl_Check_Browser *self);


void Fl_Check_Browser_set_position(Fl_Check_Browser *self, int pos);


int Fl_Check_Browser_hposition(const Fl_Check_Browser *self);


void Fl_Check_Browser_set_hposition(Fl_Check_Browser *self, int);


unsigned char Fl_Check_Browser_has_scrollbar(const Fl_Check_Browser *self);


const void *Fl_Check_Browser_scrollbar(const Fl_Check_Browser *self);


const void *Fl_Check_Browser_hscrollbar(const Fl_Check_Browser *self);


void Fl_Check_Browser_set_has_scrollbar(
    Fl_Check_Browser *self, unsigned char mode
);


int Fl_Check_Browser_scrollbar_size(const Fl_Check_Browser *self);


void Fl_Check_Browser_set_scrollbar_size(Fl_Check_Browser *self, int newSize);


void Fl_Check_Browser_sort(Fl_Check_Browser *self);


void Fl_Check_Browser_set_text_color(Fl_Check_Browser *self, unsigned int c);


unsigned int Fl_Check_Browser_text_color(Fl_Check_Browser *self);


void Fl_Check_Browser_set_text_font(Fl_Check_Browser *self, int f);


int Fl_Check_Browser_text_font(Fl_Check_Browser *self);


void Fl_Check_Browser_set_text_size(Fl_Check_Browser *self, int s);


int Fl_Check_Browser_text_size(Fl_Check_Browser *self);

typedef struct Fl_Button Fl_Button;
 Fl_Button *Fl_Button_new( int x, int y, int width, int height, const char *title );
 int Fl_Button_x(Fl_Button *);
 int Fl_Button_y(Fl_Button *);
 int Fl_Button_width(Fl_Button *);
 int Fl_Button_height(Fl_Button *);
 const char *Fl_Button_label(Fl_Button *);
 void Fl_Button_set_label(Fl_Button *, const char *title);
 void Fl_Button_redraw(Fl_Button *);
 void Fl_Button_show(Fl_Button *);
 void Fl_Button_hide(Fl_Button *);
 void Fl_Button_activate(Fl_Button *);
 void Fl_Button_deactivate(Fl_Button *);
 void Fl_Button_redraw_label(Fl_Button *);
 void Fl_Button_resize(Fl_Button *, int x, int y, int width, int height);
 void Fl_Button_widget_resize( Fl_Button *, int x, int y, int width, int height );
 const char *Fl_Button_tooltip(Fl_Button *);
 void Fl_Button_set_tooltip(Fl_Button *, const char *txt);
 int Fl_Button_get_type(Fl_Button *);
 void Fl_Button_set_type(Fl_Button *, int typ);
 unsigned int Fl_Button_color(Fl_Button *);
 void Fl_Button_set_color(Fl_Button *, unsigned int color);
 void Fl_Button_measure_label(const Fl_Button *, int *, int *);
 unsigned int Fl_Button_label_color(Fl_Button *);
 void Fl_Button_set_label_color(Fl_Button *, unsigned int color);
 int Fl_Button_label_font(Fl_Button *);
 void Fl_Button_set_label_font(Fl_Button *, int font);
 int Fl_Button_label_size(Fl_Button *);
 void Fl_Button_set_label_size(Fl_Button *, int sz);
 int Fl_Button_label_type(Fl_Button *);
 void Fl_Button_set_label_type(Fl_Button *, int typ);
 int Fl_Button_box(Fl_Button *);
 void Fl_Button_set_box(Fl_Button *, int typ);
 int Fl_Button_changed(Fl_Button *);
 void Fl_Button_set_changed(Fl_Button *);
 void Fl_Button_clear_changed(Fl_Button *);
 int Fl_Button_align(Fl_Button *);
 void Fl_Button_set_align(Fl_Button *, int typ);
 void Fl_Button_delete(Fl_Button *);
 void Fl_Button_set_image(Fl_Button *, void *);
 void Fl_Button_handle( Fl_Button *self, custom_handler_callback cb, void *data );
 int Fl_Button_handle_event(Fl_Button *self, int event);
 void Fl_Button_draw(Fl_Button *self, custom_draw_callback cb, void *data);
 void Fl_Button_resize_callback( Fl_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Button_set_when(Fl_Button *, int);
 int Fl_Button_when(const Fl_Button *);
 const void *Fl_Button_image(const Fl_Button *);
 void *Fl_Button_parent(const Fl_Button *self);
 unsigned int Fl_Button_selection_color(Fl_Button *);
 void Fl_Button_set_selection_color(Fl_Button *, unsigned int color);
 void Fl_Button_do_callback(Fl_Button *);
 int Fl_Button_inside(const Fl_Button *self, void *);
 void *Fl_Button_window(const Fl_Button *);
 void *Fl_Button_top_window(const Fl_Button *);
 int Fl_Button_takes_events(const Fl_Button *);
 void *Fl_Button_user_data(const Fl_Button *);
 int Fl_Button_take_focus(Fl_Button *self);
 void Fl_Button_set_visible_focus(Fl_Button *self);
 void Fl_Button_clear_visible_focus(Fl_Button *self);
 void Fl_Button_visible_focus(Fl_Button *self, int v);
 unsigned int Fl_Button_has_visible_focus(Fl_Button *self);
 void Fl_Button_set_user_data(Fl_Button *, void *data);
 void *Fl_Button_draw_data(const Fl_Button *self);
 void *Fl_Button_handle_data(const Fl_Button *self);
 void Fl_Button_set_draw_data(Fl_Button *self, void *data);
 void Fl_Button_set_handle_data(Fl_Button *self, void *data);
 unsigned char Fl_Button_damage(const Fl_Button *self);
 void Fl_Button_set_damage(Fl_Button *self, unsigned char flag);
 void Fl_Button_set_damage_area( Fl_Button *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Button_clear_damage(Fl_Button *self);
 void *Fl_Button_as_window(Fl_Button *self);
 void *Fl_Button_as_group(Fl_Button *self);
 void Fl_Button_set_deimage(Fl_Button *, void *);
 const void *Fl_Button_deimage(const Fl_Button *);
 void Fl_Button_set_callback(Fl_Button *, Fl_Callback *, void *);
 int Fl_Button_visible(const Fl_Button *self);
 int Fl_Button_visible_r(const Fl_Button *self);
 unsigned int Fl_Button_active(const Fl_Button *self);
 int Fl_Button_active_r(const Fl_Button *self);
 Fl_Callback *Fl_Button_callback(const Fl_Button *self);
 void Fl_Button_set_deletion_callback( Fl_Button *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Button *Fl_Button_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Button *Fl_Button_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Button_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Button_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Button_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Button_shortcut(const Fl_Button *self);
 void Fl_Button_set_shortcut(Fl_Button *self, int shortcut);
 int Fl_Button_clear(Fl_Button *self);
 int Fl_Button_value(Fl_Button *self);
 void Fl_Button_set_value(Fl_Button *self, int flag);
 void Fl_Button_set_down_box(Fl_Button *self, int);
 int Fl_Button_down_box(const Fl_Button *self);
 void Fl_Button_set_compact(Fl_Button *self, unsigned char v);
 unsigned char Fl_Button_compact(Fl_Button *self);


typedef struct Fl_Check_Button Fl_Check_Button;
 Fl_Check_Button *Fl_Check_Button_new( int x, int y, int width, int height, const char *title );
 int Fl_Check_Button_x(Fl_Check_Button *);
 int Fl_Check_Button_y(Fl_Check_Button *);
 int Fl_Check_Button_width(Fl_Check_Button *);
 int Fl_Check_Button_height(Fl_Check_Button *);
 const char *Fl_Check_Button_label(Fl_Check_Button *);
 void Fl_Check_Button_set_label(Fl_Check_Button *, const char *title);
 void Fl_Check_Button_redraw(Fl_Check_Button *);
 void Fl_Check_Button_show(Fl_Check_Button *);
 void Fl_Check_Button_hide(Fl_Check_Button *);
 void Fl_Check_Button_activate(Fl_Check_Button *);
 void Fl_Check_Button_deactivate(Fl_Check_Button *);
 void Fl_Check_Button_redraw_label(Fl_Check_Button *);
 void Fl_Check_Button_resize(Fl_Check_Button *, int x, int y, int width, int height);
 void Fl_Check_Button_widget_resize( Fl_Check_Button *, int x, int y, int width, int height );
 const char *Fl_Check_Button_tooltip(Fl_Check_Button *);
 void Fl_Check_Button_set_tooltip(Fl_Check_Button *, const char *txt);
 int Fl_Check_Button_get_type(Fl_Check_Button *);
 void Fl_Check_Button_set_type(Fl_Check_Button *, int typ);
 unsigned int Fl_Check_Button_color(Fl_Check_Button *);
 void Fl_Check_Button_set_color(Fl_Check_Button *, unsigned int color);
 void Fl_Check_Button_measure_label(const Fl_Check_Button *, int *, int *);
 unsigned int Fl_Check_Button_label_color(Fl_Check_Button *);
 void Fl_Check_Button_set_label_color(Fl_Check_Button *, unsigned int color);
 int Fl_Check_Button_label_font(Fl_Check_Button *);
 void Fl_Check_Button_set_label_font(Fl_Check_Button *, int font);
 int Fl_Check_Button_label_size(Fl_Check_Button *);
 void Fl_Check_Button_set_label_size(Fl_Check_Button *, int sz);
 int Fl_Check_Button_label_type(Fl_Check_Button *);
 void Fl_Check_Button_set_label_type(Fl_Check_Button *, int typ);
 int Fl_Check_Button_box(Fl_Check_Button *);
 void Fl_Check_Button_set_box(Fl_Check_Button *, int typ);
 int Fl_Check_Button_changed(Fl_Check_Button *);
 void Fl_Check_Button_set_changed(Fl_Check_Button *);
 void Fl_Check_Button_clear_changed(Fl_Check_Button *);
 int Fl_Check_Button_align(Fl_Check_Button *);
 void Fl_Check_Button_set_align(Fl_Check_Button *, int typ);
 void Fl_Check_Button_delete(Fl_Check_Button *);
 void Fl_Check_Button_set_image(Fl_Check_Button *, void *);
 void Fl_Check_Button_handle( Fl_Check_Button *self, custom_handler_callback cb, void *data );
 int Fl_Check_Button_handle_event(Fl_Check_Button *self, int event);
 void Fl_Check_Button_draw(Fl_Check_Button *self, custom_draw_callback cb, void *data);
 void Fl_Check_Button_resize_callback( Fl_Check_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Check_Button_set_when(Fl_Check_Button *, int);
 int Fl_Check_Button_when(const Fl_Check_Button *);
 const void *Fl_Check_Button_image(const Fl_Check_Button *);
 void *Fl_Check_Button_parent(const Fl_Check_Button *self);
 unsigned int Fl_Check_Button_selection_color(Fl_Check_Button *);
 void Fl_Check_Button_set_selection_color(Fl_Check_Button *, unsigned int color);
 void Fl_Check_Button_do_callback(Fl_Check_Button *);
 int Fl_Check_Button_inside(const Fl_Check_Button *self, void *);
 void *Fl_Check_Button_window(const Fl_Check_Button *);
 void *Fl_Check_Button_top_window(const Fl_Check_Button *);
 int Fl_Check_Button_takes_events(const Fl_Check_Button *);
 void *Fl_Check_Button_user_data(const Fl_Check_Button *);
 int Fl_Check_Button_take_focus(Fl_Check_Button *self);
 void Fl_Check_Button_set_visible_focus(Fl_Check_Button *self);
 void Fl_Check_Button_clear_visible_focus(Fl_Check_Button *self);
 void Fl_Check_Button_visible_focus(Fl_Check_Button *self, int v);
 unsigned int Fl_Check_Button_has_visible_focus(Fl_Check_Button *self);
 void Fl_Check_Button_set_user_data(Fl_Check_Button *, void *data);
 void *Fl_Check_Button_draw_data(const Fl_Check_Button *self);
 void *Fl_Check_Button_handle_data(const Fl_Check_Button *self);
 void Fl_Check_Button_set_draw_data(Fl_Check_Button *self, void *data);
 void Fl_Check_Button_set_handle_data(Fl_Check_Button *self, void *data);
 unsigned char Fl_Check_Button_damage(const Fl_Check_Button *self);
 void Fl_Check_Button_set_damage(Fl_Check_Button *self, unsigned char flag);
 void Fl_Check_Button_set_damage_area( Fl_Check_Button *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Check_Button_clear_damage(Fl_Check_Button *self);
 void *Fl_Check_Button_as_window(Fl_Check_Button *self);
 void *Fl_Check_Button_as_group(Fl_Check_Button *self);
 void Fl_Check_Button_set_deimage(Fl_Check_Button *, void *);
 const void *Fl_Check_Button_deimage(const Fl_Check_Button *);
 void Fl_Check_Button_set_callback(Fl_Check_Button *, Fl_Callback *, void *);
 int Fl_Check_Button_visible(const Fl_Check_Button *self);
 int Fl_Check_Button_visible_r(const Fl_Check_Button *self);
 unsigned int Fl_Check_Button_active(const Fl_Check_Button *self);
 int Fl_Check_Button_active_r(const Fl_Check_Button *self);
 Fl_Callback *Fl_Check_Button_callback(const Fl_Check_Button *self);
 void Fl_Check_Button_set_deletion_callback( Fl_Check_Button *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Check_Button *Fl_Check_Button_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Check_Button *Fl_Check_Button_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Check_Button_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Check_Button_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Check_Button_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Check_Button_is_checked(Fl_Check_Button *);


void Fl_Check_Button_set_checked(Fl_Check_Button *self, int checked);


int Fl_Check_Button_shortcut(const Fl_Check_Button *self);
 void Fl_Check_Button_set_shortcut(Fl_Check_Button *self, int shortcut);
 int Fl_Check_Button_clear(Fl_Check_Button *self);
 int Fl_Check_Button_value(Fl_Check_Button *self);
 void Fl_Check_Button_set_value(Fl_Check_Button *self, int flag);
 void Fl_Check_Button_set_down_box(Fl_Check_Button *self, int);
 int Fl_Check_Button_down_box(const Fl_Check_Button *self);
 void Fl_Check_Button_set_compact(Fl_Check_Button *self, unsigned char v);
 unsigned char Fl_Check_Button_compact(Fl_Check_Button *self);


typedef struct Fl_Radio_Button Fl_Radio_Button;
 Fl_Radio_Button *Fl_Radio_Button_new( int x, int y, int width, int height, const char *title );
 int Fl_Radio_Button_x(Fl_Radio_Button *);
 int Fl_Radio_Button_y(Fl_Radio_Button *);
 int Fl_Radio_Button_width(Fl_Radio_Button *);
 int Fl_Radio_Button_height(Fl_Radio_Button *);
 const char *Fl_Radio_Button_label(Fl_Radio_Button *);
 void Fl_Radio_Button_set_label(Fl_Radio_Button *, const char *title);
 void Fl_Radio_Button_redraw(Fl_Radio_Button *);
 void Fl_Radio_Button_show(Fl_Radio_Button *);
 void Fl_Radio_Button_hide(Fl_Radio_Button *);
 void Fl_Radio_Button_activate(Fl_Radio_Button *);
 void Fl_Radio_Button_deactivate(Fl_Radio_Button *);
 void Fl_Radio_Button_redraw_label(Fl_Radio_Button *);
 void Fl_Radio_Button_resize(Fl_Radio_Button *, int x, int y, int width, int height);
 void Fl_Radio_Button_widget_resize( Fl_Radio_Button *, int x, int y, int width, int height );
 const char *Fl_Radio_Button_tooltip(Fl_Radio_Button *);
 void Fl_Radio_Button_set_tooltip(Fl_Radio_Button *, const char *txt);
 int Fl_Radio_Button_get_type(Fl_Radio_Button *);
 void Fl_Radio_Button_set_type(Fl_Radio_Button *, int typ);
 unsigned int Fl_Radio_Button_color(Fl_Radio_Button *);
 void Fl_Radio_Button_set_color(Fl_Radio_Button *, unsigned int color);
 void Fl_Radio_Button_measure_label(const Fl_Radio_Button *, int *, int *);
 unsigned int Fl_Radio_Button_label_color(Fl_Radio_Button *);
 void Fl_Radio_Button_set_label_color(Fl_Radio_Button *, unsigned int color);
 int Fl_Radio_Button_label_font(Fl_Radio_Button *);
 void Fl_Radio_Button_set_label_font(Fl_Radio_Button *, int font);
 int Fl_Radio_Button_label_size(Fl_Radio_Button *);
 void Fl_Radio_Button_set_label_size(Fl_Radio_Button *, int sz);
 int Fl_Radio_Button_label_type(Fl_Radio_Button *);
 void Fl_Radio_Button_set_label_type(Fl_Radio_Button *, int typ);
 int Fl_Radio_Button_box(Fl_Radio_Button *);
 void Fl_Radio_Button_set_box(Fl_Radio_Button *, int typ);
 int Fl_Radio_Button_changed(Fl_Radio_Button *);
 void Fl_Radio_Button_set_changed(Fl_Radio_Button *);
 void Fl_Radio_Button_clear_changed(Fl_Radio_Button *);
 int Fl_Radio_Button_align(Fl_Radio_Button *);
 void Fl_Radio_Button_set_align(Fl_Radio_Button *, int typ);
 void Fl_Radio_Button_delete(Fl_Radio_Button *);
 void Fl_Radio_Button_set_image(Fl_Radio_Button *, void *);
 void Fl_Radio_Button_handle( Fl_Radio_Button *self, custom_handler_callback cb, void *data );
 int Fl_Radio_Button_handle_event(Fl_Radio_Button *self, int event);
 void Fl_Radio_Button_draw(Fl_Radio_Button *self, custom_draw_callback cb, void *data);
 void Fl_Radio_Button_resize_callback( Fl_Radio_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Radio_Button_set_when(Fl_Radio_Button *, int);
 int Fl_Radio_Button_when(const Fl_Radio_Button *);
 const void *Fl_Radio_Button_image(const Fl_Radio_Button *);
 void *Fl_Radio_Button_parent(const Fl_Radio_Button *self);
 unsigned int Fl_Radio_Button_selection_color(Fl_Radio_Button *);
 void Fl_Radio_Button_set_selection_color(Fl_Radio_Button *, unsigned int color);
 void Fl_Radio_Button_do_callback(Fl_Radio_Button *);
 int Fl_Radio_Button_inside(const Fl_Radio_Button *self, void *);
 void *Fl_Radio_Button_window(const Fl_Radio_Button *);
 void *Fl_Radio_Button_top_window(const Fl_Radio_Button *);
 int Fl_Radio_Button_takes_events(const Fl_Radio_Button *);
 void *Fl_Radio_Button_user_data(const Fl_Radio_Button *);
 int Fl_Radio_Button_take_focus(Fl_Radio_Button *self);
 void Fl_Radio_Button_set_visible_focus(Fl_Radio_Button *self);
 void Fl_Radio_Button_clear_visible_focus(Fl_Radio_Button *self);
 void Fl_Radio_Button_visible_focus(Fl_Radio_Button *self, int v);
 unsigned int Fl_Radio_Button_has_visible_focus(Fl_Radio_Button *self);
 void Fl_Radio_Button_set_user_data(Fl_Radio_Button *, void *data);
 void *Fl_Radio_Button_draw_data(const Fl_Radio_Button *self);
 void *Fl_Radio_Button_handle_data(const Fl_Radio_Button *self);
 void Fl_Radio_Button_set_draw_data(Fl_Radio_Button *self, void *data);
 void Fl_Radio_Button_set_handle_data(Fl_Radio_Button *self, void *data);
 unsigned char Fl_Radio_Button_damage(const Fl_Radio_Button *self);
 void Fl_Radio_Button_set_damage(Fl_Radio_Button *self, unsigned char flag);
 void Fl_Radio_Button_set_damage_area( Fl_Radio_Button *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Radio_Button_clear_damage(Fl_Radio_Button *self);
 void *Fl_Radio_Button_as_window(Fl_Radio_Button *self);
 void *Fl_Radio_Button_as_group(Fl_Radio_Button *self);
 void Fl_Radio_Button_set_deimage(Fl_Radio_Button *, void *);
 const void *Fl_Radio_Button_deimage(const Fl_Radio_Button *);
 void Fl_Radio_Button_set_callback(Fl_Radio_Button *, Fl_Callback *, void *);
 int Fl_Radio_Button_visible(const Fl_Radio_Button *self);
 int Fl_Radio_Button_visible_r(const Fl_Radio_Button *self);
 unsigned int Fl_Radio_Button_active(const Fl_Radio_Button *self);
 int Fl_Radio_Button_active_r(const Fl_Radio_Button *self);
 Fl_Callback *Fl_Radio_Button_callback(const Fl_Radio_Button *self);
 void Fl_Radio_Button_set_deletion_callback( Fl_Radio_Button *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Radio_Button *Fl_Radio_Button_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Radio_Button *Fl_Radio_Button_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Radio_Button_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Radio_Button_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Radio_Button_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Radio_Button_is_toggled(Fl_Radio_Button *);


void Fl_Radio_Button_toggle(Fl_Radio_Button *, int);


int Fl_Radio_Button_shortcut(const Fl_Radio_Button *self);
 void Fl_Radio_Button_set_shortcut(Fl_Radio_Button *self, int shortcut);
 int Fl_Radio_Button_clear(Fl_Radio_Button *self);
 int Fl_Radio_Button_value(Fl_Radio_Button *self);
 void Fl_Radio_Button_set_value(Fl_Radio_Button *self, int flag);
 void Fl_Radio_Button_set_down_box(Fl_Radio_Button *self, int);
 int Fl_Radio_Button_down_box(const Fl_Radio_Button *self);
 void Fl_Radio_Button_set_compact(Fl_Radio_Button *self, unsigned char v);
 unsigned char Fl_Radio_Button_compact(Fl_Radio_Button *self);


typedef struct Fl_Toggle_Button Fl_Toggle_Button;
 Fl_Toggle_Button *Fl_Toggle_Button_new( int x, int y, int width, int height, const char *title );
 int Fl_Toggle_Button_x(Fl_Toggle_Button *);
 int Fl_Toggle_Button_y(Fl_Toggle_Button *);
 int Fl_Toggle_Button_width(Fl_Toggle_Button *);
 int Fl_Toggle_Button_height(Fl_Toggle_Button *);
 const char *Fl_Toggle_Button_label(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_label(Fl_Toggle_Button *, const char *title);
 void Fl_Toggle_Button_redraw(Fl_Toggle_Button *);
 void Fl_Toggle_Button_show(Fl_Toggle_Button *);
 void Fl_Toggle_Button_hide(Fl_Toggle_Button *);
 void Fl_Toggle_Button_activate(Fl_Toggle_Button *);
 void Fl_Toggle_Button_deactivate(Fl_Toggle_Button *);
 void Fl_Toggle_Button_redraw_label(Fl_Toggle_Button *);
 void Fl_Toggle_Button_resize(Fl_Toggle_Button *, int x, int y, int width, int height);
 void Fl_Toggle_Button_widget_resize( Fl_Toggle_Button *, int x, int y, int width, int height );
 const char *Fl_Toggle_Button_tooltip(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_tooltip(Fl_Toggle_Button *, const char *txt);
 int Fl_Toggle_Button_get_type(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_type(Fl_Toggle_Button *, int typ);
 unsigned int Fl_Toggle_Button_color(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_color(Fl_Toggle_Button *, unsigned int color);
 void Fl_Toggle_Button_measure_label(const Fl_Toggle_Button *, int *, int *);
 unsigned int Fl_Toggle_Button_label_color(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_label_color(Fl_Toggle_Button *, unsigned int color);
 int Fl_Toggle_Button_label_font(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_label_font(Fl_Toggle_Button *, int font);
 int Fl_Toggle_Button_label_size(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_label_size(Fl_Toggle_Button *, int sz);
 int Fl_Toggle_Button_label_type(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_label_type(Fl_Toggle_Button *, int typ);
 int Fl_Toggle_Button_box(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_box(Fl_Toggle_Button *, int typ);
 int Fl_Toggle_Button_changed(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_changed(Fl_Toggle_Button *);
 void Fl_Toggle_Button_clear_changed(Fl_Toggle_Button *);
 int Fl_Toggle_Button_align(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_align(Fl_Toggle_Button *, int typ);
 void Fl_Toggle_Button_delete(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_image(Fl_Toggle_Button *, void *);
 void Fl_Toggle_Button_handle( Fl_Toggle_Button *self, custom_handler_callback cb, void *data );
 int Fl_Toggle_Button_handle_event(Fl_Toggle_Button *self, int event);
 void Fl_Toggle_Button_draw(Fl_Toggle_Button *self, custom_draw_callback cb, void *data);
 void Fl_Toggle_Button_resize_callback( Fl_Toggle_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Toggle_Button_set_when(Fl_Toggle_Button *, int);
 int Fl_Toggle_Button_when(const Fl_Toggle_Button *);
 const void *Fl_Toggle_Button_image(const Fl_Toggle_Button *);
 void *Fl_Toggle_Button_parent(const Fl_Toggle_Button *self);
 unsigned int Fl_Toggle_Button_selection_color(Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_selection_color(Fl_Toggle_Button *, unsigned int color);
 void Fl_Toggle_Button_do_callback(Fl_Toggle_Button *);
 int Fl_Toggle_Button_inside(const Fl_Toggle_Button *self, void *);
 void *Fl_Toggle_Button_window(const Fl_Toggle_Button *);
 void *Fl_Toggle_Button_top_window(const Fl_Toggle_Button *);
 int Fl_Toggle_Button_takes_events(const Fl_Toggle_Button *);
 void *Fl_Toggle_Button_user_data(const Fl_Toggle_Button *);
 int Fl_Toggle_Button_take_focus(Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_visible_focus(Fl_Toggle_Button *self);
 void Fl_Toggle_Button_clear_visible_focus(Fl_Toggle_Button *self);
 void Fl_Toggle_Button_visible_focus(Fl_Toggle_Button *self, int v);
 unsigned int Fl_Toggle_Button_has_visible_focus(Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_user_data(Fl_Toggle_Button *, void *data);
 void *Fl_Toggle_Button_draw_data(const Fl_Toggle_Button *self);
 void *Fl_Toggle_Button_handle_data(const Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_draw_data(Fl_Toggle_Button *self, void *data);
 void Fl_Toggle_Button_set_handle_data(Fl_Toggle_Button *self, void *data);
 unsigned char Fl_Toggle_Button_damage(const Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_damage(Fl_Toggle_Button *self, unsigned char flag);
 void Fl_Toggle_Button_set_damage_area( Fl_Toggle_Button *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Toggle_Button_clear_damage(Fl_Toggle_Button *self);
 void *Fl_Toggle_Button_as_window(Fl_Toggle_Button *self);
 void *Fl_Toggle_Button_as_group(Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_deimage(Fl_Toggle_Button *, void *);
 const void *Fl_Toggle_Button_deimage(const Fl_Toggle_Button *);
 void Fl_Toggle_Button_set_callback(Fl_Toggle_Button *, Fl_Callback *, void *);
 int Fl_Toggle_Button_visible(const Fl_Toggle_Button *self);
 int Fl_Toggle_Button_visible_r(const Fl_Toggle_Button *self);
 unsigned int Fl_Toggle_Button_active(const Fl_Toggle_Button *self);
 int Fl_Toggle_Button_active_r(const Fl_Toggle_Button *self);
 Fl_Callback *Fl_Toggle_Button_callback(const Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_deletion_callback( Fl_Toggle_Button *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Toggle_Button *Fl_Toggle_Button_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Toggle_Button *Fl_Toggle_Button_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Toggle_Button_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Toggle_Button_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Toggle_Button_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Toggle_Button_is_toggled(Fl_Toggle_Button *);


void Fl_Toggle_Button_toggle(Fl_Toggle_Button *, int);


int Fl_Toggle_Button_shortcut(const Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_shortcut(Fl_Toggle_Button *self, int shortcut);
 int Fl_Toggle_Button_clear(Fl_Toggle_Button *self);
 int Fl_Toggle_Button_value(Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_value(Fl_Toggle_Button *self, int flag);
 void Fl_Toggle_Button_set_down_box(Fl_Toggle_Button *self, int);
 int Fl_Toggle_Button_down_box(const Fl_Toggle_Button *self);
 void Fl_Toggle_Button_set_compact(Fl_Toggle_Button *self, unsigned char v);
 unsigned char Fl_Toggle_Button_compact(Fl_Toggle_Button *self);


typedef struct Fl_Round_Button Fl_Round_Button;
 Fl_Round_Button *Fl_Round_Button_new( int x, int y, int width, int height, const char *title );
 int Fl_Round_Button_x(Fl_Round_Button *);
 int Fl_Round_Button_y(Fl_Round_Button *);
 int Fl_Round_Button_width(Fl_Round_Button *);
 int Fl_Round_Button_height(Fl_Round_Button *);
 const char *Fl_Round_Button_label(Fl_Round_Button *);
 void Fl_Round_Button_set_label(Fl_Round_Button *, const char *title);
 void Fl_Round_Button_redraw(Fl_Round_Button *);
 void Fl_Round_Button_show(Fl_Round_Button *);
 void Fl_Round_Button_hide(Fl_Round_Button *);
 void Fl_Round_Button_activate(Fl_Round_Button *);
 void Fl_Round_Button_deactivate(Fl_Round_Button *);
 void Fl_Round_Button_redraw_label(Fl_Round_Button *);
 void Fl_Round_Button_resize(Fl_Round_Button *, int x, int y, int width, int height);
 void Fl_Round_Button_widget_resize( Fl_Round_Button *, int x, int y, int width, int height );
 const char *Fl_Round_Button_tooltip(Fl_Round_Button *);
 void Fl_Round_Button_set_tooltip(Fl_Round_Button *, const char *txt);
 int Fl_Round_Button_get_type(Fl_Round_Button *);
 void Fl_Round_Button_set_type(Fl_Round_Button *, int typ);
 unsigned int Fl_Round_Button_color(Fl_Round_Button *);
 void Fl_Round_Button_set_color(Fl_Round_Button *, unsigned int color);
 void Fl_Round_Button_measure_label(const Fl_Round_Button *, int *, int *);
 unsigned int Fl_Round_Button_label_color(Fl_Round_Button *);
 void Fl_Round_Button_set_label_color(Fl_Round_Button *, unsigned int color);
 int Fl_Round_Button_label_font(Fl_Round_Button *);
 void Fl_Round_Button_set_label_font(Fl_Round_Button *, int font);
 int Fl_Round_Button_label_size(Fl_Round_Button *);
 void Fl_Round_Button_set_label_size(Fl_Round_Button *, int sz);
 int Fl_Round_Button_label_type(Fl_Round_Button *);
 void Fl_Round_Button_set_label_type(Fl_Round_Button *, int typ);
 int Fl_Round_Button_box(Fl_Round_Button *);
 void Fl_Round_Button_set_box(Fl_Round_Button *, int typ);
 int Fl_Round_Button_changed(Fl_Round_Button *);
 void Fl_Round_Button_set_changed(Fl_Round_Button *);
 void Fl_Round_Button_clear_changed(Fl_Round_Button *);
 int Fl_Round_Button_align(Fl_Round_Button *);
 void Fl_Round_Button_set_align(Fl_Round_Button *, int typ);
 void Fl_Round_Button_delete(Fl_Round_Button *);
 void Fl_Round_Button_set_image(Fl_Round_Button *, void *);
 void Fl_Round_Button_handle( Fl_Round_Button *self, custom_handler_callback cb, void *data );
 int Fl_Round_Button_handle_event(Fl_Round_Button *self, int event);
 void Fl_Round_Button_draw(Fl_Round_Button *self, custom_draw_callback cb, void *data);
 void Fl_Round_Button_resize_callback( Fl_Round_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
 void Fl_Round_Button_set_when(Fl_Round_Button *, int);
 int Fl_Round_Button_when(const Fl_Round_Button *);
 const void *Fl_Round_Button_image(const Fl_Round_Button *);
 void *Fl_Round_Button_parent(const Fl_Round_Button *self);
 unsigned int Fl_Round_Button_selection_color(Fl_Round_Button *);
 void Fl_Round_Button_set_selection_color(Fl_Round_Button *, unsigned int color);
 void Fl_Round_Button_do_callback(Fl_Round_Button *);
 int Fl_Round_Button_inside(const Fl_Round_Button *self, void *);
 void *Fl_Round_Button_window(const Fl_Round_Button *);
 void *Fl_Round_Button_top_window(const Fl_Round_Button *);
 int Fl_Round_Button_takes_events(const Fl_Round_Button *);
 void *Fl_Round_Button_user_data(const Fl_Round_Button *);
 int Fl_Round_Button_take_focus(Fl_Round_Button *self);
 void Fl_Round_Button_set_visible_focus(Fl_Round_Button *self);
 void Fl_Round_Button_clear_visible_focus(Fl_Round_Button *self);
 void Fl_Round_Button_visible_focus(Fl_Round_Button *self, int v);
 unsigned int Fl_Round_Button_has_visible_focus(Fl_Round_Button *self);
 void Fl_Round_Button_set_user_data(Fl_Round_Button *, void *data);
 void *Fl_Round_Button_draw_data(const Fl_Round_Button *self);
 void *Fl_Round_Button_handle_data(const Fl_Round_Button *self);
 void Fl_Round_Button_set_draw_data(Fl_Round_Button *self, void *data);
 void Fl_Round_Button_set_handle_data(Fl_Round_Button *self, void *data);
 unsigned char Fl_Round_Button_damage(const Fl_Round_Button *self);
 void Fl_Round_Button_set_damage(Fl_Round_Button *self, unsigned char flag);
 void Fl_Round_Button_set_damage_area( Fl_Round_Button *self, unsigned char flag, int x, int y, int w, int h );
 void Fl_Round_Button_clear_damage(Fl_Round_Button *self);
 void *Fl_Round_Button_as_window(Fl_Round_Button *self);
 void *Fl_Round_Button_as_group(Fl_Round_Button *self);
 void Fl_Round_Button_set_deimage(Fl_Round_Button *, void *);
 const void *Fl_Round_Button_deimage(const Fl_Round_Button *);
 void Fl_Round_Button_set_callback(Fl_Round_Button *, Fl_Callback *, void *);
 int Fl_Round_Button_visible(const Fl_Round_Button *self);
 int Fl_Round_Button_visible_r(const Fl_Round_Button *self);
 unsigned int Fl_Round_Button_active(const Fl_Round_Button *self);
 int Fl_Round_Button_active_r(const Fl_Round_Button *self);
 Fl_Callback *Fl_Round_Button_callback(const Fl_Round_Button *self);
 void Fl_Round_Button_set_deletion_callback( Fl_Round_Button *self, void (*)(Fl_Widget *, void *), void *data );
 Fl_Round_Button *Fl_Round_Button_from_dyn_ptr(Fl_Widget *ptr);
 Fl_Round_Button *Fl_Round_Button_from_derived_dyn_ptr(Fl_Widget *ptr);
 void Fl_Round_Button_super_draw(Fl_Widget *ptr, int flag);
 void Fl_Round_Button_super_draw_first(Fl_Widget *ptr, int flag);
 void Fl_Round_Button_super_handle_first(Fl_Widget *ptr, int flag);


int Fl_Round_Button_is_toggled(Fl_Round_Button *);


void Fl_Round_Button_toggle(Fl_Round_Button *, int);


int Fl_Round_Button_shortcut(const Fl_Round_Button *self);
 void Fl_Round_Button_set_shortcut(Fl_Round_Button *self, int shortcut);
 int Fl_Round_Button_clear(Fl_Round_Button *self);
 int Fl_Round_Button_value(Fl_Round_Button *self);
 void Fl_Round_Button_set_value(Fl_Round_Button *self, int flag);
 void Fl_Round_Button_set_down_box(Fl_Round_Button *self, int);
 int Fl_Round_Button_down_box(const Fl_Round_Button *self);
 void Fl_Round_Button_set_compact(Fl_Round_Button *self, unsigned char v);
 unsigned char Fl_Round_Button_compact(Fl_Round_Button *self);


typedef struct Fl_Radio_Round_Button Fl_Radio_Round_Button; Fl_Radio_Round_Button *Fl_Radio_Round_Button_new( int x, int y, int width, int height, const char *title ); int Fl_Radio_Round_Button_x(Fl_Radio_Round_Button *); int Fl_Radio_Round_Button_y(Fl_Radio_Round_Button *); int Fl_Radio_Round_Button_width(Fl_Radio_Round_Button *); int Fl_Radio_Round_Button_height(Fl_Radio_Round_Button *); const char *Fl_Radio_Round_Button_label(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_label(Fl_Radio_Round_Button *, const char *title); void Fl_Radio_Round_Button_redraw(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_show(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_hide(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_activate(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_deactivate(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_redraw_label(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_resize(Fl_Radio_Round_Button *, int x, int y, int width, int height); void Fl_Radio_Round_Button_widget_resize( Fl_Radio_Round_Button *, int x, int y, int width, int height ); const char *Fl_Radio_Round_Button_tooltip(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_tooltip(Fl_Radio_Round_Button *, const char *txt); int Fl_Radio_Round_Button_get_type(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_type(Fl_Radio_Round_Button *, int typ); unsigned int Fl_Radio_Round_Button_color(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_color(Fl_Radio_Round_Button *, unsigned int color); void Fl_Radio_Round_Button_measure_label(const Fl_Radio_Round_Button *, int *, int *); unsigned int Fl_Radio_Round_Button_label_color(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_label_color(Fl_Radio_Round_Button *, unsigned int color); int Fl_Radio_Round_Button_label_font(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_label_font(Fl_Radio_Round_Button *, int font); int Fl_Radio_Round_Button_label_size(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_label_size(Fl_Radio_Round_Button *, int sz); int Fl_Radio_Round_Button_label_type(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_label_type(Fl_Radio_Round_Button *, int typ); int Fl_Radio_Round_Button_box(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_box(Fl_Radio_Round_Button *, int typ); int Fl_Radio_Round_Button_changed(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_changed(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_clear_changed(Fl_Radio_Round_Button *); int Fl_Radio_Round_Button_align(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_align(Fl_Radio_Round_Button *, int typ); void Fl_Radio_Round_Button_delete(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_image(Fl_Radio_Round_Button *, void *); void Fl_Radio_Round_Button_handle( Fl_Radio_Round_Button *self, custom_handler_callback cb, void *data ); int Fl_Radio_Round_Button_handle_event(Fl_Radio_Round_Button *self, int event); void Fl_Radio_Round_Button_draw(Fl_Radio_Round_Button *self, custom_draw_callback cb, void *data); void Fl_Radio_Round_Button_resize_callback( Fl_Radio_Round_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Radio_Round_Button_set_when(Fl_Radio_Round_Button *, int); int Fl_Radio_Round_Button_when(const Fl_Radio_Round_Button *); const void *Fl_Radio_Round_Button_image(const Fl_Radio_Round_Button *); void *Fl_Radio_Round_Button_parent(const Fl_Radio_Round_Button *self); unsigned int Fl_Radio_Round_Button_selection_color(Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_selection_color(Fl_Radio_Round_Button *, unsigned int color); void Fl_Radio_Round_Button_do_callback(Fl_Radio_Round_Button *); int Fl_Radio_Round_Button_inside(const Fl_Radio_Round_Button *self, void *); void *Fl_Radio_Round_Button_window(const Fl_Radio_Round_Button *); void *Fl_Radio_Round_Button_top_window(const Fl_Radio_Round_Button *); int Fl_Radio_Round_Button_takes_events(const Fl_Radio_Round_Button *); void *Fl_Radio_Round_Button_user_data(const Fl_Radio_Round_Button *); int Fl_Radio_Round_Button_take_focus(Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_visible_focus(Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_clear_visible_focus(Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_visible_focus(Fl_Radio_Round_Button *self, int v); unsigned int Fl_Radio_Round_Button_has_visible_focus(Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_user_data(Fl_Radio_Round_Button *, void *data); void *Fl_Radio_Round_Button_draw_data(const Fl_Radio_Round_Button *self); void *Fl_Radio_Round_Button_handle_data(const Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_draw_data(Fl_Radio_Round_Button *self, void *data); void Fl_Radio_Round_Button_set_handle_data(Fl_Radio_Round_Button *self, void *data); unsigned char Fl_Radio_Round_Button_damage(const Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_damage(Fl_Radio_Round_Button *self, unsigned char flag); void Fl_Radio_Round_Button_set_damage_area( Fl_Radio_Round_Button *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Radio_Round_Button_clear_damage(Fl_Radio_Round_Button *self); void *Fl_Radio_Round_Button_as_window(Fl_Radio_Round_Button *self); void *Fl_Radio_Round_Button_as_group(Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_deimage(Fl_Radio_Round_Button *, void *); const void *Fl_Radio_Round_Button_deimage(const Fl_Radio_Round_Button *); void Fl_Radio_Round_Button_set_callback(Fl_Radio_Round_Button *, Fl_Callback *, void *); int Fl_Radio_Round_Button_visible(const Fl_Radio_Round_Button *self); int Fl_Radio_Round_Button_visible_r(const Fl_Radio_Round_Button *self); unsigned int Fl_Radio_Round_Button_active(const Fl_Radio_Round_Button *self); int Fl_Radio_Round_Button_active_r(const Fl_Radio_Round_Button *self); Fl_Callback *Fl_Radio_Round_Button_callback(const Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_deletion_callback( Fl_Radio_Round_Button *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Radio_Round_Button *Fl_Radio_Round_Button_from_dyn_ptr(Fl_Widget *ptr); Fl_Radio_Round_Button *Fl_Radio_Round_Button_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Radio_Round_Button_super_draw(Fl_Widget *ptr, int flag); void Fl_Radio_Round_Button_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Radio_Round_Button_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Radio_Round_Button_is_toggled(Fl_Radio_Round_Button *);

void Fl_Radio_Round_Button_toggle(Fl_Radio_Round_Button *, int);

int Fl_Radio_Round_Button_shortcut(const Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_shortcut(Fl_Radio_Round_Button *self, int shortcut); int Fl_Radio_Round_Button_clear(Fl_Radio_Round_Button *self); int Fl_Radio_Round_Button_value(Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_value(Fl_Radio_Round_Button *self, int flag); void Fl_Radio_Round_Button_set_down_box(Fl_Radio_Round_Button *self, int); int Fl_Radio_Round_Button_down_box(const Fl_Radio_Round_Button *self); void Fl_Radio_Round_Button_set_compact(Fl_Radio_Round_Button *self, unsigned char v); unsigned char Fl_Radio_Round_Button_compact(Fl_Radio_Round_Button *self);

typedef struct Fl_Radio_Light_Button Fl_Radio_Light_Button; Fl_Radio_Light_Button *Fl_Radio_Light_Button_new( int x, int y, int width, int height, const char *title ); int Fl_Radio_Light_Button_x(Fl_Radio_Light_Button *); int Fl_Radio_Light_Button_y(Fl_Radio_Light_Button *); int Fl_Radio_Light_Button_width(Fl_Radio_Light_Button *); int Fl_Radio_Light_Button_height(Fl_Radio_Light_Button *); const char *Fl_Radio_Light_Button_label(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_label(Fl_Radio_Light_Button *, const char *title); void Fl_Radio_Light_Button_redraw(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_show(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_hide(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_activate(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_deactivate(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_redraw_label(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_resize(Fl_Radio_Light_Button *, int x, int y, int width, int height); void Fl_Radio_Light_Button_widget_resize( Fl_Radio_Light_Button *, int x, int y, int width, int height ); const char *Fl_Radio_Light_Button_tooltip(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_tooltip(Fl_Radio_Light_Button *, const char *txt); int Fl_Radio_Light_Button_get_type(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_type(Fl_Radio_Light_Button *, int typ); unsigned int Fl_Radio_Light_Button_color(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_color(Fl_Radio_Light_Button *, unsigned int color); void Fl_Radio_Light_Button_measure_label(const Fl_Radio_Light_Button *, int *, int *); unsigned int Fl_Radio_Light_Button_label_color(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_label_color(Fl_Radio_Light_Button *, unsigned int color); int Fl_Radio_Light_Button_label_font(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_label_font(Fl_Radio_Light_Button *, int font); int Fl_Radio_Light_Button_label_size(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_label_size(Fl_Radio_Light_Button *, int sz); int Fl_Radio_Light_Button_label_type(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_label_type(Fl_Radio_Light_Button *, int typ); int Fl_Radio_Light_Button_box(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_box(Fl_Radio_Light_Button *, int typ); int Fl_Radio_Light_Button_changed(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_changed(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_clear_changed(Fl_Radio_Light_Button *); int Fl_Radio_Light_Button_align(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_align(Fl_Radio_Light_Button *, int typ); void Fl_Radio_Light_Button_delete(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_image(Fl_Radio_Light_Button *, void *); void Fl_Radio_Light_Button_handle( Fl_Radio_Light_Button *self, custom_handler_callback cb, void *data ); int Fl_Radio_Light_Button_handle_event(Fl_Radio_Light_Button *self, int event); void Fl_Radio_Light_Button_draw(Fl_Radio_Light_Button *self, custom_draw_callback cb, void *data); void Fl_Radio_Light_Button_resize_callback( Fl_Radio_Light_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Radio_Light_Button_set_when(Fl_Radio_Light_Button *, int); int Fl_Radio_Light_Button_when(const Fl_Radio_Light_Button *); const void *Fl_Radio_Light_Button_image(const Fl_Radio_Light_Button *); void *Fl_Radio_Light_Button_parent(const Fl_Radio_Light_Button *self); unsigned int Fl_Radio_Light_Button_selection_color(Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_selection_color(Fl_Radio_Light_Button *, unsigned int color); void Fl_Radio_Light_Button_do_callback(Fl_Radio_Light_Button *); int Fl_Radio_Light_Button_inside(const Fl_Radio_Light_Button *self, void *); void *Fl_Radio_Light_Button_window(const Fl_Radio_Light_Button *); void *Fl_Radio_Light_Button_top_window(const Fl_Radio_Light_Button *); int Fl_Radio_Light_Button_takes_events(const Fl_Radio_Light_Button *); void *Fl_Radio_Light_Button_user_data(const Fl_Radio_Light_Button *); int Fl_Radio_Light_Button_take_focus(Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_visible_focus(Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_clear_visible_focus(Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_visible_focus(Fl_Radio_Light_Button *self, int v); unsigned int Fl_Radio_Light_Button_has_visible_focus(Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_user_data(Fl_Radio_Light_Button *, void *data); void *Fl_Radio_Light_Button_draw_data(const Fl_Radio_Light_Button *self); void *Fl_Radio_Light_Button_handle_data(const Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_draw_data(Fl_Radio_Light_Button *self, void *data); void Fl_Radio_Light_Button_set_handle_data(Fl_Radio_Light_Button *self, void *data); unsigned char Fl_Radio_Light_Button_damage(const Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_damage(Fl_Radio_Light_Button *self, unsigned char flag); void Fl_Radio_Light_Button_set_damage_area( Fl_Radio_Light_Button *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Radio_Light_Button_clear_damage(Fl_Radio_Light_Button *self); void *Fl_Radio_Light_Button_as_window(Fl_Radio_Light_Button *self); void *Fl_Radio_Light_Button_as_group(Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_deimage(Fl_Radio_Light_Button *, void *); const void *Fl_Radio_Light_Button_deimage(const Fl_Radio_Light_Button *); void Fl_Radio_Light_Button_set_callback(Fl_Radio_Light_Button *, Fl_Callback *, void *); int Fl_Radio_Light_Button_visible(const Fl_Radio_Light_Button *self); int Fl_Radio_Light_Button_visible_r(const Fl_Radio_Light_Button *self); unsigned int Fl_Radio_Light_Button_active(const Fl_Radio_Light_Button *self); int Fl_Radio_Light_Button_active_r(const Fl_Radio_Light_Button *self); Fl_Callback *Fl_Radio_Light_Button_callback(const Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_deletion_callback( Fl_Radio_Light_Button *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Radio_Light_Button *Fl_Radio_Light_Button_from_dyn_ptr(Fl_Widget *ptr); Fl_Radio_Light_Button *Fl_Radio_Light_Button_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Radio_Light_Button_super_draw(Fl_Widget *ptr, int flag); void Fl_Radio_Light_Button_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Radio_Light_Button_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Radio_Light_Button_is_toggled(Fl_Radio_Light_Button *);

void Fl_Radio_Light_Button_toggle(Fl_Radio_Light_Button *, int);

int Fl_Radio_Light_Button_shortcut(const Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_shortcut(Fl_Radio_Light_Button *self, int shortcut); int Fl_Radio_Light_Button_clear(Fl_Radio_Light_Button *self); int Fl_Radio_Light_Button_value(Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_value(Fl_Radio_Light_Button *self, int flag); void Fl_Radio_Light_Button_set_down_box(Fl_Radio_Light_Button *self, int); int Fl_Radio_Light_Button_down_box(const Fl_Radio_Light_Button *self); void Fl_Radio_Light_Button_set_compact(Fl_Radio_Light_Button *self, unsigned char v); unsigned char Fl_Radio_Light_Button_compact(Fl_Radio_Light_Button *self);

typedef struct Fl_Light_Button Fl_Light_Button; Fl_Light_Button *Fl_Light_Button_new( int x, int y, int width, int height, const char *title ); int Fl_Light_Button_x(Fl_Light_Button *); int Fl_Light_Button_y(Fl_Light_Button *); int Fl_Light_Button_width(Fl_Light_Button *); int Fl_Light_Button_height(Fl_Light_Button *); const char *Fl_Light_Button_label(Fl_Light_Button *); void Fl_Light_Button_set_label(Fl_Light_Button *, const char *title); void Fl_Light_Button_redraw(Fl_Light_Button *); void Fl_Light_Button_show(Fl_Light_Button *); void Fl_Light_Button_hide(Fl_Light_Button *); void Fl_Light_Button_activate(Fl_Light_Button *); void Fl_Light_Button_deactivate(Fl_Light_Button *); void Fl_Light_Button_redraw_label(Fl_Light_Button *); void Fl_Light_Button_resize(Fl_Light_Button *, int x, int y, int width, int height); void Fl_Light_Button_widget_resize( Fl_Light_Button *, int x, int y, int width, int height ); const char *Fl_Light_Button_tooltip(Fl_Light_Button *); void Fl_Light_Button_set_tooltip(Fl_Light_Button *, const char *txt); int Fl_Light_Button_get_type(Fl_Light_Button *); void Fl_Light_Button_set_type(Fl_Light_Button *, int typ); unsigned int Fl_Light_Button_color(Fl_Light_Button *); void Fl_Light_Button_set_color(Fl_Light_Button *, unsigned int color); void Fl_Light_Button_measure_label(const Fl_Light_Button *, int *, int *); unsigned int Fl_Light_Button_label_color(Fl_Light_Button *); void Fl_Light_Button_set_label_color(Fl_Light_Button *, unsigned int color); int Fl_Light_Button_label_font(Fl_Light_Button *); void Fl_Light_Button_set_label_font(Fl_Light_Button *, int font); int Fl_Light_Button_label_size(Fl_Light_Button *); void Fl_Light_Button_set_label_size(Fl_Light_Button *, int sz); int Fl_Light_Button_label_type(Fl_Light_Button *); void Fl_Light_Button_set_label_type(Fl_Light_Button *, int typ); int Fl_Light_Button_box(Fl_Light_Button *); void Fl_Light_Button_set_box(Fl_Light_Button *, int typ); int Fl_Light_Button_changed(Fl_Light_Button *); void Fl_Light_Button_set_changed(Fl_Light_Button *); void Fl_Light_Button_clear_changed(Fl_Light_Button *); int Fl_Light_Button_align(Fl_Light_Button *); void Fl_Light_Button_set_align(Fl_Light_Button *, int typ); void Fl_Light_Button_delete(Fl_Light_Button *); void Fl_Light_Button_set_image(Fl_Light_Button *, void *); void Fl_Light_Button_handle( Fl_Light_Button *self, custom_handler_callback cb, void *data ); int Fl_Light_Button_handle_event(Fl_Light_Button *self, int event); void Fl_Light_Button_draw(Fl_Light_Button *self, custom_draw_callback cb, void *data); void Fl_Light_Button_resize_callback( Fl_Light_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Light_Button_set_when(Fl_Light_Button *, int); int Fl_Light_Button_when(const Fl_Light_Button *); const void *Fl_Light_Button_image(const Fl_Light_Button *); void *Fl_Light_Button_parent(const Fl_Light_Button *self); unsigned int Fl_Light_Button_selection_color(Fl_Light_Button *); void Fl_Light_Button_set_selection_color(Fl_Light_Button *, unsigned int color); void Fl_Light_Button_do_callback(Fl_Light_Button *); int Fl_Light_Button_inside(const Fl_Light_Button *self, void *); void *Fl_Light_Button_window(const Fl_Light_Button *); void *Fl_Light_Button_top_window(const Fl_Light_Button *); int Fl_Light_Button_takes_events(const Fl_Light_Button *); void *Fl_Light_Button_user_data(const Fl_Light_Button *); int Fl_Light_Button_take_focus(Fl_Light_Button *self); void Fl_Light_Button_set_visible_focus(Fl_Light_Button *self); void Fl_Light_Button_clear_visible_focus(Fl_Light_Button *self); void Fl_Light_Button_visible_focus(Fl_Light_Button *self, int v); unsigned int Fl_Light_Button_has_visible_focus(Fl_Light_Button *self); void Fl_Light_Button_set_user_data(Fl_Light_Button *, void *data); void *Fl_Light_Button_draw_data(const Fl_Light_Button *self); void *Fl_Light_Button_handle_data(const Fl_Light_Button *self); void Fl_Light_Button_set_draw_data(Fl_Light_Button *self, void *data); void Fl_Light_Button_set_handle_data(Fl_Light_Button *self, void *data); unsigned char Fl_Light_Button_damage(const Fl_Light_Button *self); void Fl_Light_Button_set_damage(Fl_Light_Button *self, unsigned char flag); void Fl_Light_Button_set_damage_area( Fl_Light_Button *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Light_Button_clear_damage(Fl_Light_Button *self); void *Fl_Light_Button_as_window(Fl_Light_Button *self); void *Fl_Light_Button_as_group(Fl_Light_Button *self); void Fl_Light_Button_set_deimage(Fl_Light_Button *, void *); const void *Fl_Light_Button_deimage(const Fl_Light_Button *); void Fl_Light_Button_set_callback(Fl_Light_Button *, Fl_Callback *, void *); int Fl_Light_Button_visible(const Fl_Light_Button *self); int Fl_Light_Button_visible_r(const Fl_Light_Button *self); unsigned int Fl_Light_Button_active(const Fl_Light_Button *self); int Fl_Light_Button_active_r(const Fl_Light_Button *self); Fl_Callback *Fl_Light_Button_callback(const Fl_Light_Button *self); void Fl_Light_Button_set_deletion_callback( Fl_Light_Button *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Light_Button *Fl_Light_Button_from_dyn_ptr(Fl_Widget *ptr); Fl_Light_Button *Fl_Light_Button_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Light_Button_super_draw(Fl_Widget *ptr, int flag); void Fl_Light_Button_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Light_Button_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Light_Button_is_on(Fl_Light_Button *);

void Fl_Light_Button_turn_on(Fl_Light_Button *, int);

int Fl_Light_Button_shortcut(const Fl_Light_Button *self); void Fl_Light_Button_set_shortcut(Fl_Light_Button *self, int shortcut); int Fl_Light_Button_clear(Fl_Light_Button *self); int Fl_Light_Button_value(Fl_Light_Button *self); void Fl_Light_Button_set_value(Fl_Light_Button *self, int flag); void Fl_Light_Button_set_down_box(Fl_Light_Button *self, int); int Fl_Light_Button_down_box(const Fl_Light_Button *self); void Fl_Light_Button_set_compact(Fl_Light_Button *self, unsigned char v); unsigned char Fl_Light_Button_compact(Fl_Light_Button *self);

typedef struct Fl_Repeat_Button Fl_Repeat_Button; Fl_Repeat_Button *Fl_Repeat_Button_new( int x, int y, int width, int height, const char *title ); int Fl_Repeat_Button_x(Fl_Repeat_Button *); int Fl_Repeat_Button_y(Fl_Repeat_Button *); int Fl_Repeat_Button_width(Fl_Repeat_Button *); int Fl_Repeat_Button_height(Fl_Repeat_Button *); const char *Fl_Repeat_Button_label(Fl_Repeat_Button *); void Fl_Repeat_Button_set_label(Fl_Repeat_Button *, const char *title); void Fl_Repeat_Button_redraw(Fl_Repeat_Button *); void Fl_Repeat_Button_show(Fl_Repeat_Button *); void Fl_Repeat_Button_hide(Fl_Repeat_Button *); void Fl_Repeat_Button_activate(Fl_Repeat_Button *); void Fl_Repeat_Button_deactivate(Fl_Repeat_Button *); void Fl_Repeat_Button_redraw_label(Fl_Repeat_Button *); void Fl_Repeat_Button_resize(Fl_Repeat_Button *, int x, int y, int width, int height); void Fl_Repeat_Button_widget_resize( Fl_Repeat_Button *, int x, int y, int width, int height ); const char *Fl_Repeat_Button_tooltip(Fl_Repeat_Button *); void Fl_Repeat_Button_set_tooltip(Fl_Repeat_Button *, const char *txt); int Fl_Repeat_Button_get_type(Fl_Repeat_Button *); void Fl_Repeat_Button_set_type(Fl_Repeat_Button *, int typ); unsigned int Fl_Repeat_Button_color(Fl_Repeat_Button *); void Fl_Repeat_Button_set_color(Fl_Repeat_Button *, unsigned int color); void Fl_Repeat_Button_measure_label(const Fl_Repeat_Button *, int *, int *); unsigned int Fl_Repeat_Button_label_color(Fl_Repeat_Button *); void Fl_Repeat_Button_set_label_color(Fl_Repeat_Button *, unsigned int color); int Fl_Repeat_Button_label_font(Fl_Repeat_Button *); void Fl_Repeat_Button_set_label_font(Fl_Repeat_Button *, int font); int Fl_Repeat_Button_label_size(Fl_Repeat_Button *); void Fl_Repeat_Button_set_label_size(Fl_Repeat_Button *, int sz); int Fl_Repeat_Button_label_type(Fl_Repeat_Button *); void Fl_Repeat_Button_set_label_type(Fl_Repeat_Button *, int typ); int Fl_Repeat_Button_box(Fl_Repeat_Button *); void Fl_Repeat_Button_set_box(Fl_Repeat_Button *, int typ); int Fl_Repeat_Button_changed(Fl_Repeat_Button *); void Fl_Repeat_Button_set_changed(Fl_Repeat_Button *); void Fl_Repeat_Button_clear_changed(Fl_Repeat_Button *); int Fl_Repeat_Button_align(Fl_Repeat_Button *); void Fl_Repeat_Button_set_align(Fl_Repeat_Button *, int typ); void Fl_Repeat_Button_delete(Fl_Repeat_Button *); void Fl_Repeat_Button_set_image(Fl_Repeat_Button *, void *); void Fl_Repeat_Button_handle( Fl_Repeat_Button *self, custom_handler_callback cb, void *data ); int Fl_Repeat_Button_handle_event(Fl_Repeat_Button *self, int event); void Fl_Repeat_Button_draw(Fl_Repeat_Button *self, custom_draw_callback cb, void *data); void Fl_Repeat_Button_resize_callback( Fl_Repeat_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Repeat_Button_set_when(Fl_Repeat_Button *, int); int Fl_Repeat_Button_when(const Fl_Repeat_Button *); const void *Fl_Repeat_Button_image(const Fl_Repeat_Button *); void *Fl_Repeat_Button_parent(const Fl_Repeat_Button *self); unsigned int Fl_Repeat_Button_selection_color(Fl_Repeat_Button *); void Fl_Repeat_Button_set_selection_color(Fl_Repeat_Button *, unsigned int color); void Fl_Repeat_Button_do_callback(Fl_Repeat_Button *); int Fl_Repeat_Button_inside(const Fl_Repeat_Button *self, void *); void *Fl_Repeat_Button_window(const Fl_Repeat_Button *); void *Fl_Repeat_Button_top_window(const Fl_Repeat_Button *); int Fl_Repeat_Button_takes_events(const Fl_Repeat_Button *); void *Fl_Repeat_Button_user_data(const Fl_Repeat_Button *); int Fl_Repeat_Button_take_focus(Fl_Repeat_Button *self); void Fl_Repeat_Button_set_visible_focus(Fl_Repeat_Button *self); void Fl_Repeat_Button_clear_visible_focus(Fl_Repeat_Button *self); void Fl_Repeat_Button_visible_focus(Fl_Repeat_Button *self, int v); unsigned int Fl_Repeat_Button_has_visible_focus(Fl_Repeat_Button *self); void Fl_Repeat_Button_set_user_data(Fl_Repeat_Button *, void *data); void *Fl_Repeat_Button_draw_data(const Fl_Repeat_Button *self); void *Fl_Repeat_Button_handle_data(const Fl_Repeat_Button *self); void Fl_Repeat_Button_set_draw_data(Fl_Repeat_Button *self, void *data); void Fl_Repeat_Button_set_handle_data(Fl_Repeat_Button *self, void *data); unsigned char Fl_Repeat_Button_damage(const Fl_Repeat_Button *self); void Fl_Repeat_Button_set_damage(Fl_Repeat_Button *self, unsigned char flag); void Fl_Repeat_Button_set_damage_area( Fl_Repeat_Button *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Repeat_Button_clear_damage(Fl_Repeat_Button *self); void *Fl_Repeat_Button_as_window(Fl_Repeat_Button *self); void *Fl_Repeat_Button_as_group(Fl_Repeat_Button *self); void Fl_Repeat_Button_set_deimage(Fl_Repeat_Button *, void *); const void *Fl_Repeat_Button_deimage(const Fl_Repeat_Button *); void Fl_Repeat_Button_set_callback(Fl_Repeat_Button *, Fl_Callback *, void *); int Fl_Repeat_Button_visible(const Fl_Repeat_Button *self); int Fl_Repeat_Button_visible_r(const Fl_Repeat_Button *self); unsigned int Fl_Repeat_Button_active(const Fl_Repeat_Button *self); int Fl_Repeat_Button_active_r(const Fl_Repeat_Button *self); Fl_Callback *Fl_Repeat_Button_callback(const Fl_Repeat_Button *self); void Fl_Repeat_Button_set_deletion_callback( Fl_Repeat_Button *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Repeat_Button *Fl_Repeat_Button_from_dyn_ptr(Fl_Widget *ptr); Fl_Repeat_Button *Fl_Repeat_Button_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Repeat_Button_super_draw(Fl_Widget *ptr, int flag); void Fl_Repeat_Button_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Repeat_Button_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Repeat_Button_shortcut(const Fl_Repeat_Button *self); void Fl_Repeat_Button_set_shortcut(Fl_Repeat_Button *self, int shortcut); int Fl_Repeat_Button_clear(Fl_Repeat_Button *self); int Fl_Repeat_Button_value(Fl_Repeat_Button *self); void Fl_Repeat_Button_set_value(Fl_Repeat_Button *self, int flag); void Fl_Repeat_Button_set_down_box(Fl_Repeat_Button *self, int); int Fl_Repeat_Button_down_box(const Fl_Repeat_Button *self); void Fl_Repeat_Button_set_compact(Fl_Repeat_Button *self, unsigned char v); unsigned char Fl_Repeat_Button_compact(Fl_Repeat_Button *self);

typedef struct Fl_Return_Button Fl_Return_Button; Fl_Return_Button *Fl_Return_Button_new( int x, int y, int width, int height, const char *title ); int Fl_Return_Button_x(Fl_Return_Button *); int Fl_Return_Button_y(Fl_Return_Button *); int Fl_Return_Button_width(Fl_Return_Button *); int Fl_Return_Button_height(Fl_Return_Button *); const char *Fl_Return_Button_label(Fl_Return_Button *); void Fl_Return_Button_set_label(Fl_Return_Button *, const char *title); void Fl_Return_Button_redraw(Fl_Return_Button *); void Fl_Return_Button_show(Fl_Return_Button *); void Fl_Return_Button_hide(Fl_Return_Button *); void Fl_Return_Button_activate(Fl_Return_Button *); void Fl_Return_Button_deactivate(Fl_Return_Button *); void Fl_Return_Button_redraw_label(Fl_Return_Button *); void Fl_Return_Button_resize(Fl_Return_Button *, int x, int y, int width, int height); void Fl_Return_Button_widget_resize( Fl_Return_Button *, int x, int y, int width, int height ); const char *Fl_Return_Button_tooltip(Fl_Return_Button *); void Fl_Return_Button_set_tooltip(Fl_Return_Button *, const char *txt); int Fl_Return_Button_get_type(Fl_Return_Button *); void Fl_Return_Button_set_type(Fl_Return_Button *, int typ); unsigned int Fl_Return_Button_color(Fl_Return_Button *); void Fl_Return_Button_set_color(Fl_Return_Button *, unsigned int color); void Fl_Return_Button_measure_label(const Fl_Return_Button *, int *, int *); unsigned int Fl_Return_Button_label_color(Fl_Return_Button *); void Fl_Return_Button_set_label_color(Fl_Return_Button *, unsigned int color); int Fl_Return_Button_label_font(Fl_Return_Button *); void Fl_Return_Button_set_label_font(Fl_Return_Button *, int font); int Fl_Return_Button_label_size(Fl_Return_Button *); void Fl_Return_Button_set_label_size(Fl_Return_Button *, int sz); int Fl_Return_Button_label_type(Fl_Return_Button *); void Fl_Return_Button_set_label_type(Fl_Return_Button *, int typ); int Fl_Return_Button_box(Fl_Return_Button *); void Fl_Return_Button_set_box(Fl_Return_Button *, int typ); int Fl_Return_Button_changed(Fl_Return_Button *); void Fl_Return_Button_set_changed(Fl_Return_Button *); void Fl_Return_Button_clear_changed(Fl_Return_Button *); int Fl_Return_Button_align(Fl_Return_Button *); void Fl_Return_Button_set_align(Fl_Return_Button *, int typ); void Fl_Return_Button_delete(Fl_Return_Button *); void Fl_Return_Button_set_image(Fl_Return_Button *, void *); void Fl_Return_Button_handle( Fl_Return_Button *self, custom_handler_callback cb, void *data ); int Fl_Return_Button_handle_event(Fl_Return_Button *self, int event); void Fl_Return_Button_draw(Fl_Return_Button *self, custom_draw_callback cb, void *data); void Fl_Return_Button_resize_callback( Fl_Return_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Return_Button_set_when(Fl_Return_Button *, int); int Fl_Return_Button_when(const Fl_Return_Button *); const void *Fl_Return_Button_image(const Fl_Return_Button *); void *Fl_Return_Button_parent(const Fl_Return_Button *self); unsigned int Fl_Return_Button_selection_color(Fl_Return_Button *); void Fl_Return_Button_set_selection_color(Fl_Return_Button *, unsigned int color); void Fl_Return_Button_do_callback(Fl_Return_Button *); int Fl_Return_Button_inside(const Fl_Return_Button *self, void *); void *Fl_Return_Button_window(const Fl_Return_Button *); void *Fl_Return_Button_top_window(const Fl_Return_Button *); int Fl_Return_Button_takes_events(const Fl_Return_Button *); void *Fl_Return_Button_user_data(const Fl_Return_Button *); int Fl_Return_Button_take_focus(Fl_Return_Button *self); void Fl_Return_Button_set_visible_focus(Fl_Return_Button *self); void Fl_Return_Button_clear_visible_focus(Fl_Return_Button *self); void Fl_Return_Button_visible_focus(Fl_Return_Button *self, int v); unsigned int Fl_Return_Button_has_visible_focus(Fl_Return_Button *self); void Fl_Return_Button_set_user_data(Fl_Return_Button *, void *data); void *Fl_Return_Button_draw_data(const Fl_Return_Button *self); void *Fl_Return_Button_handle_data(const Fl_Return_Button *self); void Fl_Return_Button_set_draw_data(Fl_Return_Button *self, void *data); void Fl_Return_Button_set_handle_data(Fl_Return_Button *self, void *data); unsigned char Fl_Return_Button_damage(const Fl_Return_Button *self); void Fl_Return_Button_set_damage(Fl_Return_Button *self, unsigned char flag); void Fl_Return_Button_set_damage_area( Fl_Return_Button *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Return_Button_clear_damage(Fl_Return_Button *self); void *Fl_Return_Button_as_window(Fl_Return_Button *self); void *Fl_Return_Button_as_group(Fl_Return_Button *self); void Fl_Return_Button_set_deimage(Fl_Return_Button *, void *); const void *Fl_Return_Button_deimage(const Fl_Return_Button *); void Fl_Return_Button_set_callback(Fl_Return_Button *, Fl_Callback *, void *); int Fl_Return_Button_visible(const Fl_Return_Button *self); int Fl_Return_Button_visible_r(const Fl_Return_Button *self); unsigned int Fl_Return_Button_active(const Fl_Return_Button *self); int Fl_Return_Button_active_r(const Fl_Return_Button *self); Fl_Callback *Fl_Return_Button_callback(const Fl_Return_Button *self); void Fl_Return_Button_set_deletion_callback( Fl_Return_Button *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Return_Button *Fl_Return_Button_from_dyn_ptr(Fl_Widget *ptr); Fl_Return_Button *Fl_Return_Button_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Return_Button_super_draw(Fl_Widget *ptr, int flag); void Fl_Return_Button_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Return_Button_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Return_Button_shortcut(const Fl_Return_Button *self); void Fl_Return_Button_set_shortcut(Fl_Return_Button *self, int shortcut); int Fl_Return_Button_clear(Fl_Return_Button *self); int Fl_Return_Button_value(Fl_Return_Button *self); void Fl_Return_Button_set_value(Fl_Return_Button *self, int flag); void Fl_Return_Button_set_down_box(Fl_Return_Button *self, int); int Fl_Return_Button_down_box(const Fl_Return_Button *self); void Fl_Return_Button_set_compact(Fl_Return_Button *self, unsigned char v); unsigned char Fl_Return_Button_compact(Fl_Return_Button *self);

typedef struct Fl_Shortcut_Button Fl_Shortcut_Button; Fl_Shortcut_Button *Fl_Shortcut_Button_new( int x, int y, int width, int height, const char *title ); int Fl_Shortcut_Button_x(Fl_Shortcut_Button *); int Fl_Shortcut_Button_y(Fl_Shortcut_Button *); int Fl_Shortcut_Button_width(Fl_Shortcut_Button *); int Fl_Shortcut_Button_height(Fl_Shortcut_Button *); const char *Fl_Shortcut_Button_label(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_label(Fl_Shortcut_Button *, const char *title); void Fl_Shortcut_Button_redraw(Fl_Shortcut_Button *); void Fl_Shortcut_Button_show(Fl_Shortcut_Button *); void Fl_Shortcut_Button_hide(Fl_Shortcut_Button *); void Fl_Shortcut_Button_activate(Fl_Shortcut_Button *); void Fl_Shortcut_Button_deactivate(Fl_Shortcut_Button *); void Fl_Shortcut_Button_redraw_label(Fl_Shortcut_Button *); void Fl_Shortcut_Button_resize(Fl_Shortcut_Button *, int x, int y, int width, int height); void Fl_Shortcut_Button_widget_resize( Fl_Shortcut_Button *, int x, int y, int width, int height ); const char *Fl_Shortcut_Button_tooltip(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_tooltip(Fl_Shortcut_Button *, const char *txt); int Fl_Shortcut_Button_get_type(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_type(Fl_Shortcut_Button *, int typ); unsigned int Fl_Shortcut_Button_color(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_color(Fl_Shortcut_Button *, unsigned int color); void Fl_Shortcut_Button_measure_label(const Fl_Shortcut_Button *, int *, int *); unsigned int Fl_Shortcut_Button_label_color(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_label_color(Fl_Shortcut_Button *, unsigned int color); int Fl_Shortcut_Button_label_font(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_label_font(Fl_Shortcut_Button *, int font); int Fl_Shortcut_Button_label_size(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_label_size(Fl_Shortcut_Button *, int sz); int Fl_Shortcut_Button_label_type(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_label_type(Fl_Shortcut_Button *, int typ); int Fl_Shortcut_Button_box(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_box(Fl_Shortcut_Button *, int typ); int Fl_Shortcut_Button_changed(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_changed(Fl_Shortcut_Button *); void Fl_Shortcut_Button_clear_changed(Fl_Shortcut_Button *); int Fl_Shortcut_Button_align(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_align(Fl_Shortcut_Button *, int typ); void Fl_Shortcut_Button_delete(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_image(Fl_Shortcut_Button *, void *); void Fl_Shortcut_Button_handle( Fl_Shortcut_Button *self, custom_handler_callback cb, void *data ); int Fl_Shortcut_Button_handle_event(Fl_Shortcut_Button *self, int event); void Fl_Shortcut_Button_draw(Fl_Shortcut_Button *self, custom_draw_callback cb, void *data); void Fl_Shortcut_Button_resize_callback( Fl_Shortcut_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Shortcut_Button_set_when(Fl_Shortcut_Button *, int); int Fl_Shortcut_Button_when(const Fl_Shortcut_Button *); const void *Fl_Shortcut_Button_image(const Fl_Shortcut_Button *); void *Fl_Shortcut_Button_parent(const Fl_Shortcut_Button *self); unsigned int Fl_Shortcut_Button_selection_color(Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_selection_color(Fl_Shortcut_Button *, unsigned int color); void Fl_Shortcut_Button_do_callback(Fl_Shortcut_Button *); int Fl_Shortcut_Button_inside(const Fl_Shortcut_Button *self, void *); void *Fl_Shortcut_Button_window(const Fl_Shortcut_Button *); void *Fl_Shortcut_Button_top_window(const Fl_Shortcut_Button *); int Fl_Shortcut_Button_takes_events(const Fl_Shortcut_Button *); void *Fl_Shortcut_Button_user_data(const Fl_Shortcut_Button *); int Fl_Shortcut_Button_take_focus(Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_visible_focus(Fl_Shortcut_Button *self); void Fl_Shortcut_Button_clear_visible_focus(Fl_Shortcut_Button *self); void Fl_Shortcut_Button_visible_focus(Fl_Shortcut_Button *self, int v); unsigned int Fl_Shortcut_Button_has_visible_focus(Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_user_data(Fl_Shortcut_Button *, void *data); void *Fl_Shortcut_Button_draw_data(const Fl_Shortcut_Button *self); void *Fl_Shortcut_Button_handle_data(const Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_draw_data(Fl_Shortcut_Button *self, void *data); void Fl_Shortcut_Button_set_handle_data(Fl_Shortcut_Button *self, void *data); unsigned char Fl_Shortcut_Button_damage(const Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_damage(Fl_Shortcut_Button *self, unsigned char flag); void Fl_Shortcut_Button_set_damage_area( Fl_Shortcut_Button *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Shortcut_Button_clear_damage(Fl_Shortcut_Button *self); void *Fl_Shortcut_Button_as_window(Fl_Shortcut_Button *self); void *Fl_Shortcut_Button_as_group(Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_deimage(Fl_Shortcut_Button *, void *); const void *Fl_Shortcut_Button_deimage(const Fl_Shortcut_Button *); void Fl_Shortcut_Button_set_callback(Fl_Shortcut_Button *, Fl_Callback *, void *); int Fl_Shortcut_Button_visible(const Fl_Shortcut_Button *self); int Fl_Shortcut_Button_visible_r(const Fl_Shortcut_Button *self); unsigned int Fl_Shortcut_Button_active(const Fl_Shortcut_Button *self); int Fl_Shortcut_Button_active_r(const Fl_Shortcut_Button *self); Fl_Callback *Fl_Shortcut_Button_callback(const Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_deletion_callback( Fl_Shortcut_Button *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Shortcut_Button *Fl_Shortcut_Button_from_dyn_ptr(Fl_Widget *ptr); Fl_Shortcut_Button *Fl_Shortcut_Button_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Shortcut_Button_super_draw(Fl_Widget *ptr, int flag); void Fl_Shortcut_Button_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Shortcut_Button_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Shortcut_Button_default_value(Fl_Shortcut_Button *self);

void Fl_Shortcut_Button_set_default_value(Fl_Shortcut_Button *self, int flag);

void Fl_Shortcut_Button_default_clear(Fl_Shortcut_Button *self);

int Fl_Shortcut_Button_shortcut(const Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_shortcut(Fl_Shortcut_Button *self, int shortcut); int Fl_Shortcut_Button_clear(Fl_Shortcut_Button *self); int Fl_Shortcut_Button_value(Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_value(Fl_Shortcut_Button *self, int flag); void Fl_Shortcut_Button_set_down_box(Fl_Shortcut_Button *self, int); int Fl_Shortcut_Button_down_box(const Fl_Shortcut_Button *self); void Fl_Shortcut_Button_set_compact(Fl_Shortcut_Button *self, unsigned char v); unsigned char Fl_Shortcut_Button_compact(Fl_Shortcut_Button *self);


typedef struct Fl_Help_Dialog Fl_Help_Dialog;

Fl_Help_Dialog *Fl_Help_Dialog_new(void);

void Fl_Help_Dialog_delete(Fl_Help_Dialog *self);

int Fl_Help_Dialog_h(Fl_Help_Dialog *);

void Fl_Help_Dialog_hide(Fl_Help_Dialog *);

int Fl_Help_Dialog_load(Fl_Help_Dialog *, const char *f);

void Fl_Help_Dialog_position(Fl_Help_Dialog *, int xx, int yy);

void Fl_Help_Dialog_resize(Fl_Help_Dialog *, int xx, int yy, int ww, int hh);

void Fl_Help_Dialog_show(Fl_Help_Dialog *);

void Fl_Help_Dialog_set_text_size(Fl_Help_Dialog *, int s);

int Fl_Help_Dialog_text_size(Fl_Help_Dialog *);

void Fl_Help_Dialog_set_value(Fl_Help_Dialog *, const char *f);

const char *Fl_Help_Dialog_value(const Fl_Help_Dialog *);

int Fl_Help_Dialog_visible(Fl_Help_Dialog *);

int Fl_Help_Dialog_w(Fl_Help_Dialog *);

int Fl_Help_Dialog_x(Fl_Help_Dialog *);

int Fl_Help_Dialog_y(Fl_Help_Dialog *);

void Fl_beep(int type);

typedef struct Fl_File_Chooser Fl_File_Chooser;

Fl_File_Chooser *
Fl_File_Chooser_new(const char *d, const char *p, int t, const char *title);

void Fl_File_Chooser_delete(Fl_File_Chooser *self);

void *Fl_File_Chooser_newButton(Fl_File_Chooser *self);

void *Fl_File_Chooser_previewButton(Fl_File_Chooser *self);

void *Fl_File_Chooser_showHiddenButton(Fl_File_Chooser *self);

void Fl_File_Chooser_set_callback(
    Fl_File_Chooser *self, void (*cb)(Fl_File_Chooser *, void *), void *d
);

void Fl_File_Chooser_set_color(Fl_File_Chooser *self, unsigned int c);

unsigned int Fl_File_Chooser_color(Fl_File_Chooser *self);

int Fl_File_Chooser_count(Fl_File_Chooser *self);

void Fl_File_Chooser_set_directory(Fl_File_Chooser *self, const char *d);

char *Fl_File_Chooser_directory(Fl_File_Chooser *self);

void Fl_File_Chooser_set_filter(Fl_File_Chooser *self, const char *p);

const char *Fl_File_Chooser_filter(Fl_File_Chooser *self);

int Fl_File_Chooser_filter_value(Fl_File_Chooser *self);

void Fl_File_Chooser_set_filter_value(Fl_File_Chooser *self, int f);

void Fl_File_Chooser_hide(Fl_File_Chooser *self);

void Fl_File_Chooser_set_iconsize(Fl_File_Chooser *self, unsigned char s);

unsigned char Fl_File_Chooser_iconsize(Fl_File_Chooser *self);

void Fl_File_Chooser_set_label(Fl_File_Chooser *self, const char *l);

const char *Fl_File_Chooser_label(Fl_File_Chooser *self);

void Fl_File_Chooser_set_ok_label(Fl_File_Chooser *self, const char *l);

const char *Fl_File_Chooser_ok_label(Fl_File_Chooser *self);

void Fl_File_Chooser_set_preview(Fl_File_Chooser *self, int e);

int Fl_File_Chooser_preview(const Fl_File_Chooser *self);

void Fl_File_Chooser_rescan(Fl_File_Chooser *self);

void Fl_File_Chooser_rescan_keep_filename(Fl_File_Chooser *self);

void Fl_File_Chooser_show(Fl_File_Chooser *self);

int Fl_File_Chooser_shown(Fl_File_Chooser *self);

void Fl_File_Chooser_set_text_color(Fl_File_Chooser *self, unsigned int c);

unsigned int Fl_File_Chooser_text_color(Fl_File_Chooser *self);

void Fl_File_Chooser_set_text_font(Fl_File_Chooser *self, int f);

int Fl_File_Chooser_text_font(Fl_File_Chooser *self);

void Fl_File_Chooser_set_text_size(Fl_File_Chooser *self, int s);

int Fl_File_Chooser_text_size(Fl_File_Chooser *self);

void Fl_File_Chooser_set_type(Fl_File_Chooser *self, int t);

int Fl_File_Chooser_type(Fl_File_Chooser *self);

void *Fl_File_Chooser_user_data(const Fl_File_Chooser *self);

void Fl_File_Chooser_set_user_data(Fl_File_Chooser *self, void *d);

const char *Fl_File_Chooser_value(Fl_File_Chooser *self, int f);

void Fl_File_Chooser_set_value(Fl_File_Chooser *self, const char *filename);

int Fl_File_Chooser_visible(Fl_File_Chooser *self);

void Fl_File_Chooser_set_add_favorites_label(const char *msg);

void Fl_File_Chooser_set_all_files_label(const char *msg);

void Fl_File_Chooser_set_custom_filter_label(const char *msg);

void Fl_File_Chooser_set_existing_file_label(const char *msg);

void Fl_File_Chooser_set_favorites_label(const char *msg);

void Fl_File_Chooser_set_filename_label(const char *msg);

void Fl_File_Chooser_set_filesystems_label(const char *msg);

void Fl_File_Chooser_set_manage_favorites_label(const char *msg);

void Fl_File_Chooser_set_new_directory_label(const char *msg);

void Fl_File_Chooser_set_new_directory_tooltip(const char *msg);

void Fl_File_Chooser_set_preview_label(const char *msg);

void Fl_File_Chooser_set_save_label(const char *msg);

void Fl_File_Chooser_set_show_label(const char *msg);

void Fl_File_Chooser_set_hidden_label(const char *msg);

void Fl_File_Chooser_set_position(Fl_File_Chooser *self, int x, int y);

void Fl_File_Chooser_set_size(Fl_File_Chooser *self, int w, int h);

int Fl_File_Chooser_x(const Fl_File_Chooser *self);

int Fl_File_Chooser_y(const Fl_File_Chooser *self);

int Fl_File_Chooser_w(const Fl_File_Chooser *self);

int Fl_File_Chooser_h(const Fl_File_Chooser *self);

char *Fl_dir_chooser(const char *message, const char *fname, int relative);

char *Fl_file_chooser(
    const char *message, const char *pat, const char *fname, int relative
);

int Fl_color_chooser(
    const char *name,
    unsigned char *r,
    unsigned char *g,
    unsigned char *b,
    int cmode
);

void Fl_message_title(const char *title);

void Fl_message_title_default(const char *title);

void *Fl_message_icon(void);

void Fl_message_set_hotspot(int enable);

int Fl_message_hotspot(void);

void Fl_message_set_font(int f, int s);

void Fl_message_icon_label(const char *label);

void Fl_message_position(int x, int y);
void Fl_set_color_int(unsigned int c);

void Fl_set_color_rgb(unsigned char r, unsigned char g, unsigned char b);

unsigned int Fl_get_color(void);

void Fl_push_clip(int x, int y, int w, int h);

void Fl_push_no_clip(void);

void Fl_pop_clip(void);

int Fl_not_clipped(int x, int y, int w, int h);

int Fl_clip_box(int x, int y, int w, int h, int *X, int *Y, int *W, int *H);

void Fl_restore_clip(void);

void Fl_set_clip_region(void *r);

void *Fl_clip_region(void);

void Fl_point(int x, int y);

void Fl_line_style(int style, int width, char *dashes);

void Fl_rect(int x, int y, int w, int h);

void Fl_focus_rect(int x, int y, int w, int h);

void Fl_rect_with_color(int x, int y, int w, int h, unsigned int c);

void Fl_rectf(int x, int y, int w, int h);

void Fl_rectf_with_color(int x, int y, int w, int h, unsigned int c);

void Fl_rectf_with_rgb(
    int x,
    int y,
    int w,
    int h,
    unsigned char r,
    unsigned char g,
    unsigned char b
);

void Fl_line(int x, int y, int x1, int y1);

void Fl_polyline(int x, int y, int x1, int y1, int x2, int y2);

void Fl_loop(int x, int y, int x1, int y1, int x2, int y2);

void Fl_loop_4sided(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3);

void Fl_polygon(int x, int y, int x1, int y1, int x2, int y2);

void Fl_polygon_4sided(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3);

void Fl_xyline(int x, int y, int x1);

void Fl_xyline2(int x, int y, int x1, int y2);

void Fl_xyline3(int x, int y, int x1, int y2, int x3);

void Fl_yxline(int x, int y, int y1);

void Fl_yxline2(int x, int y, int y1, int x2);

void Fl_yxline3(int x, int y, int y1, int x2, int y3);

void Fl_arc(int x, int y, int w, int h, double a1, double a2);

void Fl_pie(int x, int y, int w, int h, double a1, double a2);

void Fl_push_matrix(void);

void Fl_pop_matrix(void);

void Fl_scale_xy(double x, double y);

void Fl_scale(double x);

void Fl_translate(double x, double y);

void Fl_rotate(double d);

void Fl_mult_matrix(double a, double b, double c, double d, double x, double y);

void Fl_begin_points(void);

void Fl_begin_line(void);

void Fl_begin_loop(void);

void Fl_begin_polygon(void);

void Fl_vertex(double x, double y);

void Fl_curve(
    double X0,
    double Y0,
    double X1,
    double Y1,
    double X2,
    double Y2,
    double X3,
    double Y3
);

void Fl_arc_with_radius(double x, double y, double r, double start, double end);

void Fl_circle(double x, double y, double r);

void Fl_draw_circle(int x, int y, int d, unsigned int c);

void Fl_end_points(void);

void Fl_end_line(void);

void Fl_end_loop(void);

void Fl_end_polygon(void);

void Fl_begin_complex_polygon(void);

void Fl_gap(void);

void Fl_end_complex_polygon(void);

double Fl_transform_x(double x, double y);

double Fl_transform_y(double x, double y);

double Fl_transform_dx(double x, double y);

double Fl_transform_dy(double x, double y);

void Fl_transformed_vertex(double xf, double yf);

void Fl_end_offscreen(void);

void Fl_set_draw_font(int face, int fsize);

int Fl_font(void);

int Fl_size(void);

int Fl_height(void);

int Fl_set_height(int font, int size);

int Fl_descent(void);

double Fl_width(const char *txt, int n);

double Fl_char_width(unsigned int c);

void Fl_text_extents(const char *, int *dx, int *dy, int *w, int *h);

void Fl_text_extents_n(const char *t, int n, int *dx, int *dy, int *w, int *h);

const char *Fl_latin1_to_local(const char *t, int n);

const char *Fl_local_to_latin1(const char *t, int n);

const char *Fl_mac_roman_to_local(const char *t, int n);

const char *Fl_local_to_mac_roman(const char *t, int n);

void Fl_draw(const char *str, int x, int y);

void Fl_draw_text_angled(int angle, const char *str, int x, int y);

void Fl_draw_text_n(const char *str, int n, int x, int y);

void Fl_draw_text_angled_n(int angle, const char *str, int n, int x, int y);

void Fl_rtl_draw(const char *str, int n, int x, int y);

void Fl_measure(const char *str, int *x, int *y, int draw_symbols);

void Fl_draw5(
    const char *str,
    int x,
    int y,
    int w,
    int h,
    int align,
    void **img,
    int draw_symbols
);

void Fl_frame(const char *s, int x, int y, int w, int h);

void Fl_frame2(const char *s, int x, int y, int w, int h);

void Fl_draw_box(int box_type, int x, int y, int w, int h, unsigned int);

void Fl_draw_image(
    const unsigned char *buf, int X, int Y, int W, int H, int D, int L
);

void Fl_draw_image_mono(
    const unsigned char *buf, int X, int Y, int W, int H, int D, int L
);

char Fl_can_do_alpha_blending(void);

unsigned char *
Fl_read_image(unsigned char *p, int X, int Y, int W, int H, int alpha);

unsigned char *Fl_capture_window_part(void *win, int x, int y, int w, int h);

int Fl_draw_pixmap(const char *const *data, int x, int y, int bg);

int Fl_draw_pixmap2( char *const *data, int x, int y, int bg);

int Fl_measure_pixmap( char *const *data, int *w, int *h);

int Fl_measure_pixmap2(const char *const *cdata, int *w, int *h);

const char *Fl_shortcut_label(unsigned int shortcut);

const char *Fl_shortcut_label2(unsigned int shortcut, const char **eom);

unsigned int Fl_old_shortcut(const char *s);

void Fl_overlay_rect(int x, int y, int w, int h);

void Fl_overlay_clear(void);

void Fl_set_cursor(int cursor);

void Fl_set_cursor_with_color(int cursor, int fg, int bg);

const char *Fl_expand_text(
    const char *from,
    char *buf,
    int maxbuf,
    double maxw,
    int *n,
    double *width,
    int wrap,
    int draw_symbols
);

void Fl_set_status(int X, int Y, int W, int H);

void Fl_set_spot(int font, int size, int X, int Y, int W, int H, void *win);

void Fl_reset_spot(void);

unsigned int Fl_show_colormap(unsigned int old_col);

void Fl_copy_offscreen(
    int x, int y, int w, int h, void *pixmap, int srcx, int srcy
);

void *Fl_create_offscreen(int w, int h);

void Fl_begin_offscreen(void *b);

void Fl_end_offscreen(void);

void Fl_delete_offscreen(void *bitmap);

void Fl_rescale_offscreen(void **ctx);

void Fl_draw_text_boxed(const char *str, int x, int y, int w, int h, int align);

void Fl_draw_check(int x, int y, int w, int h, unsigned int col);

int Fl_add_symbol(const char *name, void (*drawit)(unsigned int), int scalable);

void Fl_rounded_rect(int x, int y, int w, int h, int r);

void Fl_rounded_rectf(int x, int y, int w, int h, int r);

float Fl_override_scale(void);

void Fl_restore_scale(float s);



static const char *Fl_EventNames[] = {
    "Fl_Event_None",
    "Fl_Event_Push",
    "Fl_Event_Released",
    "Fl_Event_Enter",
    "Fl_Event_Leave",
    "Fl_Event_Drag",
    "Fl_Event_Focus",
    "Fl_Event_Unfocus",
    "Fl_Event_KeyDown",
    "Fl_Event_KeyUp",
    "Fl_Event_Close",
    "Fl_Event_Move",
    "Fl_Event_Shortcut",
    "Fl_Event_Deactivate",
    "Fl_Event_Activate",
    "Fl_Event_Hide",
    "Fl_Event_Show",
    "Fl_Event_Paste",
    "Fl_Event_SelectionClear",
    "Fl_Event_MouseWheel",
    "Fl_Event_DndEnter",
    "Fl_Event_DndDrag",
    "Fl_Event_DndLeave",
    "Fl_Event_DndRelease",
    "Fl_Event_ScreenConfigChanged",
    "Fl_Event_Fullscreen",
    "Fl_Event_ZoomGesture",
    "Fl_Event_ZoomEvent",
    "Fl_Event_Resize",
};

enum Fl_BrowserType {
    Fl_BrowserType_Normal = 0,
    Fl_BrowserType_Select = 1,
    Fl_BrowserType_Hold = 2,
    Fl_BrowserType_Multi = 3,
};

enum Fl_BrowserScrollbar {
    Fl_BrowserScrollbar_None = 0,
    Fl_BrowserScrollbar_Horizontal = 1,
    Fl_BrowserScrollbar_Vertical = 2,
    Fl_BrowserScrollbar_Both = 3,
    Fl_BrowserScrollbar_AlwaysOn = 4,
    Fl_BrowserScrollbar_HorizontalAlways = 5,
    Fl_BrowserScrollbar_VerticalAlways = 6,
    Fl_BrowserScrollbar_BothAlways = 7,
};

enum Fl_FileType {
    Fl_FileType_Files = 0,
    Fl_FileType_Dirs,
};

enum Fl_FileDialogType {
    Fl_FileDialogType_BrowseFile = 0,
    Fl_FileDialogType_BrowseDir,
    Fl_FileDialogType_BrowseMultiFile,
    Fl_FileDialogType_BrowseMultiDir,
    Fl_FileDialogType_BrowseSaveFile,
    Fl_FileDialogType_BrowseSaveDir,
};

enum Fl_FileDialogOptions {
    Fl_FileDialogOptions_NoOptions = 0,
    Fl_FileDialogOptions_SaveAsConfirm = 1,
    Fl_FileDialogOptions_NewFolder = 2,
    Fl_FileDialogOptions_Preview = 4,
    Fl_FileDialogOptions_UseFilterExt = 8,
};

enum Fl_BeepType {
    Fl_BeepType_Default = 0,
    Fl_BeepType_Message,
    Fl_BeepType_Error,
    Fl_BeepType_Question,
    Fl_BeepType_Password,
    Fl_BeepType_Notification,
};

enum Fl_FileChooserType {
    Fl_FileChooserType_Single = 0,
    Fl_FileChooserType_Multi = 1,
    Fl_FileChooserType_Create = 2,
    Fl_FileChooserType_Directory = 4,
};

enum Fl_LineStyle {
    Fl_LineStyle_Solid = 0,
    Fl_LineStyle_Dash,
    Fl_LineStyle_Dot,
    Fl_LineStyle_DashDot,
    Fl_LineStyle_DashDotDot,
    Fl_LineStyle_CapFlat = 100,
    Fl_LineStyle_CapRound = 200,
    Fl_LineStyle_CapSquare = 300,
    Fl_LineStyle_JoinMiter = 1000,
    Fl_LineStyle_JoinRound = 2000,
    Fl_LineStyle_JoinBevel = 3000,
};

enum Fl_LabelType {
    Fl_LabelType_Normal = 0,
    Fl_LabelType_None,
    Fl_LabelType_Shadow,
    Fl_LabelType_Engraved,
    Fl_LabelType_Embossed,
    Fl_LabelType_Multi,
    Fl_LabelType_Icon,
    Fl_LabelType_Image,
    Fl_LabelType_FreeType,
};

enum Fl_Align {
    Fl_Align_Center = 0x0000,
    Fl_Align_Top = 0x0001,
    Fl_Align_Bottom = 0x0002,
    Fl_Align_Left = 0x0004,
    Fl_Align_Right = 0x0008,
    Fl_Align_Inside = 0x0010,
    Fl_Align_TextOverImage = 0x0020,
    Fl_Align_ImageOverText = 0x000,
    Fl_Align_NoWrap = 0x000,
    Fl_Align_Clip = 0x0040,
    Fl_Align_Wrap = 0x0080,
    Fl_Align_ImageNextToText = 0x0100,
    Fl_Align_TextNextToImage = 0x0120,
    Fl_Align_ImageBackdrop = 0x0200,
    Fl_Align_TopLeft = 0x0001 | 0x0004,
    Fl_Align_TopRight = 0x0001 | 0x0008,
    Fl_Align_BottomLeft = 0x0002 | 0x0004,
    Fl_Align_BottomRight = 0x0002 | 0x0008,
    Fl_Align_LeftTop = 0x0007,
    Fl_Align_RightTop = 0x000B,
    Fl_Align_LeftBottom = 0x000D,
    Fl_Align_RightBottom = 0x000E,
    Fl_Align_PositionMask = 0x000F,
    Fl_Align_ImageMask = 0x0320,
};

enum Fl_Event {
    Fl_Event_None = 0,
    Fl_Event_Push,
    Fl_Event_Released,
    Fl_Event_Enter,
    Fl_Event_Leave,
    Fl_Event_Drag,
    Fl_Event_Focus,
    Fl_Event_Unfocus,
    Fl_Event_KeyDown,
    Fl_Event_KeyUp,
    Fl_Event_Close,
    Fl_Event_Move,
    Fl_Event_Shortcut,
    Fl_Event_Deactivate,
    Fl_Event_Activate,
    Fl_Event_Hide,
    Fl_Event_Show,
    Fl_Event_Paste,
    Fl_Event_SelectionClear,
    Fl_Event_MouseWheel,
    Fl_Event_DndEnter,
    Fl_Event_DndDrag,
    Fl_Event_DndLeave,
    Fl_Event_DndRelease,
    Fl_Event_ScreenConfigChanged,
    Fl_Event_Fullscreen,
    Fl_Event_ZoomGesture,
    Fl_Event_ZoomEvent,
    Fl_Event_Resize,
};

enum Fl_Shortcut {
    Fl_Shortcut_None = 0,
    Fl_Shortcut_Shift = 0x00010000,
    Fl_Shortcut_CapsLock = 0x00020000,
    Fl_Shortcut_Ctrl = 0x00040000,
    Fl_Shortcut_Alt = 0x00080000,
    Fl_Shortcut_Meta = 0x00400000,
    Fl_Shortcut_Button1 = 0x01000000,
    Fl_Shortcut_Button2 = 0x02000000,
    Fl_Shortcut_Button3 = 0x04000000,
    Fl_Shortcut_Buttons = 0x7f000000,
};

enum Fl_TextCursor {
    Fl_TextCursor_Normal,
    Fl_TextCursor_Caret,
    Fl_TextCursor_Dim,
    Fl_TextCursor_Block,
    Fl_TextCursor_Heavy,
    Fl_TextCursor_Simple,
};

enum Fl_PackType {
    Fl_PackType_Vertical = 0,
    Fl_PackType_Horizontal = 1,
};

enum Fl_ScrollType {
    Fl_ScrollType_None = 0,
    Fl_ScrollType_Horizontal = 1,
    Fl_ScrollType_Vertical = 2,
    Fl_ScrollType_Both = 3,
    Fl_ScrollType_AlwaysOn = 4,
    Fl_ScrollType_HorizontalAlways = 5,
    Fl_ScrollType_VerticalAlways = 6,
    Fl_ScrollType_BothAlways = 7,
};

enum Fl_InputType {
    Fl_InputType_Normal = 0,
    Fl_InputType_Float = 1,
    Fl_InputType_Int = 2,
    Fl_InputType_Multiline = 4,
    Fl_InputType_Secret = 5,
    Fl_InputType_Input = 7,
    Fl_InputType_Readonly = 8,
    Fl_InputType_Wrap = 16,
};

enum Fl_OutputType {
    Fl_OutputType_Normal = 8,
    Fl_OutputType_Multiline = 12,
};

enum Fl_MenuFlag {
    Fl_MenuFlag_Normal = 0,
    Fl_MenuFlag_Inactive = 1,
    Fl_MenuFlag_Toggle = 2,
    Fl_MenuFlag_Value = 4,
    Fl_MenuFlag_Radio = 8,
    Fl_MenuFlag_Invisible = 0x10,
    Fl_MenuFlag_SubmenuPointer = 0x20,
    Fl_MenuFlag_Submenu = 0x40,
    Fl_MenuFlag_MenuDivider = 0x80,
    Fl_MenuFlag_MenuHorizontal = 0x100,
};

enum Fl_ChartType {
    Fl_ChartType_Bar = 0,
    Fl_ChartType_HorizontalBar = 1,
    Fl_ChartType_Line = 2,
    Fl_ChartType_Fill = 3,
    Fl_ChartType_Spike = 4,
    Fl_ChartType_Pie = 5,
    Fl_ChartType_SpecialPie = 6,
};

enum Fl_ClockType {
    Fl_ClockType_Square = 0,
    Fl_ClockType_Round = 1,
};

enum Fl_TableContext {
    Fl_TableContext_None = 0,
    Fl_TableContext_StartPage = 0x01,
    Fl_TableContext_EndPage = 0x02,
    Fl_TableContext_RowHeader = 0x04,
    Fl_TableContext_ColHeader = 0x08,
    Fl_TableContext_Cell = 0x10,
    Fl_TableContext_Table = 0x20,
    Fl_TableContext_RcResize = 0x40,
};

enum Fl_TableRowSelectMode {
    Fl_TableRowSelectMode_None,
    Fl_TableRowSelectMode_Single,
    Fl_TableRowSelectMode_Multi,
};

enum Fl_TreeSort {
    Fl_TreeSort_None = 0,
    Fl_TreeSort_Ascending = 1,
    Fl_TreeSort_Descending = 2,
};

enum Fl_TreeConnectorStyle {
    Fl_TreeConnectorStyle_None = 0,
    Fl_TreeConnectorStyle_Dotted = 1,
    Fl_TreeConnectorStyle_Solid = 2,
};

enum Fl_TreeSelect {
    Fl_TreeSelect_None = 0,
    Fl_TreeSelect_Single = 1,
    Fl_TreeSelect_Multi = 2,
    Fl_TreeSelect_SingleDraggable = 3,
};

enum Fl_TreeItemSelect {
    Fl_TreeItemSelect_Deselect = 0,
    Fl_TreeItemSelect_Select = 1,
    Fl_TreeItemSelect_Toggle = 2,
};

enum Fl_TreeReason {
    Fl_TreeReason_None = 0,
    Fl_TreeReason_Selected,
    Fl_TreeReason_Deselected,
    Fl_TreeReason_Reselected,
    Fl_TreeReason_Opened,
    Fl_TreeReason_Closed,
    Fl_TreeReason_Dragged,
};

enum Fl_TreeItemReselectMode {
    Fl_TreeItemReselectMode_Once = 0,
    Fl_TreeItemReselectMode_Always,
};

enum Fl_TreeItemDrawMode {
    Fl_TreeItemDrawMode_Default = 0,
    Fl_TreeItemDrawMode_LabelAndWidget = 1,
    Fl_TreeItemDrawMode_HeightFromWidget = 2,
};

enum Fl_SliderType {
    Fl_SliderType_Vertical = 0,
    Fl_SliderType_Horizontal = 1,
    Fl_SliderType_VerticalFill = 2,
    Fl_SliderType_HorizontalFill = 3,
    Fl_SliderType_VerticalNice = 4,
    Fl_SliderType_HorizontalNice = 5,
};

enum Fl_DialType {
    Fl_DialType_Normal = 0,
    Fl_DialType_Line = 1,
    Fl_DialType_Fill = 2,
};

enum Fl_CounterType {
    Fl_CounterType_Normal = 0,
    Fl_CounterType_Simple = 1,
};

enum Fl_ScrollbarType {
    Fl_ScrollbarType_Vertical = 0,
    Fl_ScrollbarType_Horizontal = 1,
    Fl_ScrollbarType_VerticalFill = 2,
    Fl_ScrollbarType_HorizontalFill = 3,
    Fl_ScrollbarType_VerticalNice = 4,
    Fl_ScrollbarType_HorizontalNice = 5,
};



enum Fl_WrapMode {
    Fl_Wrap_None,
    Fl_Wrap_At_Column,
    Fl_Wrap_At_Pixel,
    Fl_Wrap_At_Bounds,
};

enum Fl_DragType {
    Fl_Drag_None = -2,
    Fl_Drag_Start_Dnd = -1,
    Fl_Drag_Char = 0,
    Fl_Drag_Word = 1,
    Fl_Drag_Line = 2,
};



enum Fl_MenuButtonType {
    Popup1 = 1,
    Popup2,
    Popup12,
    Popup3,
    Popup13,
    Popup23,
    Popup123,
};

enum Fl_FlexType {
    Fl_FlexType_Column = 0,
    Fl_FlexType_Row,
};

enum Fl_RgbScaling {
    Fl_RgbScaling_Nearest = 0,
    Fl_RgbScaling_Bilinear,
};

enum Fl_Table_ResizeFlag {
    Fl_Table_RESIZE_NONE = 0,
    Fl_Table_RESIZE_COL_LEFT = 1,
    Fl_Table_RESIZE_COL_RIGHT = 2,
    Fl_Table_RESIZE_ROW_ABOVE = 3,
    Fl_Table_RESIZE_ROW_BELOW = 4
};
typedef struct Fl_Group Fl_Group; Fl_Group *Fl_Group_new( int x, int y, int width, int height, const char *title ); int Fl_Group_x(Fl_Group *); int Fl_Group_y(Fl_Group *); int Fl_Group_width(Fl_Group *); int Fl_Group_height(Fl_Group *); const char *Fl_Group_label(Fl_Group *); void Fl_Group_set_label(Fl_Group *, const char *title); void Fl_Group_redraw(Fl_Group *); void Fl_Group_show(Fl_Group *); void Fl_Group_hide(Fl_Group *); void Fl_Group_activate(Fl_Group *); void Fl_Group_deactivate(Fl_Group *); void Fl_Group_redraw_label(Fl_Group *); void Fl_Group_resize(Fl_Group *, int x, int y, int width, int height); void Fl_Group_widget_resize( Fl_Group *, int x, int y, int width, int height ); const char *Fl_Group_tooltip(Fl_Group *); void Fl_Group_set_tooltip(Fl_Group *, const char *txt); int Fl_Group_get_type(Fl_Group *); void Fl_Group_set_type(Fl_Group *, int typ); unsigned int Fl_Group_color(Fl_Group *); void Fl_Group_set_color(Fl_Group *, unsigned int color); void Fl_Group_measure_label(const Fl_Group *, int *, int *); unsigned int Fl_Group_label_color(Fl_Group *); void Fl_Group_set_label_color(Fl_Group *, unsigned int color); int Fl_Group_label_font(Fl_Group *); void Fl_Group_set_label_font(Fl_Group *, int font); int Fl_Group_label_size(Fl_Group *); void Fl_Group_set_label_size(Fl_Group *, int sz); int Fl_Group_label_type(Fl_Group *); void Fl_Group_set_label_type(Fl_Group *, int typ); int Fl_Group_box(Fl_Group *); void Fl_Group_set_box(Fl_Group *, int typ); int Fl_Group_changed(Fl_Group *); void Fl_Group_set_changed(Fl_Group *); void Fl_Group_clear_changed(Fl_Group *); int Fl_Group_align(Fl_Group *); void Fl_Group_set_align(Fl_Group *, int typ); void Fl_Group_delete(Fl_Group *); void Fl_Group_set_image(Fl_Group *, void *); void Fl_Group_handle( Fl_Group *self, custom_handler_callback cb, void *data ); int Fl_Group_handle_event(Fl_Group *self, int event); void Fl_Group_draw(Fl_Group *self, custom_draw_callback cb, void *data); void Fl_Group_resize_callback( Fl_Group *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Group_set_when(Fl_Group *, int); int Fl_Group_when(const Fl_Group *); const void *Fl_Group_image(const Fl_Group *); void *Fl_Group_parent(const Fl_Group *self); unsigned int Fl_Group_selection_color(Fl_Group *); void Fl_Group_set_selection_color(Fl_Group *, unsigned int color); void Fl_Group_do_callback(Fl_Group *); int Fl_Group_inside(const Fl_Group *self, void *); void *Fl_Group_window(const Fl_Group *); void *Fl_Group_top_window(const Fl_Group *); int Fl_Group_takes_events(const Fl_Group *); void *Fl_Group_user_data(const Fl_Group *); int Fl_Group_take_focus(Fl_Group *self); void Fl_Group_set_visible_focus(Fl_Group *self); void Fl_Group_clear_visible_focus(Fl_Group *self); void Fl_Group_visible_focus(Fl_Group *self, int v); unsigned int Fl_Group_has_visible_focus(Fl_Group *self); void Fl_Group_set_user_data(Fl_Group *, void *data); void *Fl_Group_draw_data(const Fl_Group *self); void *Fl_Group_handle_data(const Fl_Group *self); void Fl_Group_set_draw_data(Fl_Group *self, void *data); void Fl_Group_set_handle_data(Fl_Group *self, void *data); unsigned char Fl_Group_damage(const Fl_Group *self); void Fl_Group_set_damage(Fl_Group *self, unsigned char flag); void Fl_Group_set_damage_area( Fl_Group *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Group_clear_damage(Fl_Group *self); void *Fl_Group_as_window(Fl_Group *self); void *Fl_Group_as_group(Fl_Group *self); void Fl_Group_set_deimage(Fl_Group *, void *); const void *Fl_Group_deimage(const Fl_Group *); void Fl_Group_set_callback(Fl_Group *, Fl_Callback *, void *); int Fl_Group_visible(const Fl_Group *self); int Fl_Group_visible_r(const Fl_Group *self); unsigned int Fl_Group_active(const Fl_Group *self); int Fl_Group_active_r(const Fl_Group *self); Fl_Callback *Fl_Group_callback(const Fl_Group *self); void Fl_Group_set_deletion_callback( Fl_Group *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Group *Fl_Group_from_dyn_ptr(Fl_Widget *ptr); Fl_Group *Fl_Group_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Group_super_draw(Fl_Widget *ptr, int flag); void Fl_Group_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Group_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Group_insert(Fl_Group *self, void *, int pos);
void Fl_Group_clear(Fl_Group *self);
void Fl_Group_set_clip_children(Fl_Group *self, int c);
int Fl_Group_clip_children(Fl_Group *self);
void Fl_Group_init_sizes(Fl_Group *self);
void Fl_Group_draw_child(const Fl_Group *self, Fl_Widget *w);
void Fl_Group_update_child(const Fl_Group *self, Fl_Widget *w);
void Fl_Group_draw_outside_label(const Fl_Group *self, const Fl_Widget *w);
void Fl_Group_draw_children(Fl_Group *self);

typedef struct Fl_Pack Fl_Pack; Fl_Pack *Fl_Pack_new( int x, int y, int width, int height, const char *title ); int Fl_Pack_x(Fl_Pack *); int Fl_Pack_y(Fl_Pack *); int Fl_Pack_width(Fl_Pack *); int Fl_Pack_height(Fl_Pack *); const char *Fl_Pack_label(Fl_Pack *); void Fl_Pack_set_label(Fl_Pack *, const char *title); void Fl_Pack_redraw(Fl_Pack *); void Fl_Pack_show(Fl_Pack *); void Fl_Pack_hide(Fl_Pack *); void Fl_Pack_activate(Fl_Pack *); void Fl_Pack_deactivate(Fl_Pack *); void Fl_Pack_redraw_label(Fl_Pack *); void Fl_Pack_resize(Fl_Pack *, int x, int y, int width, int height); void Fl_Pack_widget_resize( Fl_Pack *, int x, int y, int width, int height ); const char *Fl_Pack_tooltip(Fl_Pack *); void Fl_Pack_set_tooltip(Fl_Pack *, const char *txt); int Fl_Pack_get_type(Fl_Pack *); void Fl_Pack_set_type(Fl_Pack *, int typ); unsigned int Fl_Pack_color(Fl_Pack *); void Fl_Pack_set_color(Fl_Pack *, unsigned int color); void Fl_Pack_measure_label(const Fl_Pack *, int *, int *); unsigned int Fl_Pack_label_color(Fl_Pack *); void Fl_Pack_set_label_color(Fl_Pack *, unsigned int color); int Fl_Pack_label_font(Fl_Pack *); void Fl_Pack_set_label_font(Fl_Pack *, int font); int Fl_Pack_label_size(Fl_Pack *); void Fl_Pack_set_label_size(Fl_Pack *, int sz); int Fl_Pack_label_type(Fl_Pack *); void Fl_Pack_set_label_type(Fl_Pack *, int typ); int Fl_Pack_box(Fl_Pack *); void Fl_Pack_set_box(Fl_Pack *, int typ); int Fl_Pack_changed(Fl_Pack *); void Fl_Pack_set_changed(Fl_Pack *); void Fl_Pack_clear_changed(Fl_Pack *); int Fl_Pack_align(Fl_Pack *); void Fl_Pack_set_align(Fl_Pack *, int typ); void Fl_Pack_delete(Fl_Pack *); void Fl_Pack_set_image(Fl_Pack *, void *); void Fl_Pack_handle( Fl_Pack *self, custom_handler_callback cb, void *data ); int Fl_Pack_handle_event(Fl_Pack *self, int event); void Fl_Pack_draw(Fl_Pack *self, custom_draw_callback cb, void *data); void Fl_Pack_resize_callback( Fl_Pack *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Pack_set_when(Fl_Pack *, int); int Fl_Pack_when(const Fl_Pack *); const void *Fl_Pack_image(const Fl_Pack *); void *Fl_Pack_parent(const Fl_Pack *self); unsigned int Fl_Pack_selection_color(Fl_Pack *); void Fl_Pack_set_selection_color(Fl_Pack *, unsigned int color); void Fl_Pack_do_callback(Fl_Pack *); int Fl_Pack_inside(const Fl_Pack *self, void *); void *Fl_Pack_window(const Fl_Pack *); void *Fl_Pack_top_window(const Fl_Pack *); int Fl_Pack_takes_events(const Fl_Pack *); void *Fl_Pack_user_data(const Fl_Pack *); int Fl_Pack_take_focus(Fl_Pack *self); void Fl_Pack_set_visible_focus(Fl_Pack *self); void Fl_Pack_clear_visible_focus(Fl_Pack *self); void Fl_Pack_visible_focus(Fl_Pack *self, int v); unsigned int Fl_Pack_has_visible_focus(Fl_Pack *self); void Fl_Pack_set_user_data(Fl_Pack *, void *data); void *Fl_Pack_draw_data(const Fl_Pack *self); void *Fl_Pack_handle_data(const Fl_Pack *self); void Fl_Pack_set_draw_data(Fl_Pack *self, void *data); void Fl_Pack_set_handle_data(Fl_Pack *self, void *data); unsigned char Fl_Pack_damage(const Fl_Pack *self); void Fl_Pack_set_damage(Fl_Pack *self, unsigned char flag); void Fl_Pack_set_damage_area( Fl_Pack *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Pack_clear_damage(Fl_Pack *self); void *Fl_Pack_as_window(Fl_Pack *self); void *Fl_Pack_as_group(Fl_Pack *self); void Fl_Pack_set_deimage(Fl_Pack *, void *); const void *Fl_Pack_deimage(const Fl_Pack *); void Fl_Pack_set_callback(Fl_Pack *, Fl_Callback *, void *); int Fl_Pack_visible(const Fl_Pack *self); int Fl_Pack_visible_r(const Fl_Pack *self); unsigned int Fl_Pack_active(const Fl_Pack *self); int Fl_Pack_active_r(const Fl_Pack *self); Fl_Callback *Fl_Pack_callback(const Fl_Pack *self); void Fl_Pack_set_deletion_callback( Fl_Pack *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Pack *Fl_Pack_from_dyn_ptr(Fl_Widget *ptr); Fl_Pack *Fl_Pack_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Pack_super_draw(Fl_Widget *ptr, int flag); void Fl_Pack_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Pack_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Pack_spacing(Fl_Pack *self);

void Fl_Pack_set_spacing(Fl_Pack *self, int spacing);

void Fl_Pack_begin(Fl_Pack *self); void Fl_Pack_end(Fl_Pack *self); int Fl_Pack_find(Fl_Pack *self, const void *); void Fl_Pack_add(Fl_Pack *self, void *); void Fl_Pack_insert(Fl_Pack *self, void *, int pos); void Fl_Pack_remove(Fl_Pack *self, void *wid); void Fl_Pack_remove_by_index(Fl_Pack *self, int idx); void Fl_Pack_clear(Fl_Pack *self); int Fl_Pack_children(Fl_Pack *self); Fl_Widget *Fl_Pack_child(Fl_Pack *, int index); void Fl_Pack_resizable(Fl_Pack *self, void *); void Fl_Pack_set_clip_children(Fl_Pack *self, int c); int Fl_Pack_clip_children(Fl_Pack *self); void Fl_Pack_init_sizes(Fl_Pack *self); void Fl_Pack_draw_child(const Fl_Pack *self, Fl_Widget *w); void Fl_Pack_update_child(const Fl_Pack *self, Fl_Widget *w); void Fl_Pack_draw_outside_label(const Fl_Pack *self, const Fl_Widget *w); void Fl_Pack_draw_children(Fl_Pack *self);

typedef struct Fl_Scroll Fl_Scroll; Fl_Scroll *Fl_Scroll_new( int x, int y, int width, int height, const char *title ); int Fl_Scroll_x(Fl_Scroll *); int Fl_Scroll_y(Fl_Scroll *); int Fl_Scroll_width(Fl_Scroll *); int Fl_Scroll_height(Fl_Scroll *); const char *Fl_Scroll_label(Fl_Scroll *); void Fl_Scroll_set_label(Fl_Scroll *, const char *title); void Fl_Scroll_redraw(Fl_Scroll *); void Fl_Scroll_show(Fl_Scroll *); void Fl_Scroll_hide(Fl_Scroll *); void Fl_Scroll_activate(Fl_Scroll *); void Fl_Scroll_deactivate(Fl_Scroll *); void Fl_Scroll_redraw_label(Fl_Scroll *); void Fl_Scroll_resize(Fl_Scroll *, int x, int y, int width, int height); void Fl_Scroll_widget_resize( Fl_Scroll *, int x, int y, int width, int height ); const char *Fl_Scroll_tooltip(Fl_Scroll *); void Fl_Scroll_set_tooltip(Fl_Scroll *, const char *txt); int Fl_Scroll_get_type(Fl_Scroll *); void Fl_Scroll_set_type(Fl_Scroll *, int typ); unsigned int Fl_Scroll_color(Fl_Scroll *); void Fl_Scroll_set_color(Fl_Scroll *, unsigned int color); void Fl_Scroll_measure_label(const Fl_Scroll *, int *, int *); unsigned int Fl_Scroll_label_color(Fl_Scroll *); void Fl_Scroll_set_label_color(Fl_Scroll *, unsigned int color); int Fl_Scroll_label_font(Fl_Scroll *); void Fl_Scroll_set_label_font(Fl_Scroll *, int font); int Fl_Scroll_label_size(Fl_Scroll *); void Fl_Scroll_set_label_size(Fl_Scroll *, int sz); int Fl_Scroll_label_type(Fl_Scroll *); void Fl_Scroll_set_label_type(Fl_Scroll *, int typ); int Fl_Scroll_box(Fl_Scroll *); void Fl_Scroll_set_box(Fl_Scroll *, int typ); int Fl_Scroll_changed(Fl_Scroll *); void Fl_Scroll_set_changed(Fl_Scroll *); void Fl_Scroll_clear_changed(Fl_Scroll *); int Fl_Scroll_align(Fl_Scroll *); void Fl_Scroll_set_align(Fl_Scroll *, int typ); void Fl_Scroll_delete(Fl_Scroll *); void Fl_Scroll_set_image(Fl_Scroll *, void *); void Fl_Scroll_handle( Fl_Scroll *self, custom_handler_callback cb, void *data ); int Fl_Scroll_handle_event(Fl_Scroll *self, int event); void Fl_Scroll_draw(Fl_Scroll *self, custom_draw_callback cb, void *data); void Fl_Scroll_resize_callback( Fl_Scroll *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Scroll_set_when(Fl_Scroll *, int); int Fl_Scroll_when(const Fl_Scroll *); const void *Fl_Scroll_image(const Fl_Scroll *); void *Fl_Scroll_parent(const Fl_Scroll *self); unsigned int Fl_Scroll_selection_color(Fl_Scroll *); void Fl_Scroll_set_selection_color(Fl_Scroll *, unsigned int color); void Fl_Scroll_do_callback(Fl_Scroll *); int Fl_Scroll_inside(const Fl_Scroll *self, void *); void *Fl_Scroll_window(const Fl_Scroll *); void *Fl_Scroll_top_window(const Fl_Scroll *); int Fl_Scroll_takes_events(const Fl_Scroll *); void *Fl_Scroll_user_data(const Fl_Scroll *); int Fl_Scroll_take_focus(Fl_Scroll *self); void Fl_Scroll_set_visible_focus(Fl_Scroll *self); void Fl_Scroll_clear_visible_focus(Fl_Scroll *self); void Fl_Scroll_visible_focus(Fl_Scroll *self, int v); unsigned int Fl_Scroll_has_visible_focus(Fl_Scroll *self); void Fl_Scroll_set_user_data(Fl_Scroll *, void *data); void *Fl_Scroll_draw_data(const Fl_Scroll *self); void *Fl_Scroll_handle_data(const Fl_Scroll *self); void Fl_Scroll_set_draw_data(Fl_Scroll *self, void *data); void Fl_Scroll_set_handle_data(Fl_Scroll *self, void *data); unsigned char Fl_Scroll_damage(const Fl_Scroll *self); void Fl_Scroll_set_damage(Fl_Scroll *self, unsigned char flag); void Fl_Scroll_set_damage_area( Fl_Scroll *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Scroll_clear_damage(Fl_Scroll *self); void *Fl_Scroll_as_window(Fl_Scroll *self); void *Fl_Scroll_as_group(Fl_Scroll *self); void Fl_Scroll_set_deimage(Fl_Scroll *, void *); const void *Fl_Scroll_deimage(const Fl_Scroll *); void Fl_Scroll_set_callback(Fl_Scroll *, Fl_Callback *, void *); int Fl_Scroll_visible(const Fl_Scroll *self); int Fl_Scroll_visible_r(const Fl_Scroll *self); unsigned int Fl_Scroll_active(const Fl_Scroll *self); int Fl_Scroll_active_r(const Fl_Scroll *self); Fl_Callback *Fl_Scroll_callback(const Fl_Scroll *self); void Fl_Scroll_set_deletion_callback( Fl_Scroll *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Scroll *Fl_Scroll_from_dyn_ptr(Fl_Widget *ptr); Fl_Scroll *Fl_Scroll_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Scroll_super_draw(Fl_Widget *ptr, int flag); void Fl_Scroll_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Scroll_super_handle_first(Fl_Widget *ptr, int flag);

void *Fl_Scroll_scrollbar(Fl_Scroll *self);

void *Fl_Scroll_hscrollbar(Fl_Scroll *self);

int Fl_Scroll_xposition(const Fl_Scroll *self);

int Fl_Scroll_yposition(const Fl_Scroll *self);

void Fl_Scroll_scroll_to(Fl_Scroll *self, int, int);

int Fl_Scroll_scrollbar_size(const Fl_Scroll *self);

void Fl_Scroll_set_scrollbar_size(Fl_Scroll *self, int newSize);

void Fl_Scroll_begin(Fl_Scroll *self); void Fl_Scroll_end(Fl_Scroll *self); int Fl_Scroll_find(Fl_Scroll *self, const void *); void Fl_Scroll_add(Fl_Scroll *self, void *); void Fl_Scroll_insert(Fl_Scroll *self, void *, int pos); void Fl_Scroll_remove(Fl_Scroll *self, void *wid); void Fl_Scroll_remove_by_index(Fl_Scroll *self, int idx); void Fl_Scroll_clear(Fl_Scroll *self); int Fl_Scroll_children(Fl_Scroll *self); Fl_Widget *Fl_Scroll_child(Fl_Scroll *, int index); void Fl_Scroll_resizable(Fl_Scroll *self, void *); void Fl_Scroll_set_clip_children(Fl_Scroll *self, int c); int Fl_Scroll_clip_children(Fl_Scroll *self); void Fl_Scroll_init_sizes(Fl_Scroll *self); void Fl_Scroll_draw_child(const Fl_Scroll *self, Fl_Widget *w); void Fl_Scroll_update_child(const Fl_Scroll *self, Fl_Widget *w); void Fl_Scroll_draw_outside_label(const Fl_Scroll *self, const Fl_Widget *w); void Fl_Scroll_draw_children(Fl_Scroll *self);

typedef struct Fl_Tabs Fl_Tabs; Fl_Tabs *Fl_Tabs_new( int x, int y, int width, int height, const char *title ); int Fl_Tabs_x(Fl_Tabs *); int Fl_Tabs_y(Fl_Tabs *); int Fl_Tabs_width(Fl_Tabs *); int Fl_Tabs_height(Fl_Tabs *); const char *Fl_Tabs_label(Fl_Tabs *); void Fl_Tabs_set_label(Fl_Tabs *, const char *title); void Fl_Tabs_redraw(Fl_Tabs *); void Fl_Tabs_show(Fl_Tabs *); void Fl_Tabs_hide(Fl_Tabs *); void Fl_Tabs_activate(Fl_Tabs *); void Fl_Tabs_deactivate(Fl_Tabs *); void Fl_Tabs_redraw_label(Fl_Tabs *); void Fl_Tabs_resize(Fl_Tabs *, int x, int y, int width, int height); void Fl_Tabs_widget_resize( Fl_Tabs *, int x, int y, int width, int height ); const char *Fl_Tabs_tooltip(Fl_Tabs *); void Fl_Tabs_set_tooltip(Fl_Tabs *, const char *txt); int Fl_Tabs_get_type(Fl_Tabs *); void Fl_Tabs_set_type(Fl_Tabs *, int typ); unsigned int Fl_Tabs_color(Fl_Tabs *); void Fl_Tabs_set_color(Fl_Tabs *, unsigned int color); void Fl_Tabs_measure_label(const Fl_Tabs *, int *, int *); unsigned int Fl_Tabs_label_color(Fl_Tabs *); void Fl_Tabs_set_label_color(Fl_Tabs *, unsigned int color); int Fl_Tabs_label_font(Fl_Tabs *); void Fl_Tabs_set_label_font(Fl_Tabs *, int font); int Fl_Tabs_label_size(Fl_Tabs *); void Fl_Tabs_set_label_size(Fl_Tabs *, int sz); int Fl_Tabs_label_type(Fl_Tabs *); void Fl_Tabs_set_label_type(Fl_Tabs *, int typ); int Fl_Tabs_box(Fl_Tabs *); void Fl_Tabs_set_box(Fl_Tabs *, int typ); int Fl_Tabs_changed(Fl_Tabs *); void Fl_Tabs_set_changed(Fl_Tabs *); void Fl_Tabs_clear_changed(Fl_Tabs *); int Fl_Tabs_align(Fl_Tabs *); void Fl_Tabs_set_align(Fl_Tabs *, int typ); void Fl_Tabs_delete(Fl_Tabs *); void Fl_Tabs_set_image(Fl_Tabs *, void *); void Fl_Tabs_handle( Fl_Tabs *self, custom_handler_callback cb, void *data ); int Fl_Tabs_handle_event(Fl_Tabs *self, int event); void Fl_Tabs_draw(Fl_Tabs *self, custom_draw_callback cb, void *data); void Fl_Tabs_resize_callback( Fl_Tabs *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Tabs_set_when(Fl_Tabs *, int); int Fl_Tabs_when(const Fl_Tabs *); const void *Fl_Tabs_image(const Fl_Tabs *); void *Fl_Tabs_parent(const Fl_Tabs *self); unsigned int Fl_Tabs_selection_color(Fl_Tabs *); void Fl_Tabs_set_selection_color(Fl_Tabs *, unsigned int color); void Fl_Tabs_do_callback(Fl_Tabs *); int Fl_Tabs_inside(const Fl_Tabs *self, void *); void *Fl_Tabs_window(const Fl_Tabs *); void *Fl_Tabs_top_window(const Fl_Tabs *); int Fl_Tabs_takes_events(const Fl_Tabs *); void *Fl_Tabs_user_data(const Fl_Tabs *); int Fl_Tabs_take_focus(Fl_Tabs *self); void Fl_Tabs_set_visible_focus(Fl_Tabs *self); void Fl_Tabs_clear_visible_focus(Fl_Tabs *self); void Fl_Tabs_visible_focus(Fl_Tabs *self, int v); unsigned int Fl_Tabs_has_visible_focus(Fl_Tabs *self); void Fl_Tabs_set_user_data(Fl_Tabs *, void *data); void *Fl_Tabs_draw_data(const Fl_Tabs *self); void *Fl_Tabs_handle_data(const Fl_Tabs *self); void Fl_Tabs_set_draw_data(Fl_Tabs *self, void *data); void Fl_Tabs_set_handle_data(Fl_Tabs *self, void *data); unsigned char Fl_Tabs_damage(const Fl_Tabs *self); void Fl_Tabs_set_damage(Fl_Tabs *self, unsigned char flag); void Fl_Tabs_set_damage_area( Fl_Tabs *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Tabs_clear_damage(Fl_Tabs *self); void *Fl_Tabs_as_window(Fl_Tabs *self); void *Fl_Tabs_as_group(Fl_Tabs *self); void Fl_Tabs_set_deimage(Fl_Tabs *, void *); const void *Fl_Tabs_deimage(const Fl_Tabs *); void Fl_Tabs_set_callback(Fl_Tabs *, Fl_Callback *, void *); int Fl_Tabs_visible(const Fl_Tabs *self); int Fl_Tabs_visible_r(const Fl_Tabs *self); unsigned int Fl_Tabs_active(const Fl_Tabs *self); int Fl_Tabs_active_r(const Fl_Tabs *self); Fl_Callback *Fl_Tabs_callback(const Fl_Tabs *self); void Fl_Tabs_set_deletion_callback( Fl_Tabs *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Tabs *Fl_Tabs_from_dyn_ptr(Fl_Widget *ptr); Fl_Tabs *Fl_Tabs_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Tabs_super_draw(Fl_Widget *ptr, int flag); void Fl_Tabs_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Tabs_super_handle_first(Fl_Widget *ptr, int flag);

Fl_Widget *Fl_Tabs_value(Fl_Tabs *self);

int Fl_Tabs_set_value(Fl_Tabs *self, Fl_Widget *w);

Fl_Widget *Fl_Tabs_push(const Fl_Tabs *self);

int Fl_Tabs_set_push(Fl_Tabs *self, Fl_Widget *w);

void Fl_Tabs_client_area(Fl_Tabs *self, int *rx, int *ry, int *rw, int *rh);

void Fl_Tabs_set_tab_align(Fl_Tabs *self, int a);

int Fl_Tabs_tab_align(const Fl_Tabs *self);

void Fl_Tabs_handle_overflow(Fl_Tabs *self, int ov);

void Fl_Tabs_begin(Fl_Tabs *self); void Fl_Tabs_end(Fl_Tabs *self); int Fl_Tabs_find(Fl_Tabs *self, const void *); void Fl_Tabs_add(Fl_Tabs *self, void *); void Fl_Tabs_insert(Fl_Tabs *self, void *, int pos); void Fl_Tabs_remove(Fl_Tabs *self, void *wid); void Fl_Tabs_remove_by_index(Fl_Tabs *self, int idx); void Fl_Tabs_clear(Fl_Tabs *self); int Fl_Tabs_children(Fl_Tabs *self); Fl_Widget *Fl_Tabs_child(Fl_Tabs *, int index); void Fl_Tabs_resizable(Fl_Tabs *self, void *); void Fl_Tabs_set_clip_children(Fl_Tabs *self, int c); int Fl_Tabs_clip_children(Fl_Tabs *self); void Fl_Tabs_init_sizes(Fl_Tabs *self); void Fl_Tabs_draw_child(const Fl_Tabs *self, Fl_Widget *w); void Fl_Tabs_update_child(const Fl_Tabs *self, Fl_Widget *w); void Fl_Tabs_draw_outside_label(const Fl_Tabs *self, const Fl_Widget *w); void Fl_Tabs_draw_children(Fl_Tabs *self);

typedef struct Fl_Tile Fl_Tile; Fl_Tile *Fl_Tile_new( int x, int y, int width, int height, const char *title ); int Fl_Tile_x(Fl_Tile *); int Fl_Tile_y(Fl_Tile *); int Fl_Tile_width(Fl_Tile *); int Fl_Tile_height(Fl_Tile *); const char *Fl_Tile_label(Fl_Tile *); void Fl_Tile_set_label(Fl_Tile *, const char *title); void Fl_Tile_redraw(Fl_Tile *); void Fl_Tile_show(Fl_Tile *); void Fl_Tile_hide(Fl_Tile *); void Fl_Tile_activate(Fl_Tile *); void Fl_Tile_deactivate(Fl_Tile *); void Fl_Tile_redraw_label(Fl_Tile *); void Fl_Tile_resize(Fl_Tile *, int x, int y, int width, int height); void Fl_Tile_widget_resize( Fl_Tile *, int x, int y, int width, int height ); const char *Fl_Tile_tooltip(Fl_Tile *); void Fl_Tile_set_tooltip(Fl_Tile *, const char *txt); int Fl_Tile_get_type(Fl_Tile *); void Fl_Tile_set_type(Fl_Tile *, int typ); unsigned int Fl_Tile_color(Fl_Tile *); void Fl_Tile_set_color(Fl_Tile *, unsigned int color); void Fl_Tile_measure_label(const Fl_Tile *, int *, int *); unsigned int Fl_Tile_label_color(Fl_Tile *); void Fl_Tile_set_label_color(Fl_Tile *, unsigned int color); int Fl_Tile_label_font(Fl_Tile *); void Fl_Tile_set_label_font(Fl_Tile *, int font); int Fl_Tile_label_size(Fl_Tile *); void Fl_Tile_set_label_size(Fl_Tile *, int sz); int Fl_Tile_label_type(Fl_Tile *); void Fl_Tile_set_label_type(Fl_Tile *, int typ); int Fl_Tile_box(Fl_Tile *); void Fl_Tile_set_box(Fl_Tile *, int typ); int Fl_Tile_changed(Fl_Tile *); void Fl_Tile_set_changed(Fl_Tile *); void Fl_Tile_clear_changed(Fl_Tile *); int Fl_Tile_align(Fl_Tile *); void Fl_Tile_set_align(Fl_Tile *, int typ); void Fl_Tile_delete(Fl_Tile *); void Fl_Tile_set_image(Fl_Tile *, void *); void Fl_Tile_handle( Fl_Tile *self, custom_handler_callback cb, void *data ); int Fl_Tile_handle_event(Fl_Tile *self, int event); void Fl_Tile_draw(Fl_Tile *self, custom_draw_callback cb, void *data); void Fl_Tile_resize_callback( Fl_Tile *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Tile_set_when(Fl_Tile *, int); int Fl_Tile_when(const Fl_Tile *); const void *Fl_Tile_image(const Fl_Tile *); void *Fl_Tile_parent(const Fl_Tile *self); unsigned int Fl_Tile_selection_color(Fl_Tile *); void Fl_Tile_set_selection_color(Fl_Tile *, unsigned int color); void Fl_Tile_do_callback(Fl_Tile *); int Fl_Tile_inside(const Fl_Tile *self, void *); void *Fl_Tile_window(const Fl_Tile *); void *Fl_Tile_top_window(const Fl_Tile *); int Fl_Tile_takes_events(const Fl_Tile *); void *Fl_Tile_user_data(const Fl_Tile *); int Fl_Tile_take_focus(Fl_Tile *self); void Fl_Tile_set_visible_focus(Fl_Tile *self); void Fl_Tile_clear_visible_focus(Fl_Tile *self); void Fl_Tile_visible_focus(Fl_Tile *self, int v); unsigned int Fl_Tile_has_visible_focus(Fl_Tile *self); void Fl_Tile_set_user_data(Fl_Tile *, void *data); void *Fl_Tile_draw_data(const Fl_Tile *self); void *Fl_Tile_handle_data(const Fl_Tile *self); void Fl_Tile_set_draw_data(Fl_Tile *self, void *data); void Fl_Tile_set_handle_data(Fl_Tile *self, void *data); unsigned char Fl_Tile_damage(const Fl_Tile *self); void Fl_Tile_set_damage(Fl_Tile *self, unsigned char flag); void Fl_Tile_set_damage_area( Fl_Tile *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Tile_clear_damage(Fl_Tile *self); void *Fl_Tile_as_window(Fl_Tile *self); void *Fl_Tile_as_group(Fl_Tile *self); void Fl_Tile_set_deimage(Fl_Tile *, void *); const void *Fl_Tile_deimage(const Fl_Tile *); void Fl_Tile_set_callback(Fl_Tile *, Fl_Callback *, void *); int Fl_Tile_visible(const Fl_Tile *self); int Fl_Tile_visible_r(const Fl_Tile *self); unsigned int Fl_Tile_active(const Fl_Tile *self); int Fl_Tile_active_r(const Fl_Tile *self); Fl_Callback *Fl_Tile_callback(const Fl_Tile *self); void Fl_Tile_set_deletion_callback( Fl_Tile *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Tile *Fl_Tile_from_dyn_ptr(Fl_Widget *ptr); Fl_Tile *Fl_Tile_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Tile_super_draw(Fl_Widget *ptr, int flag); void Fl_Tile_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Tile_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Tile_move_intersection(Fl_Tile *self, int oldx, int oldy, int newx, int newy);

void Fl_Tile_size_range_by_index(Fl_Tile *self, int index, int minw, int minh, int maxw, int maxh);

void Fl_Tile_size_range_by_child(Fl_Tile *self, Fl_Widget *w , int minw, int minh, int maxw, int maxh);

void Fl_Tile_begin(Fl_Tile *self); void Fl_Tile_end(Fl_Tile *self); int Fl_Tile_find(Fl_Tile *self, const void *); void Fl_Tile_add(Fl_Tile *self, void *); void Fl_Tile_insert(Fl_Tile *self, void *, int pos); void Fl_Tile_remove(Fl_Tile *self, void *wid); void Fl_Tile_remove_by_index(Fl_Tile *self, int idx); void Fl_Tile_clear(Fl_Tile *self); int Fl_Tile_children(Fl_Tile *self); Fl_Widget *Fl_Tile_child(Fl_Tile *, int index); void Fl_Tile_resizable(Fl_Tile *self, void *); void Fl_Tile_set_clip_children(Fl_Tile *self, int c); int Fl_Tile_clip_children(Fl_Tile *self); void Fl_Tile_init_sizes(Fl_Tile *self); void Fl_Tile_draw_child(const Fl_Tile *self, Fl_Widget *w); void Fl_Tile_update_child(const Fl_Tile *self, Fl_Widget *w); void Fl_Tile_draw_outside_label(const Fl_Tile *self, const Fl_Widget *w); void Fl_Tile_draw_children(Fl_Tile *self);

void Fl_Color_Chooser_begin(Fl_Color_Chooser *self); void Fl_Color_Chooser_end(Fl_Color_Chooser *self); int Fl_Color_Chooser_find(Fl_Color_Chooser *self, const void *); void Fl_Color_Chooser_add(Fl_Color_Chooser *self, void *); void Fl_Color_Chooser_insert(Fl_Color_Chooser *self, void *, int pos); void Fl_Color_Chooser_remove(Fl_Color_Chooser *self, void *wid); void Fl_Color_Chooser_remove_by_index(Fl_Color_Chooser *self, int idx); void Fl_Color_Chooser_clear(Fl_Color_Chooser *self); int Fl_Color_Chooser_children(Fl_Color_Chooser *self); Fl_Widget *Fl_Color_Chooser_child(Fl_Color_Chooser *, int index); void Fl_Color_Chooser_resizable(Fl_Color_Chooser *self, void *); void Fl_Color_Chooser_set_clip_children(Fl_Color_Chooser *self, int c); int Fl_Color_Chooser_clip_children(Fl_Color_Chooser *self); void Fl_Color_Chooser_init_sizes(Fl_Color_Chooser *self); void Fl_Color_Chooser_draw_child(const Fl_Color_Chooser *self, Fl_Widget *w); void Fl_Color_Chooser_update_child(const Fl_Color_Chooser *self, Fl_Widget *w); void Fl_Color_Chooser_draw_outside_label(const Fl_Color_Chooser *self, const Fl_Widget *w); void Fl_Color_Chooser_draw_children(Fl_Color_Chooser *self);

typedef struct Fl_Flex Fl_Flex; Fl_Flex *Fl_Flex_new( int x, int y, int width, int height, const char *title ); int Fl_Flex_x(Fl_Flex *); int Fl_Flex_y(Fl_Flex *); int Fl_Flex_width(Fl_Flex *); int Fl_Flex_height(Fl_Flex *); const char *Fl_Flex_label(Fl_Flex *); void Fl_Flex_set_label(Fl_Flex *, const char *title); void Fl_Flex_redraw(Fl_Flex *); void Fl_Flex_show(Fl_Flex *); void Fl_Flex_hide(Fl_Flex *); void Fl_Flex_activate(Fl_Flex *); void Fl_Flex_deactivate(Fl_Flex *); void Fl_Flex_redraw_label(Fl_Flex *); void Fl_Flex_resize(Fl_Flex *, int x, int y, int width, int height); void Fl_Flex_widget_resize( Fl_Flex *, int x, int y, int width, int height ); const char *Fl_Flex_tooltip(Fl_Flex *); void Fl_Flex_set_tooltip(Fl_Flex *, const char *txt); int Fl_Flex_get_type(Fl_Flex *); void Fl_Flex_set_type(Fl_Flex *, int typ); unsigned int Fl_Flex_color(Fl_Flex *); void Fl_Flex_set_color(Fl_Flex *, unsigned int color); void Fl_Flex_measure_label(const Fl_Flex *, int *, int *); unsigned int Fl_Flex_label_color(Fl_Flex *); void Fl_Flex_set_label_color(Fl_Flex *, unsigned int color); int Fl_Flex_label_font(Fl_Flex *); void Fl_Flex_set_label_font(Fl_Flex *, int font); int Fl_Flex_label_size(Fl_Flex *); void Fl_Flex_set_label_size(Fl_Flex *, int sz); int Fl_Flex_label_type(Fl_Flex *); void Fl_Flex_set_label_type(Fl_Flex *, int typ); int Fl_Flex_box(Fl_Flex *); void Fl_Flex_set_box(Fl_Flex *, int typ); int Fl_Flex_changed(Fl_Flex *); void Fl_Flex_set_changed(Fl_Flex *); void Fl_Flex_clear_changed(Fl_Flex *); int Fl_Flex_align(Fl_Flex *); void Fl_Flex_set_align(Fl_Flex *, int typ); void Fl_Flex_delete(Fl_Flex *); void Fl_Flex_set_image(Fl_Flex *, void *); void Fl_Flex_handle( Fl_Flex *self, custom_handler_callback cb, void *data ); int Fl_Flex_handle_event(Fl_Flex *self, int event); void Fl_Flex_draw(Fl_Flex *self, custom_draw_callback cb, void *data); void Fl_Flex_resize_callback( Fl_Flex *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Flex_set_when(Fl_Flex *, int); int Fl_Flex_when(const Fl_Flex *); const void *Fl_Flex_image(const Fl_Flex *); void *Fl_Flex_parent(const Fl_Flex *self); unsigned int Fl_Flex_selection_color(Fl_Flex *); void Fl_Flex_set_selection_color(Fl_Flex *, unsigned int color); void Fl_Flex_do_callback(Fl_Flex *); int Fl_Flex_inside(const Fl_Flex *self, void *); void *Fl_Flex_window(const Fl_Flex *); void *Fl_Flex_top_window(const Fl_Flex *); int Fl_Flex_takes_events(const Fl_Flex *); void *Fl_Flex_user_data(const Fl_Flex *); int Fl_Flex_take_focus(Fl_Flex *self); void Fl_Flex_set_visible_focus(Fl_Flex *self); void Fl_Flex_clear_visible_focus(Fl_Flex *self); void Fl_Flex_visible_focus(Fl_Flex *self, int v); unsigned int Fl_Flex_has_visible_focus(Fl_Flex *self); void Fl_Flex_set_user_data(Fl_Flex *, void *data); void *Fl_Flex_draw_data(const Fl_Flex *self); void *Fl_Flex_handle_data(const Fl_Flex *self); void Fl_Flex_set_draw_data(Fl_Flex *self, void *data); void Fl_Flex_set_handle_data(Fl_Flex *self, void *data); unsigned char Fl_Flex_damage(const Fl_Flex *self); void Fl_Flex_set_damage(Fl_Flex *self, unsigned char flag); void Fl_Flex_set_damage_area( Fl_Flex *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Flex_clear_damage(Fl_Flex *self); void *Fl_Flex_as_window(Fl_Flex *self); void *Fl_Flex_as_group(Fl_Flex *self); void Fl_Flex_set_deimage(Fl_Flex *, void *); const void *Fl_Flex_deimage(const Fl_Flex *); void Fl_Flex_set_callback(Fl_Flex *, Fl_Callback *, void *); int Fl_Flex_visible(const Fl_Flex *self); int Fl_Flex_visible_r(const Fl_Flex *self); unsigned int Fl_Flex_active(const Fl_Flex *self); int Fl_Flex_active_r(const Fl_Flex *self); Fl_Callback *Fl_Flex_callback(const Fl_Flex *self); void Fl_Flex_set_deletion_callback( Fl_Flex *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Flex *Fl_Flex_from_dyn_ptr(Fl_Widget *ptr); Fl_Flex *Fl_Flex_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Flex_super_draw(Fl_Widget *ptr, int flag); void Fl_Flex_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Flex_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Flex_set_size(Fl_Flex *self, Fl_Widget *w, int size);

void Fl_Flex_set_margin(Fl_Flex *self, int m);

int Fl_Flex_margin(const Fl_Flex *self);

void Fl_Flex_set_pad(Fl_Flex *self, int p);

int Fl_Flex_pad(const Fl_Flex *self);

void Fl_Flex_set_margins(Fl_Flex *self, int x1, int y1, int x2, int y2);

int Fl_Flex_margins(const Fl_Flex *self, int *x1, int *y1, int *x2, int *y2);

void Fl_Flex_begin(Fl_Flex *self); void Fl_Flex_end(Fl_Flex *self); int Fl_Flex_find(Fl_Flex *self, const void *); void Fl_Flex_add(Fl_Flex *self, void *); void Fl_Flex_insert(Fl_Flex *self, void *, int pos); void Fl_Flex_remove(Fl_Flex *self, void *wid); void Fl_Flex_remove_by_index(Fl_Flex *self, int idx); void Fl_Flex_clear(Fl_Flex *self); int Fl_Flex_children(Fl_Flex *self); Fl_Widget *Fl_Flex_child(Fl_Flex *, int index); void Fl_Flex_resizable(Fl_Flex *self, void *); void Fl_Flex_set_clip_children(Fl_Flex *self, int c); int Fl_Flex_clip_children(Fl_Flex *self); void Fl_Flex_init_sizes(Fl_Flex *self); void Fl_Flex_draw_child(const Fl_Flex *self, Fl_Widget *w); void Fl_Flex_update_child(const Fl_Flex *self, Fl_Widget *w); void Fl_Flex_draw_outside_label(const Fl_Flex *self, const Fl_Widget *w); void Fl_Flex_draw_children(Fl_Flex *self);

typedef struct Fl_Grid Fl_Grid; Fl_Grid *Fl_Grid_new( int x, int y, int width, int height, const char *title ); int Fl_Grid_x(Fl_Grid *); int Fl_Grid_y(Fl_Grid *); int Fl_Grid_width(Fl_Grid *); int Fl_Grid_height(Fl_Grid *); const char *Fl_Grid_label(Fl_Grid *); void Fl_Grid_set_label(Fl_Grid *, const char *title); void Fl_Grid_redraw(Fl_Grid *); void Fl_Grid_show(Fl_Grid *); void Fl_Grid_hide(Fl_Grid *); void Fl_Grid_activate(Fl_Grid *); void Fl_Grid_deactivate(Fl_Grid *); void Fl_Grid_redraw_label(Fl_Grid *); void Fl_Grid_resize(Fl_Grid *, int x, int y, int width, int height); void Fl_Grid_widget_resize( Fl_Grid *, int x, int y, int width, int height ); const char *Fl_Grid_tooltip(Fl_Grid *); void Fl_Grid_set_tooltip(Fl_Grid *, const char *txt); int Fl_Grid_get_type(Fl_Grid *); void Fl_Grid_set_type(Fl_Grid *, int typ); unsigned int Fl_Grid_color(Fl_Grid *); void Fl_Grid_set_color(Fl_Grid *, unsigned int color); void Fl_Grid_measure_label(const Fl_Grid *, int *, int *); unsigned int Fl_Grid_label_color(Fl_Grid *); void Fl_Grid_set_label_color(Fl_Grid *, unsigned int color); int Fl_Grid_label_font(Fl_Grid *); void Fl_Grid_set_label_font(Fl_Grid *, int font); int Fl_Grid_label_size(Fl_Grid *); void Fl_Grid_set_label_size(Fl_Grid *, int sz); int Fl_Grid_label_type(Fl_Grid *); void Fl_Grid_set_label_type(Fl_Grid *, int typ); int Fl_Grid_box(Fl_Grid *); void Fl_Grid_set_box(Fl_Grid *, int typ); int Fl_Grid_changed(Fl_Grid *); void Fl_Grid_set_changed(Fl_Grid *); void Fl_Grid_clear_changed(Fl_Grid *); int Fl_Grid_align(Fl_Grid *); void Fl_Grid_set_align(Fl_Grid *, int typ); void Fl_Grid_delete(Fl_Grid *); void Fl_Grid_set_image(Fl_Grid *, void *); void Fl_Grid_handle( Fl_Grid *self, custom_handler_callback cb, void *data ); int Fl_Grid_handle_event(Fl_Grid *self, int event); void Fl_Grid_draw(Fl_Grid *self, custom_draw_callback cb, void *data); void Fl_Grid_resize_callback( Fl_Grid *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Grid_set_when(Fl_Grid *, int); int Fl_Grid_when(const Fl_Grid *); const void *Fl_Grid_image(const Fl_Grid *); void *Fl_Grid_parent(const Fl_Grid *self); unsigned int Fl_Grid_selection_color(Fl_Grid *); void Fl_Grid_set_selection_color(Fl_Grid *, unsigned int color); void Fl_Grid_do_callback(Fl_Grid *); int Fl_Grid_inside(const Fl_Grid *self, void *); void *Fl_Grid_window(const Fl_Grid *); void *Fl_Grid_top_window(const Fl_Grid *); int Fl_Grid_takes_events(const Fl_Grid *); void *Fl_Grid_user_data(const Fl_Grid *); int Fl_Grid_take_focus(Fl_Grid *self); void Fl_Grid_set_visible_focus(Fl_Grid *self); void Fl_Grid_clear_visible_focus(Fl_Grid *self); void Fl_Grid_visible_focus(Fl_Grid *self, int v); unsigned int Fl_Grid_has_visible_focus(Fl_Grid *self); void Fl_Grid_set_user_data(Fl_Grid *, void *data); void *Fl_Grid_draw_data(const Fl_Grid *self); void *Fl_Grid_handle_data(const Fl_Grid *self); void Fl_Grid_set_draw_data(Fl_Grid *self, void *data); void Fl_Grid_set_handle_data(Fl_Grid *self, void *data); unsigned char Fl_Grid_damage(const Fl_Grid *self); void Fl_Grid_set_damage(Fl_Grid *self, unsigned char flag); void Fl_Grid_set_damage_area( Fl_Grid *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Grid_clear_damage(Fl_Grid *self); void *Fl_Grid_as_window(Fl_Grid *self); void *Fl_Grid_as_group(Fl_Grid *self); void Fl_Grid_set_deimage(Fl_Grid *, void *); const void *Fl_Grid_deimage(const Fl_Grid *); void Fl_Grid_set_callback(Fl_Grid *, Fl_Callback *, void *); int Fl_Grid_visible(const Fl_Grid *self); int Fl_Grid_visible_r(const Fl_Grid *self); unsigned int Fl_Grid_active(const Fl_Grid *self); int Fl_Grid_active_r(const Fl_Grid *self); Fl_Callback *Fl_Grid_callback(const Fl_Grid *self); void Fl_Grid_set_deletion_callback( Fl_Grid *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Grid *Fl_Grid_from_dyn_ptr(Fl_Widget *ptr); Fl_Grid *Fl_Grid_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Grid_super_draw(Fl_Widget *ptr, int flag); void Fl_Grid_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Grid_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Grid_set_layout(Fl_Grid *self, int rows, int cols, int margin, int gap);

void Fl_Grid_layout(Fl_Grid *self);

void Fl_Grid_clear_layout(Fl_Grid *self);

void Fl_Grid_set_need_layout(Fl_Grid *self, int set);

int Fl_Grid_need_layout(const Fl_Grid *self);

void Fl_Grid_set_margin(
    Fl_Grid *self, int left, int top, int right, int bottom
);

void Fl_Grid_set_gap(Fl_Grid *self, int row_gap, int col_gap);

void *Fl_Grid_set_widget(
    Fl_Grid *self, Fl_Widget *wi, int row, int col, unsigned short align
);

void *Fl_Grid_set_widget_ext(
    Fl_Grid *self,
    Fl_Widget *wi,
    int row,
    int col,
    int rowspan,
    int colspan,
    unsigned short align
);

void Fl_Grid_set_col_width(Fl_Grid *self, int col, int value);

void Fl_Grid_set_col_weight(Fl_Grid *self, int col, int value);

void Fl_Grid_set_col_gap(Fl_Grid *self, int col, int value);

void Fl_Grid_set_row_height(Fl_Grid *self, int row, int value);

void Fl_Grid_set_row_weight(Fl_Grid *self, int row, int value);

void Fl_Grid_set_row_gap(Fl_Grid *self, int row, int value);

void Fl_Grid_show_grid(Fl_Grid *self, int set);

void Fl_Grid_show_grid_with_color(Fl_Grid *self, int set, unsigned int col);

void Fl_Grid_debug(Fl_Grid *self, int level);

void Fl_Grid_begin(Fl_Grid *self); void Fl_Grid_end(Fl_Grid *self); int Fl_Grid_find(Fl_Grid *self, const void *); void Fl_Grid_add(Fl_Grid *self, void *); void Fl_Grid_insert(Fl_Grid *self, void *, int pos); void Fl_Grid_remove(Fl_Grid *self, void *wid); void Fl_Grid_remove_by_index(Fl_Grid *self, int idx); void Fl_Grid_clear(Fl_Grid *self); int Fl_Grid_children(Fl_Grid *self); Fl_Widget *Fl_Grid_child(Fl_Grid *, int index); void Fl_Grid_resizable(Fl_Grid *self, void *); void Fl_Grid_set_clip_children(Fl_Grid *self, int c); int Fl_Grid_clip_children(Fl_Grid *self); void Fl_Grid_init_sizes(Fl_Grid *self); void Fl_Grid_draw_child(const Fl_Grid *self, Fl_Widget *w); void Fl_Grid_update_child(const Fl_Grid *self, Fl_Widget *w); void Fl_Grid_draw_outside_label(const Fl_Grid *self, const Fl_Widget *w); void Fl_Grid_draw_children(Fl_Grid *self);
typedef struct Fl_Widget Fl_Widget;

typedef struct Fl_Widget_Tracker Fl_Widget_Tracker;

typedef void (*Fl_Awake_Handler)(void *data);

int Fl_run(void);

int Fl_check(void);

int Fl_ready(void);

void Fl_release(void);

int Fl_reload_scheme(void);

int Fl_menu_linespacing(void);

void Fl_set_menu_linespacing(int H);

int Fl_awake_callback(Fl_Awake_Handler handler, void *data);

void Fl_set_scrollbar_size(int);

int Fl_scrollbar_size(void);

int Fl_event(void);

int Fl_event_key(void);

int Fl_event_original_key(void);

int Fl_event_key_down(int);

const char *Fl_event_text(void);

int Fl_event_button(void);

int Fl_event_clicks(void);

int Fl_event_x(void);

int Fl_event_y(void);

int Fl_event_x_root(void);

int Fl_event_y_root(void);

int Fl_event_dx(void);

int Fl_event_dy(void);

int Fl_event_is_click(void);

int Fl_event_length(void);

int Fl_event_state(void);

int Fl_w(void);

int Fl_h(void);

int Fl_screen_x(void);

int Fl_screen_y(void);

int Fl_screen_h(void);

int Fl_screen_w(void);

int Fl_compose(int *del);

void Fl_compose_reset(void);

int Fl_compose_state(void);

void Fl_copy(const char *stuff, int len, int destination);

void Fl_paste_text(Fl_Widget *, int src);

void Fl_paste_image(Fl_Widget *widget, int src);

int Fl_set_scheme(const char *scheme);

int Fl_scheme(void);

const char *Fl_scheme_string(void);

int Fl_visible_focus(void);

void Fl_set_visible_focus(int);

void Fl_set_box_type(int, int);

int Fl_box_shadow_width(void);

void Fl_set_box_shadow_width(int W);

int Fl_box_border_radius_max(void);

void Fl_set_box_border_radius_max(int R);

unsigned int
Fl_get_rgb_color(unsigned char r, unsigned char g, unsigned char b);

void Fl_set_color(
    unsigned int c, unsigned char r, unsigned char g, unsigned char b
);

void Fl_set_color_with_alpha(
    unsigned int c,
    unsigned char r,
    unsigned char g,
    unsigned char b,
    unsigned char a
);

const char *Fl_get_font(int idx);

const char *Fl_get_font_name(int idx);

const char *Fl_get_font_name_with_attr(int idx, int *attributes);

int Fl_get_font_sizes(int font, int **sizep);

int Fl_set_fonts(const char *c);

void Fl_set_font(int, int);

void Fl_set_font_by_name(int, const char *);

void Fl_set_font_size(int);

int Fl_font_size(void);

void Fl_add_handler(int (*ev_handler)(int ev));

void Fl_awake_msg(void *msg);

void *Fl_thread_msg(void);

void Fl_add_timeout(double t, void (*)(void *), void *);

void Fl_repeat_timeout(double t, void (*)(void *), void *);

void Fl_remove_timeout(void (*)(void *), void *);

int Fl_has_timeout(void (*)(void *), void *);

int Fl_dnd(void);

void *Fl_grab(void);

void Fl_set_grab(void *);

void *Fl_first_window(void);

void *Fl_next_window(const void *);

void *Fl_modal(void);

int Fl_should_program_quit(void);

void Fl_program_should_quit(int flag);

int Fl_event_inside(int, int, int, int);

Fl_Widget *Fl_belowmouse(void);

void Fl_set_belowmouse(Fl_Widget *w);

void Fl_delete_widget(Fl_Widget *w);

Fl_Widget_Tracker *Fl_Widget_Tracker_new(Fl_Widget *w);

int Fl_Widget_Tracker_deleted(Fl_Widget_Tracker *self);

void Fl_Widget_Tracker_delete(Fl_Widget_Tracker *self);

void Fl_init_all(void);

void Fl_redraw(void);

int Fl_event_shift(void);

int Fl_event_ctrl(void);

int Fl_event_command(void);

int Fl_event_alt(void);

void Fl_set_damage(int flag);

int Fl_damage(void);

int Fl_visual(int);

void Fl_own_colormap(void);

Fl_Widget *Fl_pushed(void);

Fl_Widget *Fl_focus(void);

void Fl_set_focus(void *);

double Fl_version(void);

int Fl_api_version(void);

int Fl_abi_version(void);

int Fl_load_font(const char *path);

void Fl_unload_font(const char *path);

void Fl_foreground(unsigned char r, unsigned char g, unsigned char b);

void Fl_background(unsigned char r, unsigned char g, unsigned char b);

void Fl_background2(unsigned char r, unsigned char g, unsigned char b);

void Fl_selection_color(unsigned char r, unsigned char g, unsigned char b);

void Fl_inactive_color(unsigned char r, unsigned char g, unsigned char b);

void Fl_get_system_colors(void);

int Fl_handle(int, void *);

int Fl_handle_(int, void *);

void Fl_add_idle(void (*)(void *), void *);

int Fl_has_idle(void (*)(void *), void *);

void Fl_remove_idle(void (*)(void *), void *);

void Fl_add_check(void (*)(void *), void *);

int Fl_has_check(void (*)(void *), void *);

void Fl_remove_check(void (*)(void *), void *);

void Fl_flush(void);

void Fl_set_screen_scale(int n, float val);

float Fl_screen_scale(int n);

int Fl_screen_scaling_supported(void);

int Fl_screen_count(void);

int Fl_screen_num(int x, int y);

int Fl_screen_num_inside(int x, int y, int w, int h);

void Fl_screen_xywh(int *X, int *Y, int *W, int *H, int n);

void Fl_screen_xywh_at(int *X, int *Y, int *W, int *H, int mx, int my);

void Fl_screen_xywh_inside(
    int *X, int *Y, int *W, int *H, int mx, int my, int mw, int mh
);

void Fl_screen_xywh_mouse(int *X, int *Y, int *W, int *H);

void Fl_screen_dpi(float *h, float *v, int n);

void Fl_screen_work_area(int *X, int *Y, int *W, int *H, int n);

void Fl_screen_work_area_at(int *X, int *Y, int *W, int *H, int mx, int my);

void Fl_screen_work_area_mouse(int *X, int *Y, int *W, int *H);

void Fl_keyboard_screen_scaling(int value);

void Fl_open_display(void);

void Fl_close_display(void);

int Fl_box_dx(int boxtype);

int Fl_box_dy(int boxtype);

int Fl_box_dw(int boxtype);

int Fl_box_dh(int boxtype);

int Fl_mac_os_version(void);

void *Fl_event_clipboard(void);

const char *Fl_event_clipboard_type(void);

int Fl_clipboard_contains(const char *type);

void Fl_event_dispatch(int (*cb)(int event, void *));

unsigned int Fl_inactive(unsigned int c);

unsigned int Fl_lighter(unsigned int c);

unsigned int Fl_darker(unsigned int c);

void Fl_set_box_type_cb(
    int, void (*cb)(int, int, int, int, unsigned int), int, int, int, int
);

int Fl_draw_box_active(void);

unsigned int Fl_gray_ramp(int i);

unsigned int Fl_color_average(unsigned int, unsigned int, float f);

unsigned int Fl_cmap(unsigned int c);

unsigned int Fl_box_color(unsigned int c);

void Fl_set_box_color(unsigned int c);

void Fl_add_system_handler(int (*)(void *, void *), void *);

void Fl_remove_system_handler(int (*)(void *, void *));

int Fl_gl_visual(int mode);

void Fl_add_clipboard_notify(void (*cb)(int source, void *data), void *data);

void Fl_remove_clipboard_notify(void (*cb)(int source, void *data));

void Fl_open_callback(void (*cb)(const char *));

void Fl_disable_wayland(void);

Fl_Widget *Fl_Widget_Tracker_widget(Fl_Widget_Tracker *t);

int Fl_Widget_Tracker_exists(Fl_Widget_Tracker *t);

void Fl_get_color_rgb(
    unsigned int col, unsigned char *r, unsigned char *g, unsigned char *b
);

int Fl_callback_reason(void);

void *Fl_get_fl_msg(void);

void *Fl_cairo_make_current(Fl_Widget *w);

void Fl_set_cairo_autolink_context(int alink);

int Fl_cairo_autolink_context(void);

void *Fl_cairo_cc(void);

void Fl_set_cairo_cc(void *c, int own);

void Fl_cairo_flush(void *c);

int Fl_option(int opt);

void Fl_set_option(int opt, int val);

void Fl_load_system_icons(void);

void Fl_set_contrast_level(int level);

int Fl_contrast_level(void);

void Fl_set_contrast_mode(int mode);

int Fl_contrast_mode(void);

void Fl_set_contrast_function(unsigned int (*f)(unsigned int, unsigned int, int, int));

int Fl_using_wayland(void);
typedef struct Fl_Image Fl_Image;
int Fl_Image_width(Fl_Image *);
int Fl_Image_height(Fl_Image *);
void Fl_Image_delete(Fl_Image *);
int Fl_Image_count(Fl_Image *self);
const char *const *Fl_Image_data(Fl_Image *self);
Fl_Image *Fl_Image_copy(Fl_Image *self);
Fl_Image *Fl_Image_copy_sized(Fl_Image *self, int W, int H);
void Fl_Image_scale( Fl_Image *self, int width, int height, int proportional, int can_expand );
int Fl_Image_fail(Fl_Image *self);
int Fl_Image_data_w(const Fl_Image *self);
int Fl_Image_data_h(const Fl_Image *self);
int Fl_Image_d(const Fl_Image *self);
int Fl_Image_ld(const Fl_Image *self);
void Fl_Image_inactive(Fl_Image *self);
Fl_Image *Fl_Image_from_dyn_ptr(Fl_Image *other);

void Fl_Image_set_scaling_algorithm(int algorithm);

int Fl_Image_scaling_algorithm(void);

void Fl_RGB_Image_set_scaling_algorithm(int algorithm);

int Fl_RGB_Image_scaling_algorithm(void);

typedef struct Fl_JPEG_Image Fl_JPEG_Image;
void Fl_JPEG_Image_draw(Fl_JPEG_Image *, int X, int Y, int W, int H);
void Fl_JPEG_Image_draw_ext( Fl_JPEG_Image *, int X, int Y, int W, int H, int cx, int cy );
int Fl_JPEG_Image_width(Fl_JPEG_Image *);
int Fl_JPEG_Image_height(Fl_JPEG_Image *);
void Fl_JPEG_Image_delete(Fl_JPEG_Image *);
int Fl_JPEG_Image_count(Fl_JPEG_Image *self);
const char *const *Fl_JPEG_Image_data(Fl_JPEG_Image *self);
Fl_JPEG_Image *Fl_JPEG_Image_copy(Fl_JPEG_Image *self);
Fl_JPEG_Image *Fl_JPEG_Image_copy_sized(Fl_JPEG_Image *self, int W, int H);
void Fl_JPEG_Image_scale( Fl_JPEG_Image *self, int width, int height, int proportional, int can_expand );
int Fl_JPEG_Image_fail(Fl_JPEG_Image *self);
int Fl_JPEG_Image_data_w(const Fl_JPEG_Image *self);
int Fl_JPEG_Image_data_h(const Fl_JPEG_Image *self);
int Fl_JPEG_Image_d(const Fl_JPEG_Image *self);
int Fl_JPEG_Image_ld(const Fl_JPEG_Image *self);
void Fl_JPEG_Image_inactive(Fl_JPEG_Image *self);
Fl_JPEG_Image *Fl_JPEG_Image_from_dyn_ptr(Fl_Image *other);

Fl_JPEG_Image *Fl_JPEG_Image_new(const char *filename);

Fl_JPEG_Image *Fl_JPEG_Image_from(const unsigned char *data);

typedef struct Fl_PNG_Image Fl_PNG_Image;
void Fl_PNG_Image_draw(Fl_PNG_Image *, int X, int Y, int W, int H);
void Fl_PNG_Image_draw_ext( Fl_PNG_Image *, int X, int Y, int W, int H, int cx, int cy );
int Fl_PNG_Image_width(Fl_PNG_Image *);
int Fl_PNG_Image_height(Fl_PNG_Image *);
void Fl_PNG_Image_delete(Fl_PNG_Image *);
int Fl_PNG_Image_count(Fl_PNG_Image *self);
const char *const *Fl_PNG_Image_data(Fl_PNG_Image *self);
Fl_PNG_Image *Fl_PNG_Image_copy(Fl_PNG_Image *self);
Fl_PNG_Image *Fl_PNG_Image_copy_sized(Fl_PNG_Image *self, int W, int H);
void Fl_PNG_Image_scale( Fl_PNG_Image *self, int width, int height, int proportional, int can_expand );
int Fl_PNG_Image_fail(Fl_PNG_Image *self);
int Fl_PNG_Image_data_w(const Fl_PNG_Image *self);
int Fl_PNG_Image_data_h(const Fl_PNG_Image *self);
int Fl_PNG_Image_d(const Fl_PNG_Image *self);
int Fl_PNG_Image_ld(const Fl_PNG_Image *self);
void Fl_PNG_Image_inactive(Fl_PNG_Image *self); Fl_PNG_Image *Fl_PNG_Image_from_dyn_ptr(Fl_Image *other);

Fl_PNG_Image *Fl_PNG_Image_new(const char *filename);

Fl_PNG_Image *Fl_PNG_Image_from(const unsigned char *data, int size);

typedef struct Fl_SVG_Image Fl_SVG_Image; void Fl_SVG_Image_draw(Fl_SVG_Image *, int X, int Y, int W, int H); void Fl_SVG_Image_draw_ext( Fl_SVG_Image *, int X, int Y, int W, int H, int cx, int cy ); int Fl_SVG_Image_width(Fl_SVG_Image *); int Fl_SVG_Image_height(Fl_SVG_Image *); void Fl_SVG_Image_delete(Fl_SVG_Image *); int Fl_SVG_Image_count(Fl_SVG_Image *self); const char *const *Fl_SVG_Image_data(Fl_SVG_Image *self); Fl_SVG_Image *Fl_SVG_Image_copy(Fl_SVG_Image *self); Fl_SVG_Image *Fl_SVG_Image_copy_sized(Fl_SVG_Image *self, int W, int H); void Fl_SVG_Image_scale( Fl_SVG_Image *self, int width, int height, int proportional, int can_expand ); int Fl_SVG_Image_fail(Fl_SVG_Image *self); int Fl_SVG_Image_data_w(const Fl_SVG_Image *self); int Fl_SVG_Image_data_h(const Fl_SVG_Image *self); int Fl_SVG_Image_d(const Fl_SVG_Image *self); int Fl_SVG_Image_ld(const Fl_SVG_Image *self); void Fl_SVG_Image_inactive(Fl_SVG_Image *self); Fl_SVG_Image *Fl_SVG_Image_from_dyn_ptr(Fl_Image *other);

Fl_SVG_Image *Fl_SVG_Image_new(const char *filename);

Fl_SVG_Image *Fl_SVG_Image_from(const char *data);

void Fl_SVG_Image_normalize(Fl_SVG_Image *self);

typedef struct Fl_BMP_Image Fl_BMP_Image;
void Fl_BMP_Image_draw(Fl_BMP_Image *, int X, int Y, int W, int H);
void Fl_BMP_Image_draw_ext( Fl_BMP_Image *, int X, int Y, int W, int H, int cx, int cy );
int Fl_BMP_Image_width(Fl_BMP_Image *);
int Fl_BMP_Image_height(Fl_BMP_Image *);
void Fl_BMP_Image_delete(Fl_BMP_Image *);
int Fl_BMP_Image_count(Fl_BMP_Image *self);
const char *const *Fl_BMP_Image_data(Fl_BMP_Image *self);
Fl_BMP_Image *Fl_BMP_Image_copy(Fl_BMP_Image *self);
Fl_BMP_Image *Fl_BMP_Image_copy_sized(Fl_BMP_Image *self, int W, int H);
void Fl_BMP_Image_scale( Fl_BMP_Image *self, int width, int height, int proportional, int can_expand );
int Fl_BMP_Image_fail(Fl_BMP_Image *self);
int Fl_BMP_Image_data_w(const Fl_BMP_Image *self);
int Fl_BMP_Image_data_h(const Fl_BMP_Image *self);
int Fl_BMP_Image_d(const Fl_BMP_Image *self);
int Fl_BMP_Image_ld(const Fl_BMP_Image *self);
void Fl_BMP_Image_inactive(Fl_BMP_Image *self);
Fl_BMP_Image *Fl_BMP_Image_from_dyn_ptr(Fl_Image *other);

typedef struct Fl_GIF_Image Fl_GIF_Image;
void Fl_GIF_Image_draw(Fl_GIF_Image *, int X, int Y, int W, int H);
void Fl_GIF_Image_draw_ext( Fl_GIF_Image *, int X, int Y, int W, int H, int cx, int cy );
int Fl_GIF_Image_width(Fl_GIF_Image *);
int Fl_GIF_Image_height(Fl_GIF_Image *);
void Fl_GIF_Image_delete(Fl_GIF_Image *);
int Fl_GIF_Image_count(Fl_GIF_Image *self);
const char *const *Fl_GIF_Image_data(Fl_GIF_Image *self);
Fl_GIF_Image *Fl_GIF_Image_copy(Fl_GIF_Image *self);
Fl_GIF_Image *Fl_GIF_Image_copy_sized(Fl_GIF_Image *self, int W, int H);
void Fl_GIF_Image_scale( Fl_GIF_Image *self, int width, int height, int proportional, int can_expand );
int Fl_GIF_Image_fail(Fl_GIF_Image *self);
int Fl_GIF_Image_data_w(const Fl_GIF_Image *self);
int Fl_GIF_Image_data_h(const Fl_GIF_Image *self);
int Fl_GIF_Image_d(const Fl_GIF_Image *self);
int Fl_GIF_Image_ld(const Fl_GIF_Image *self);
void Fl_GIF_Image_inactive(Fl_GIF_Image *self);
Fl_GIF_Image *Fl_GIF_Image_from_dyn_ptr(Fl_Image *other);

Fl_GIF_Image *Fl_GIF_Image_new(const char *filename);

Fl_GIF_Image *Fl_GIF_Image_from(const unsigned char *data, unsigned long long len);

typedef struct Fl_Anim_GIF_Image Fl_Anim_GIF_Image;
void Fl_Anim_GIF_Image_draw(Fl_Anim_GIF_Image *, int X, int Y, int W, int H);
void Fl_Anim_GIF_Image_draw_ext( Fl_Anim_GIF_Image *, int X, int Y, int W, int H, int cx, int cy );
int Fl_Anim_GIF_Image_width(Fl_Anim_GIF_Image *);
int Fl_Anim_GIF_Image_height(Fl_Anim_GIF_Image *);
void Fl_Anim_GIF_Image_delete(Fl_Anim_GIF_Image *);
int Fl_Anim_GIF_Image_count(Fl_Anim_GIF_Image *self);
const char *const *Fl_Anim_GIF_Image_data(Fl_Anim_GIF_Image *self);
Fl_Anim_GIF_Image *Fl_Anim_GIF_Image_copy(Fl_Anim_GIF_Image *self);
Fl_Anim_GIF_Image *Fl_Anim_GIF_Image_copy_sized(Fl_Anim_GIF_Image *self, int W, int H);
void Fl_Anim_GIF_Image_scale( Fl_Anim_GIF_Image *self, int width, int height, int proportional, int can_expand );
int Fl_Anim_GIF_Image_fail(Fl_Anim_GIF_Image *self);
int Fl_Anim_GIF_Image_data_w(const Fl_Anim_GIF_Image *self);
int Fl_Anim_GIF_Image_data_h(const Fl_Anim_GIF_Image *self);
int Fl_Anim_GIF_Image_d(const Fl_Anim_GIF_Image *self);
int Fl_Anim_GIF_Image_ld(const Fl_Anim_GIF_Image *self);
void Fl_Anim_GIF_Image_inactive(Fl_Anim_GIF_Image *self);
Fl_Anim_GIF_Image *Fl_Anim_GIF_Image_from_dyn_ptr(Fl_Image *other);

Fl_Anim_GIF_Image *
Fl_Anim_GIF_Image_new(const char *filename, void *canvas, unsigned short flags);

Fl_Anim_GIF_Image *Fl_Anim_GIF_Image_from(
    const char *imagename,
    const unsigned char *data,
    const unsigned long long length,
    void *canvas,
    unsigned short flags
);

double Fl_Anim_GIF_Image_delay(const Fl_Anim_GIF_Image *self, int frame_);

void Fl_Anim_GIF_Image_set_delay(
    Fl_Anim_GIF_Image *self, int frame, double delay
);

int Fl_Anim_GIF_Image_is_animated(const Fl_Anim_GIF_Image *self);

void Fl_Anim_GIF_Image_set_speed(Fl_Anim_GIF_Image *self, double speed);

double Fl_Anim_GIF_Image_speed(Fl_Anim_GIF_Image *self);

int Fl_Anim_GIF_Image_start(Fl_Anim_GIF_Image *self);

int Fl_Anim_GIF_Image_stop(Fl_Anim_GIF_Image *self);

int Fl_Anim_GIF_Image_next(Fl_Anim_GIF_Image *self);

int Fl_Anim_GIF_Image_playing(const Fl_Anim_GIF_Image *self);

typedef struct Fl_Pixmap Fl_Pixmap;
void Fl_Pixmap_draw(Fl_Pixmap *, int X, int Y, int W, int H);
void Fl_Pixmap_draw_ext( Fl_Pixmap *, int X, int Y, int W, int H, int cx, int cy );
int Fl_Pixmap_width(Fl_Pixmap *);
int Fl_Pixmap_height(Fl_Pixmap *);
void Fl_Pixmap_delete(Fl_Pixmap *);
int Fl_Pixmap_count(Fl_Pixmap *self);
const char *const *Fl_Pixmap_data(Fl_Pixmap *self);
Fl_Pixmap *Fl_Pixmap_copy(Fl_Pixmap *self);
Fl_Pixmap *Fl_Pixmap_copy_sized(Fl_Pixmap *self, int W, int H);
void Fl_Pixmap_scale( Fl_Pixmap *self, int width, int height, int proportional, int can_expand );
int Fl_Pixmap_fail(Fl_Pixmap *self);
int Fl_Pixmap_data_w(const Fl_Pixmap *self);
int Fl_Pixmap_data_h(const Fl_Pixmap *self);
int Fl_Pixmap_d(const Fl_Pixmap *self);
int Fl_Pixmap_ld(const Fl_Pixmap *self);
void Fl_Pixmap_inactive(Fl_Pixmap *self);
Fl_Pixmap *Fl_Pixmap_from_dyn_ptr(Fl_Image *other);

Fl_Pixmap *Fl_Pixmap_new(const char *const *D);

typedef struct Fl_XPM_Image Fl_XPM_Image;
void Fl_XPM_Image_draw(Fl_XPM_Image *, int X, int Y, int W, int H);
void Fl_XPM_Image_draw_ext( Fl_XPM_Image *, int X, int Y, int W, int H, int cx, int cy );
int Fl_XPM_Image_width(Fl_XPM_Image *);
int Fl_XPM_Image_height(Fl_XPM_Image *);
void Fl_XPM_Image_delete(Fl_XPM_Image *);
int Fl_XPM_Image_count(Fl_XPM_Image *self);
const char *const *Fl_XPM_Image_data(Fl_XPM_Image *self);
Fl_XPM_Image *Fl_XPM_Image_copy(Fl_XPM_Image *self);
Fl_XPM_Image *Fl_XPM_Image_copy_sized(Fl_XPM_Image *self, int W, int H);
void Fl_XPM_Image_scale( Fl_XPM_Image *self, int width, int height, int proportional, int can_expand );
int Fl_XPM_Image_fail(Fl_XPM_Image *self);
int Fl_XPM_Image_data_w(const Fl_XPM_Image *self);
int Fl_XPM_Image_data_h(const Fl_XPM_Image *self);
int Fl_XPM_Image_d(const Fl_XPM_Image *self);
int Fl_XPM_Image_ld(const Fl_XPM_Image *self);
void Fl_XPM_Image_inactive(Fl_XPM_Image *self);
Fl_XPM_Image *Fl_XPM_Image_from_dyn_ptr(Fl_Image *other);

Fl_XPM_Image *Fl_XPM_Image_new(const char *filename);

typedef struct Fl_XBM_Image Fl_XBM_Image;
void Fl_XBM_Image_draw(Fl_XBM_Image *, int X, int Y, int W, int H);
void Fl_XBM_Image_draw_ext( Fl_XBM_Image *, int X, int Y, int W, int H, int cx, int cy );
int Fl_XBM_Image_width(Fl_XBM_Image *);
int Fl_XBM_Image_height(Fl_XBM_Image *); void Fl_XBM_Image_delete(Fl_XBM_Image *); int Fl_XBM_Image_count(Fl_XBM_Image *self); const char *const *Fl_XBM_Image_data(Fl_XBM_Image *self); Fl_XBM_Image *Fl_XBM_Image_copy(Fl_XBM_Image *self); Fl_XBM_Image *Fl_XBM_Image_copy_sized(Fl_XBM_Image *self, int W, int H); void Fl_XBM_Image_scale( Fl_XBM_Image *self, int width, int height, int proportional, int can_expand ); int Fl_XBM_Image_fail(Fl_XBM_Image *self); int Fl_XBM_Image_data_w(const Fl_XBM_Image *self); int Fl_XBM_Image_data_h(const Fl_XBM_Image *self); int Fl_XBM_Image_d(const Fl_XBM_Image *self); int Fl_XBM_Image_ld(const Fl_XBM_Image *self); void Fl_XBM_Image_inactive(Fl_XBM_Image *self); Fl_XBM_Image *Fl_XBM_Image_from_dyn_ptr(Fl_Image *other);

Fl_XBM_Image *Fl_XBM_Image_new(const char *filename);

typedef struct Fl_PNM_Image Fl_PNM_Image; void Fl_PNM_Image_draw(Fl_PNM_Image *, int X, int Y, int W, int H); void Fl_PNM_Image_draw_ext( Fl_PNM_Image *, int X, int Y, int W, int H, int cx, int cy ); int Fl_PNM_Image_width(Fl_PNM_Image *); int Fl_PNM_Image_height(Fl_PNM_Image *); void Fl_PNM_Image_delete(Fl_PNM_Image *); int Fl_PNM_Image_count(Fl_PNM_Image *self); const char *const *Fl_PNM_Image_data(Fl_PNM_Image *self); Fl_PNM_Image *Fl_PNM_Image_copy(Fl_PNM_Image *self); Fl_PNM_Image *Fl_PNM_Image_copy_sized(Fl_PNM_Image *self, int W, int H); void Fl_PNM_Image_scale( Fl_PNM_Image *self, int width, int height, int proportional, int can_expand ); int Fl_PNM_Image_fail(Fl_PNM_Image *self); int Fl_PNM_Image_data_w(const Fl_PNM_Image *self); int Fl_PNM_Image_data_h(const Fl_PNM_Image *self); int Fl_PNM_Image_d(const Fl_PNM_Image *self); int Fl_PNM_Image_ld(const Fl_PNM_Image *self); void Fl_PNM_Image_inactive(Fl_PNM_Image *self); Fl_PNM_Image *Fl_PNM_Image_from_dyn_ptr(Fl_Image *other);

Fl_PNM_Image *Fl_PNM_Image_new(const char *filename);

typedef struct Fl_Tiled_Image Fl_Tiled_Image; void Fl_Tiled_Image_draw(Fl_Tiled_Image *, int X, int Y, int W, int H); void Fl_Tiled_Image_draw_ext( Fl_Tiled_Image *, int X, int Y, int W, int H, int cx, int cy ); int Fl_Tiled_Image_width(Fl_Tiled_Image *); int Fl_Tiled_Image_height(Fl_Tiled_Image *); void Fl_Tiled_Image_delete(Fl_Tiled_Image *); int Fl_Tiled_Image_count(Fl_Tiled_Image *self); const char *const *Fl_Tiled_Image_data(Fl_Tiled_Image *self); Fl_Tiled_Image *Fl_Tiled_Image_copy(Fl_Tiled_Image *self); Fl_Tiled_Image *Fl_Tiled_Image_copy_sized(Fl_Tiled_Image *self, int W, int H); void Fl_Tiled_Image_scale( Fl_Tiled_Image *self, int width, int height, int proportional, int can_expand ); int Fl_Tiled_Image_fail(Fl_Tiled_Image *self); int Fl_Tiled_Image_data_w(const Fl_Tiled_Image *self); int Fl_Tiled_Image_data_h(const Fl_Tiled_Image *self); int Fl_Tiled_Image_d(const Fl_Tiled_Image *self); int Fl_Tiled_Image_ld(const Fl_Tiled_Image *self); void Fl_Tiled_Image_inactive(Fl_Tiled_Image *self); Fl_Tiled_Image *Fl_Tiled_Image_from_dyn_ptr(Fl_Image *other);

Fl_Tiled_Image *Fl_Tiled_Image_new(Fl_Image *i, int w, int h);

typedef struct Fl_RGB_Image Fl_RGB_Image; void Fl_RGB_Image_draw(Fl_RGB_Image *, int X, int Y, int W, int H); void Fl_RGB_Image_draw_ext( Fl_RGB_Image *, int X, int Y, int W, int H, int cx, int cy ); int Fl_RGB_Image_width(Fl_RGB_Image *); int Fl_RGB_Image_height(Fl_RGB_Image *); void Fl_RGB_Image_delete(Fl_RGB_Image *); int Fl_RGB_Image_count(Fl_RGB_Image *self); const char *const *Fl_RGB_Image_data(Fl_RGB_Image *self); Fl_RGB_Image *Fl_RGB_Image_copy(Fl_RGB_Image *self); Fl_RGB_Image *Fl_RGB_Image_copy_sized(Fl_RGB_Image *self, int W, int H); void Fl_RGB_Image_scale( Fl_RGB_Image *self, int width, int height, int proportional, int can_expand ); int Fl_RGB_Image_fail(Fl_RGB_Image *self); int Fl_RGB_Image_data_w(const Fl_RGB_Image *self); int Fl_RGB_Image_data_h(const Fl_RGB_Image *self); int Fl_RGB_Image_d(const Fl_RGB_Image *self); int Fl_RGB_Image_ld(const Fl_RGB_Image *self); void Fl_RGB_Image_inactive(Fl_RGB_Image *self); Fl_RGB_Image *Fl_RGB_Image_from_dyn_ptr(Fl_Image *other);

Fl_RGB_Image *
Fl_RGB_Image_new(const unsigned char *bits, int W, int H, int depth, int ld);

Fl_RGB_Image *Fl_RGB_Image_from_data(
    const unsigned char *bits, int W, int H, int depth, int ld
);

Fl_RGB_Image *Fl_RGB_Image_from_pixmap(const Fl_Pixmap *image);

typedef struct Fl_Shared_Image Fl_Shared_Image; void Fl_Shared_Image_draw(Fl_Shared_Image *, int X, int Y, int W, int H); void Fl_Shared_Image_draw_ext( Fl_Shared_Image *, int X, int Y, int W, int H, int cx, int cy ); int Fl_Shared_Image_width(Fl_Shared_Image *); int Fl_Shared_Image_height(Fl_Shared_Image *); void Fl_Shared_Image_delete(Fl_Shared_Image *); int Fl_Shared_Image_count(Fl_Shared_Image *self); const char *const *Fl_Shared_Image_data(Fl_Shared_Image *self); Fl_Shared_Image *Fl_Shared_Image_copy(Fl_Shared_Image *self); Fl_Shared_Image *Fl_Shared_Image_copy_sized(Fl_Shared_Image *self, int W, int H); void Fl_Shared_Image_scale( Fl_Shared_Image *self, int width, int height, int proportional, int can_expand ); int Fl_Shared_Image_fail(Fl_Shared_Image *self); int Fl_Shared_Image_data_w(const Fl_Shared_Image *self); int Fl_Shared_Image_data_h(const Fl_Shared_Image *self); int Fl_Shared_Image_d(const Fl_Shared_Image *self); int Fl_Shared_Image_ld(const Fl_Shared_Image *self); void Fl_Shared_Image_inactive(Fl_Shared_Image *self); Fl_Shared_Image *Fl_Shared_Image_from_dyn_ptr(Fl_Image *other);

Fl_Shared_Image *Fl_Shared_Image_get(const char *name, int W, int H);

Fl_Shared_Image *Fl_Shared_Image_from_rgb(Fl_RGB_Image *rgb, int own_it);

typedef struct Fl_ICO_Image Fl_ICO_Image; void Fl_ICO_Image_draw(Fl_ICO_Image *, int X, int Y, int W, int H); void Fl_ICO_Image_draw_ext( Fl_ICO_Image *, int X, int Y, int W, int H, int cx, int cy ); int Fl_ICO_Image_width(Fl_ICO_Image *); int Fl_ICO_Image_height(Fl_ICO_Image *); void Fl_ICO_Image_delete(Fl_ICO_Image *); int Fl_ICO_Image_count(Fl_ICO_Image *self); const char *const *Fl_ICO_Image_data(Fl_ICO_Image *self); Fl_ICO_Image *Fl_ICO_Image_copy(Fl_ICO_Image *self); Fl_ICO_Image *Fl_ICO_Image_copy_sized(Fl_ICO_Image *self, int W, int H); void Fl_ICO_Image_scale( Fl_ICO_Image *self, int width, int height, int proportional, int can_expand ); int Fl_ICO_Image_fail(Fl_ICO_Image *self); int Fl_ICO_Image_data_w(const Fl_ICO_Image *self); int Fl_ICO_Image_data_h(const Fl_ICO_Image *self); int Fl_ICO_Image_d(const Fl_ICO_Image *self); int Fl_ICO_Image_ld(const Fl_ICO_Image *self); void Fl_ICO_Image_inactive(Fl_ICO_Image *self); Fl_ICO_Image *Fl_ICO_Image_from_dyn_ptr(Fl_Image *other);

Fl_ICO_Image *Fl_ICO_Image_new(const char *filename, int id);

Fl_ICO_Image *
Fl_ICO_Image_from_data(const unsigned char *bits, unsigned long long len, int id);

void *const
Fl_ICO_Image_icondirentry(const Fl_ICO_Image *self, unsigned long long *size);

void Fl_register_images(void);
typedef struct Fl_Input Fl_Input; Fl_Input *Fl_Input_new( int x, int y, int width, int height, const char *title ); int Fl_Input_x(Fl_Input *); int Fl_Input_y(Fl_Input *); int Fl_Input_width(Fl_Input *); int Fl_Input_height(Fl_Input *); const char *Fl_Input_label(Fl_Input *); void Fl_Input_set_label(Fl_Input *, const char *title); void Fl_Input_redraw(Fl_Input *); void Fl_Input_show(Fl_Input *); void Fl_Input_hide(Fl_Input *); void Fl_Input_activate(Fl_Input *); void Fl_Input_deactivate(Fl_Input *); void Fl_Input_redraw_label(Fl_Input *); void Fl_Input_resize(Fl_Input *, int x, int y, int width, int height); void Fl_Input_widget_resize( Fl_Input *, int x, int y, int width, int height ); const char *Fl_Input_tooltip(Fl_Input *); void Fl_Input_set_tooltip(Fl_Input *, const char *txt); int Fl_Input_get_type(Fl_Input *); void Fl_Input_set_type(Fl_Input *, int typ); unsigned int Fl_Input_color(Fl_Input *); void Fl_Input_set_color(Fl_Input *, unsigned int color); void Fl_Input_measure_label(const Fl_Input *, int *, int *); unsigned int Fl_Input_label_color(Fl_Input *); void Fl_Input_set_label_color(Fl_Input *, unsigned int color); int Fl_Input_label_font(Fl_Input *); void Fl_Input_set_label_font(Fl_Input *, int font); int Fl_Input_label_size(Fl_Input *); void Fl_Input_set_label_size(Fl_Input *, int sz); int Fl_Input_label_type(Fl_Input *); void Fl_Input_set_label_type(Fl_Input *, int typ); int Fl_Input_box(Fl_Input *); void Fl_Input_set_box(Fl_Input *, int typ); int Fl_Input_changed(Fl_Input *); void Fl_Input_set_changed(Fl_Input *); void Fl_Input_clear_changed(Fl_Input *); int Fl_Input_align(Fl_Input *); void Fl_Input_set_align(Fl_Input *, int typ); void Fl_Input_delete(Fl_Input *); void Fl_Input_set_image(Fl_Input *, void *); void Fl_Input_handle( Fl_Input *self, custom_handler_callback cb, void *data ); int Fl_Input_handle_event(Fl_Input *self, int event); void Fl_Input_draw(Fl_Input *self, custom_draw_callback cb, void *data); void Fl_Input_resize_callback( Fl_Input *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Input_set_when(Fl_Input *, int); int Fl_Input_when(const Fl_Input *); const void *Fl_Input_image(const Fl_Input *); void *Fl_Input_parent(const Fl_Input *self); unsigned int Fl_Input_selection_color(Fl_Input *); void Fl_Input_set_selection_color(Fl_Input *, unsigned int color); void Fl_Input_do_callback(Fl_Input *); int Fl_Input_inside(const Fl_Input *self, void *); void *Fl_Input_window(const Fl_Input *); void *Fl_Input_top_window(const Fl_Input *); int Fl_Input_takes_events(const Fl_Input *); void *Fl_Input_user_data(const Fl_Input *); int Fl_Input_take_focus(Fl_Input *self); void Fl_Input_set_visible_focus(Fl_Input *self); void Fl_Input_clear_visible_focus(Fl_Input *self); void Fl_Input_visible_focus(Fl_Input *self, int v); unsigned int Fl_Input_has_visible_focus(Fl_Input *self); void Fl_Input_set_user_data(Fl_Input *, void *data); void *Fl_Input_draw_data(const Fl_Input *self); void *Fl_Input_handle_data(const Fl_Input *self); void Fl_Input_set_draw_data(Fl_Input *self, void *data); void Fl_Input_set_handle_data(Fl_Input *self, void *data); unsigned char Fl_Input_damage(const Fl_Input *self); void Fl_Input_set_damage(Fl_Input *self, unsigned char flag); void Fl_Input_set_damage_area( Fl_Input *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Input_clear_damage(Fl_Input *self); void *Fl_Input_as_window(Fl_Input *self); void *Fl_Input_as_group(Fl_Input *self); void Fl_Input_set_deimage(Fl_Input *, void *); const void *Fl_Input_deimage(const Fl_Input *); void Fl_Input_set_callback(Fl_Input *, Fl_Callback *, void *); int Fl_Input_visible(const Fl_Input *self); int Fl_Input_visible_r(const Fl_Input *self); unsigned int Fl_Input_active(const Fl_Input *self); int Fl_Input_active_r(const Fl_Input *self); Fl_Callback *Fl_Input_callback(const Fl_Input *self); void Fl_Input_set_deletion_callback( Fl_Input *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Input *Fl_Input_from_dyn_ptr(Fl_Widget *ptr); Fl_Input *Fl_Input_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Input_super_draw(Fl_Widget *ptr, int flag); void Fl_Input_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Input_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Input_set_value(Fl_Input *, const char *); const char *Fl_Input_value(Fl_Input *); int Fl_Input_maximum_size(Fl_Input *); void Fl_Input_set_maximum_size(Fl_Input *, int m); int Fl_Input_position(Fl_Input *); int Fl_Input_set_position(Fl_Input *, int p); int Fl_Input_set_mark(Fl_Input *, int m); int Fl_Input_mark(Fl_Input *); int Fl_Input_replace(Fl_Input *, int b, int e, const char *text, int ilen); int Fl_Input_insert(Fl_Input *, const char *t, int l); int Fl_Input_append(Fl_Input *, const char *t, int l, char keep_selection); int Fl_Input_copy(Fl_Input *, int clipboard); int Fl_Input_undo(Fl_Input *); int Fl_Input_copy_cuts(Fl_Input *); unsigned int Fl_Input_cursor_color(const Fl_Input *); void Fl_Input_set_cursor_color(Fl_Input *, unsigned int s); int Fl_Input_text_font(Fl_Input *); void Fl_Input_set_text_font(Fl_Input *, int s); unsigned int Fl_Input_text_color(Fl_Input *); void Fl_Input_set_text_color(Fl_Input *, unsigned int s); int Fl_Input_text_size(Fl_Input *); void Fl_Input_set_text_size(Fl_Input *, int s); int Fl_Input_readonly(Fl_Input *); void Fl_Input_set_readonly(Fl_Input *, int boolean); int Fl_Input_wrap(Fl_Input *); void Fl_Input_set_wrap(Fl_Input *, int boolean); void Fl_Input_set_tab_nav(Fl_Input *, int flag); int Fl_Input_tab_nav(const Fl_Input *);

typedef struct Fl_Int_Input Fl_Int_Input; Fl_Int_Input *Fl_Int_Input_new( int x, int y, int width, int height, const char *title ); int Fl_Int_Input_x(Fl_Int_Input *); int Fl_Int_Input_y(Fl_Int_Input *); int Fl_Int_Input_width(Fl_Int_Input *); int Fl_Int_Input_height(Fl_Int_Input *); const char *Fl_Int_Input_label(Fl_Int_Input *); void Fl_Int_Input_set_label(Fl_Int_Input *, const char *title); void Fl_Int_Input_redraw(Fl_Int_Input *); void Fl_Int_Input_show(Fl_Int_Input *); void Fl_Int_Input_hide(Fl_Int_Input *); void Fl_Int_Input_activate(Fl_Int_Input *); void Fl_Int_Input_deactivate(Fl_Int_Input *); void Fl_Int_Input_redraw_label(Fl_Int_Input *); void Fl_Int_Input_resize(Fl_Int_Input *, int x, int y, int width, int height); void Fl_Int_Input_widget_resize( Fl_Int_Input *, int x, int y, int width, int height ); const char *Fl_Int_Input_tooltip(Fl_Int_Input *); void Fl_Int_Input_set_tooltip(Fl_Int_Input *, const char *txt); int Fl_Int_Input_get_type(Fl_Int_Input *); void Fl_Int_Input_set_type(Fl_Int_Input *, int typ); unsigned int Fl_Int_Input_color(Fl_Int_Input *); void Fl_Int_Input_set_color(Fl_Int_Input *, unsigned int color); void Fl_Int_Input_measure_label(const Fl_Int_Input *, int *, int *); unsigned int Fl_Int_Input_label_color(Fl_Int_Input *); void Fl_Int_Input_set_label_color(Fl_Int_Input *, unsigned int color); int Fl_Int_Input_label_font(Fl_Int_Input *); void Fl_Int_Input_set_label_font(Fl_Int_Input *, int font); int Fl_Int_Input_label_size(Fl_Int_Input *); void Fl_Int_Input_set_label_size(Fl_Int_Input *, int sz); int Fl_Int_Input_label_type(Fl_Int_Input *); void Fl_Int_Input_set_label_type(Fl_Int_Input *, int typ); int Fl_Int_Input_box(Fl_Int_Input *); void Fl_Int_Input_set_box(Fl_Int_Input *, int typ); int Fl_Int_Input_changed(Fl_Int_Input *); void Fl_Int_Input_set_changed(Fl_Int_Input *); void Fl_Int_Input_clear_changed(Fl_Int_Input *); int Fl_Int_Input_align(Fl_Int_Input *); void Fl_Int_Input_set_align(Fl_Int_Input *, int typ); void Fl_Int_Input_delete(Fl_Int_Input *); void Fl_Int_Input_set_image(Fl_Int_Input *, void *); void Fl_Int_Input_handle( Fl_Int_Input *self, custom_handler_callback cb, void *data ); int Fl_Int_Input_handle_event(Fl_Int_Input *self, int event); void Fl_Int_Input_draw(Fl_Int_Input *self, custom_draw_callback cb, void *data); void Fl_Int_Input_resize_callback( Fl_Int_Input *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Int_Input_set_when(Fl_Int_Input *, int); int Fl_Int_Input_when(const Fl_Int_Input *); const void *Fl_Int_Input_image(const Fl_Int_Input *); void *Fl_Int_Input_parent(const Fl_Int_Input *self); unsigned int Fl_Int_Input_selection_color(Fl_Int_Input *); void Fl_Int_Input_set_selection_color(Fl_Int_Input *, unsigned int color); void Fl_Int_Input_do_callback(Fl_Int_Input *); int Fl_Int_Input_inside(const Fl_Int_Input *self, void *); void *Fl_Int_Input_window(const Fl_Int_Input *); void *Fl_Int_Input_top_window(const Fl_Int_Input *); int Fl_Int_Input_takes_events(const Fl_Int_Input *); void *Fl_Int_Input_user_data(const Fl_Int_Input *); int Fl_Int_Input_take_focus(Fl_Int_Input *self); void Fl_Int_Input_set_visible_focus(Fl_Int_Input *self); void Fl_Int_Input_clear_visible_focus(Fl_Int_Input *self); void Fl_Int_Input_visible_focus(Fl_Int_Input *self, int v); unsigned int Fl_Int_Input_has_visible_focus(Fl_Int_Input *self); void Fl_Int_Input_set_user_data(Fl_Int_Input *, void *data); void *Fl_Int_Input_draw_data(const Fl_Int_Input *self); void *Fl_Int_Input_handle_data(const Fl_Int_Input *self); void Fl_Int_Input_set_draw_data(Fl_Int_Input *self, void *data); void Fl_Int_Input_set_handle_data(Fl_Int_Input *self, void *data); unsigned char Fl_Int_Input_damage(const Fl_Int_Input *self); void Fl_Int_Input_set_damage(Fl_Int_Input *self, unsigned char flag); void Fl_Int_Input_set_damage_area( Fl_Int_Input *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Int_Input_clear_damage(Fl_Int_Input *self); void *Fl_Int_Input_as_window(Fl_Int_Input *self); void *Fl_Int_Input_as_group(Fl_Int_Input *self); void Fl_Int_Input_set_deimage(Fl_Int_Input *, void *); const void *Fl_Int_Input_deimage(const Fl_Int_Input *); void Fl_Int_Input_set_callback(Fl_Int_Input *, Fl_Callback *, void *); int Fl_Int_Input_visible(const Fl_Int_Input *self); int Fl_Int_Input_visible_r(const Fl_Int_Input *self); unsigned int Fl_Int_Input_active(const Fl_Int_Input *self); int Fl_Int_Input_active_r(const Fl_Int_Input *self); Fl_Callback *Fl_Int_Input_callback(const Fl_Int_Input *self); void Fl_Int_Input_set_deletion_callback( Fl_Int_Input *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Int_Input *Fl_Int_Input_from_dyn_ptr(Fl_Widget *ptr); Fl_Int_Input *Fl_Int_Input_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Int_Input_super_draw(Fl_Widget *ptr, int flag); void Fl_Int_Input_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Int_Input_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Int_Input_set_value(Fl_Int_Input *, const char *); const char *Fl_Int_Input_value(Fl_Int_Input *); int Fl_Int_Input_maximum_size(Fl_Int_Input *); void Fl_Int_Input_set_maximum_size(Fl_Int_Input *, int m); int Fl_Int_Input_position(Fl_Int_Input *); int Fl_Int_Input_set_position(Fl_Int_Input *, int p); int Fl_Int_Input_set_mark(Fl_Int_Input *, int m); int Fl_Int_Input_mark(Fl_Int_Input *); int Fl_Int_Input_replace(Fl_Int_Input *, int b, int e, const char *text, int ilen); int Fl_Int_Input_insert(Fl_Int_Input *, const char *t, int l); int Fl_Int_Input_append(Fl_Int_Input *, const char *t, int l, char keep_selection); int Fl_Int_Input_copy(Fl_Int_Input *, int clipboard); int Fl_Int_Input_undo(Fl_Int_Input *); int Fl_Int_Input_copy_cuts(Fl_Int_Input *); unsigned int Fl_Int_Input_cursor_color(const Fl_Int_Input *); void Fl_Int_Input_set_cursor_color(Fl_Int_Input *, unsigned int s); int Fl_Int_Input_text_font(Fl_Int_Input *); void Fl_Int_Input_set_text_font(Fl_Int_Input *, int s); unsigned int Fl_Int_Input_text_color(Fl_Int_Input *); void Fl_Int_Input_set_text_color(Fl_Int_Input *, unsigned int s); int Fl_Int_Input_text_size(Fl_Int_Input *); void Fl_Int_Input_set_text_size(Fl_Int_Input *, int s); int Fl_Int_Input_readonly(Fl_Int_Input *); void Fl_Int_Input_set_readonly(Fl_Int_Input *, int boolean); int Fl_Int_Input_wrap(Fl_Int_Input *); void Fl_Int_Input_set_wrap(Fl_Int_Input *, int boolean); void Fl_Int_Input_set_tab_nav(Fl_Int_Input *, int flag); int Fl_Int_Input_tab_nav(const Fl_Int_Input *);

typedef struct Fl_Float_Input Fl_Float_Input; Fl_Float_Input *Fl_Float_Input_new( int x, int y, int width, int height, const char *title ); int Fl_Float_Input_x(Fl_Float_Input *); int Fl_Float_Input_y(Fl_Float_Input *); int Fl_Float_Input_width(Fl_Float_Input *); int Fl_Float_Input_height(Fl_Float_Input *); const char *Fl_Float_Input_label(Fl_Float_Input *); void Fl_Float_Input_set_label(Fl_Float_Input *, const char *title); void Fl_Float_Input_redraw(Fl_Float_Input *); void Fl_Float_Input_show(Fl_Float_Input *); void Fl_Float_Input_hide(Fl_Float_Input *); void Fl_Float_Input_activate(Fl_Float_Input *); void Fl_Float_Input_deactivate(Fl_Float_Input *); void Fl_Float_Input_redraw_label(Fl_Float_Input *); void Fl_Float_Input_resize(Fl_Float_Input *, int x, int y, int width, int height); void Fl_Float_Input_widget_resize( Fl_Float_Input *, int x, int y, int width, int height ); const char *Fl_Float_Input_tooltip(Fl_Float_Input *); void Fl_Float_Input_set_tooltip(Fl_Float_Input *, const char *txt); int Fl_Float_Input_get_type(Fl_Float_Input *); void Fl_Float_Input_set_type(Fl_Float_Input *, int typ); unsigned int Fl_Float_Input_color(Fl_Float_Input *); void Fl_Float_Input_set_color(Fl_Float_Input *, unsigned int color); void Fl_Float_Input_measure_label(const Fl_Float_Input *, int *, int *); unsigned int Fl_Float_Input_label_color(Fl_Float_Input *); void Fl_Float_Input_set_label_color(Fl_Float_Input *, unsigned int color); int Fl_Float_Input_label_font(Fl_Float_Input *); void Fl_Float_Input_set_label_font(Fl_Float_Input *, int font); int Fl_Float_Input_label_size(Fl_Float_Input *); void Fl_Float_Input_set_label_size(Fl_Float_Input *, int sz); int Fl_Float_Input_label_type(Fl_Float_Input *); void Fl_Float_Input_set_label_type(Fl_Float_Input *, int typ); int Fl_Float_Input_box(Fl_Float_Input *); void Fl_Float_Input_set_box(Fl_Float_Input *, int typ); int Fl_Float_Input_changed(Fl_Float_Input *); void Fl_Float_Input_set_changed(Fl_Float_Input *); void Fl_Float_Input_clear_changed(Fl_Float_Input *); int Fl_Float_Input_align(Fl_Float_Input *); void Fl_Float_Input_set_align(Fl_Float_Input *, int typ); void Fl_Float_Input_delete(Fl_Float_Input *); void Fl_Float_Input_set_image(Fl_Float_Input *, void *); void Fl_Float_Input_handle( Fl_Float_Input *self, custom_handler_callback cb, void *data ); int Fl_Float_Input_handle_event(Fl_Float_Input *self, int event); void Fl_Float_Input_draw(Fl_Float_Input *self, custom_draw_callback cb, void *data); void Fl_Float_Input_resize_callback( Fl_Float_Input *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Float_Input_set_when(Fl_Float_Input *, int); int Fl_Float_Input_when(const Fl_Float_Input *); const void *Fl_Float_Input_image(const Fl_Float_Input *); void *Fl_Float_Input_parent(const Fl_Float_Input *self); unsigned int Fl_Float_Input_selection_color(Fl_Float_Input *); void Fl_Float_Input_set_selection_color(Fl_Float_Input *, unsigned int color); void Fl_Float_Input_do_callback(Fl_Float_Input *); int Fl_Float_Input_inside(const Fl_Float_Input *self, void *); void *Fl_Float_Input_window(const Fl_Float_Input *); void *Fl_Float_Input_top_window(const Fl_Float_Input *); int Fl_Float_Input_takes_events(const Fl_Float_Input *); void *Fl_Float_Input_user_data(const Fl_Float_Input *); int Fl_Float_Input_take_focus(Fl_Float_Input *self); void Fl_Float_Input_set_visible_focus(Fl_Float_Input *self); void Fl_Float_Input_clear_visible_focus(Fl_Float_Input *self); void Fl_Float_Input_visible_focus(Fl_Float_Input *self, int v); unsigned int Fl_Float_Input_has_visible_focus(Fl_Float_Input *self); void Fl_Float_Input_set_user_data(Fl_Float_Input *, void *data); void *Fl_Float_Input_draw_data(const Fl_Float_Input *self); void *Fl_Float_Input_handle_data(const Fl_Float_Input *self); void Fl_Float_Input_set_draw_data(Fl_Float_Input *self, void *data); void Fl_Float_Input_set_handle_data(Fl_Float_Input *self, void *data); unsigned char Fl_Float_Input_damage(const Fl_Float_Input *self); void Fl_Float_Input_set_damage(Fl_Float_Input *self, unsigned char flag); void Fl_Float_Input_set_damage_area( Fl_Float_Input *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Float_Input_clear_damage(Fl_Float_Input *self); void *Fl_Float_Input_as_window(Fl_Float_Input *self); void *Fl_Float_Input_as_group(Fl_Float_Input *self); void Fl_Float_Input_set_deimage(Fl_Float_Input *, void *); const void *Fl_Float_Input_deimage(const Fl_Float_Input *); void Fl_Float_Input_set_callback(Fl_Float_Input *, Fl_Callback *, void *); int Fl_Float_Input_visible(const Fl_Float_Input *self); int Fl_Float_Input_visible_r(const Fl_Float_Input *self); unsigned int Fl_Float_Input_active(const Fl_Float_Input *self); int Fl_Float_Input_active_r(const Fl_Float_Input *self); Fl_Callback *Fl_Float_Input_callback(const Fl_Float_Input *self); void Fl_Float_Input_set_deletion_callback( Fl_Float_Input *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Float_Input *Fl_Float_Input_from_dyn_ptr(Fl_Widget *ptr); Fl_Float_Input *Fl_Float_Input_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Float_Input_super_draw(Fl_Widget *ptr, int flag); void Fl_Float_Input_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Float_Input_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Float_Input_set_value(Fl_Float_Input *, const char *); const char *Fl_Float_Input_value(Fl_Float_Input *); int Fl_Float_Input_maximum_size(Fl_Float_Input *); void Fl_Float_Input_set_maximum_size(Fl_Float_Input *, int m); int Fl_Float_Input_position(Fl_Float_Input *); int Fl_Float_Input_set_position(Fl_Float_Input *, int p); int Fl_Float_Input_set_mark(Fl_Float_Input *, int m); int Fl_Float_Input_mark(Fl_Float_Input *); int Fl_Float_Input_replace(Fl_Float_Input *, int b, int e, const char *text, int ilen); int Fl_Float_Input_insert(Fl_Float_Input *, const char *t, int l); int Fl_Float_Input_append(Fl_Float_Input *, const char *t, int l, char keep_selection); int Fl_Float_Input_copy(Fl_Float_Input *, int clipboard); int Fl_Float_Input_undo(Fl_Float_Input *); int Fl_Float_Input_copy_cuts(Fl_Float_Input *); unsigned int Fl_Float_Input_cursor_color(const Fl_Float_Input *); void Fl_Float_Input_set_cursor_color(Fl_Float_Input *, unsigned int s); int Fl_Float_Input_text_font(Fl_Float_Input *); void Fl_Float_Input_set_text_font(Fl_Float_Input *, int s); unsigned int Fl_Float_Input_text_color(Fl_Float_Input *); void Fl_Float_Input_set_text_color(Fl_Float_Input *, unsigned int s); int Fl_Float_Input_text_size(Fl_Float_Input *); void Fl_Float_Input_set_text_size(Fl_Float_Input *, int s); int Fl_Float_Input_readonly(Fl_Float_Input *); void Fl_Float_Input_set_readonly(Fl_Float_Input *, int boolean); int Fl_Float_Input_wrap(Fl_Float_Input *); void Fl_Float_Input_set_wrap(Fl_Float_Input *, int boolean); void Fl_Float_Input_set_tab_nav(Fl_Float_Input *, int flag); int Fl_Float_Input_tab_nav(const Fl_Float_Input *);

typedef struct Fl_Multiline_Input Fl_Multiline_Input; Fl_Multiline_Input *Fl_Multiline_Input_new( int x, int y, int width, int height, const char *title ); int Fl_Multiline_Input_x(Fl_Multiline_Input *); int Fl_Multiline_Input_y(Fl_Multiline_Input *); int Fl_Multiline_Input_width(Fl_Multiline_Input *); int Fl_Multiline_Input_height(Fl_Multiline_Input *); const char *Fl_Multiline_Input_label(Fl_Multiline_Input *); void Fl_Multiline_Input_set_label(Fl_Multiline_Input *, const char *title); void Fl_Multiline_Input_redraw(Fl_Multiline_Input *); void Fl_Multiline_Input_show(Fl_Multiline_Input *); void Fl_Multiline_Input_hide(Fl_Multiline_Input *); void Fl_Multiline_Input_activate(Fl_Multiline_Input *); void Fl_Multiline_Input_deactivate(Fl_Multiline_Input *); void Fl_Multiline_Input_redraw_label(Fl_Multiline_Input *); void Fl_Multiline_Input_resize(Fl_Multiline_Input *, int x, int y, int width, int height); void Fl_Multiline_Input_widget_resize( Fl_Multiline_Input *, int x, int y, int width, int height ); const char *Fl_Multiline_Input_tooltip(Fl_Multiline_Input *); void Fl_Multiline_Input_set_tooltip(Fl_Multiline_Input *, const char *txt); int Fl_Multiline_Input_get_type(Fl_Multiline_Input *); void Fl_Multiline_Input_set_type(Fl_Multiline_Input *, int typ); unsigned int Fl_Multiline_Input_color(Fl_Multiline_Input *); void Fl_Multiline_Input_set_color(Fl_Multiline_Input *, unsigned int color); void Fl_Multiline_Input_measure_label(const Fl_Multiline_Input *, int *, int *); unsigned int Fl_Multiline_Input_label_color(Fl_Multiline_Input *); void Fl_Multiline_Input_set_label_color(Fl_Multiline_Input *, unsigned int color); int Fl_Multiline_Input_label_font(Fl_Multiline_Input *); void Fl_Multiline_Input_set_label_font(Fl_Multiline_Input *, int font); int Fl_Multiline_Input_label_size(Fl_Multiline_Input *); void Fl_Multiline_Input_set_label_size(Fl_Multiline_Input *, int sz); int Fl_Multiline_Input_label_type(Fl_Multiline_Input *); void Fl_Multiline_Input_set_label_type(Fl_Multiline_Input *, int typ); int Fl_Multiline_Input_box(Fl_Multiline_Input *); void Fl_Multiline_Input_set_box(Fl_Multiline_Input *, int typ); int Fl_Multiline_Input_changed(Fl_Multiline_Input *); void Fl_Multiline_Input_set_changed(Fl_Multiline_Input *); void Fl_Multiline_Input_clear_changed(Fl_Multiline_Input *); int Fl_Multiline_Input_align(Fl_Multiline_Input *); void Fl_Multiline_Input_set_align(Fl_Multiline_Input *, int typ); void Fl_Multiline_Input_delete(Fl_Multiline_Input *); void Fl_Multiline_Input_set_image(Fl_Multiline_Input *, void *); void Fl_Multiline_Input_handle( Fl_Multiline_Input *self, custom_handler_callback cb, void *data ); int Fl_Multiline_Input_handle_event(Fl_Multiline_Input *self, int event); void Fl_Multiline_Input_draw(Fl_Multiline_Input *self, custom_draw_callback cb, void *data); void Fl_Multiline_Input_resize_callback( Fl_Multiline_Input *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Multiline_Input_set_when(Fl_Multiline_Input *, int); int Fl_Multiline_Input_when(const Fl_Multiline_Input *); const void *Fl_Multiline_Input_image(const Fl_Multiline_Input *); void *Fl_Multiline_Input_parent(const Fl_Multiline_Input *self); unsigned int Fl_Multiline_Input_selection_color(Fl_Multiline_Input *); void Fl_Multiline_Input_set_selection_color(Fl_Multiline_Input *, unsigned int color); void Fl_Multiline_Input_do_callback(Fl_Multiline_Input *); int Fl_Multiline_Input_inside(const Fl_Multiline_Input *self, void *); void *Fl_Multiline_Input_window(const Fl_Multiline_Input *); void *Fl_Multiline_Input_top_window(const Fl_Multiline_Input *); int Fl_Multiline_Input_takes_events(const Fl_Multiline_Input *); void *Fl_Multiline_Input_user_data(const Fl_Multiline_Input *); int Fl_Multiline_Input_take_focus(Fl_Multiline_Input *self); void Fl_Multiline_Input_set_visible_focus(Fl_Multiline_Input *self); void Fl_Multiline_Input_clear_visible_focus(Fl_Multiline_Input *self); void Fl_Multiline_Input_visible_focus(Fl_Multiline_Input *self, int v); unsigned int Fl_Multiline_Input_has_visible_focus(Fl_Multiline_Input *self); void Fl_Multiline_Input_set_user_data(Fl_Multiline_Input *, void *data); void *Fl_Multiline_Input_draw_data(const Fl_Multiline_Input *self); void *Fl_Multiline_Input_handle_data(const Fl_Multiline_Input *self); void Fl_Multiline_Input_set_draw_data(Fl_Multiline_Input *self, void *data); void Fl_Multiline_Input_set_handle_data(Fl_Multiline_Input *self, void *data); unsigned char Fl_Multiline_Input_damage(const Fl_Multiline_Input *self); void Fl_Multiline_Input_set_damage(Fl_Multiline_Input *self, unsigned char flag); void Fl_Multiline_Input_set_damage_area( Fl_Multiline_Input *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Multiline_Input_clear_damage(Fl_Multiline_Input *self); void *Fl_Multiline_Input_as_window(Fl_Multiline_Input *self); void *Fl_Multiline_Input_as_group(Fl_Multiline_Input *self); void Fl_Multiline_Input_set_deimage(Fl_Multiline_Input *, void *); const void *Fl_Multiline_Input_deimage(const Fl_Multiline_Input *); void Fl_Multiline_Input_set_callback(Fl_Multiline_Input *, Fl_Callback *, void *); int Fl_Multiline_Input_visible(const Fl_Multiline_Input *self); int Fl_Multiline_Input_visible_r(const Fl_Multiline_Input *self); unsigned int Fl_Multiline_Input_active(const Fl_Multiline_Input *self); int Fl_Multiline_Input_active_r(const Fl_Multiline_Input *self); Fl_Callback *Fl_Multiline_Input_callback(const Fl_Multiline_Input *self); void Fl_Multiline_Input_set_deletion_callback( Fl_Multiline_Input *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Multiline_Input *Fl_Multiline_Input_from_dyn_ptr(Fl_Widget *ptr); Fl_Multiline_Input *Fl_Multiline_Input_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Multiline_Input_super_draw(Fl_Widget *ptr, int flag); void Fl_Multiline_Input_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Multiline_Input_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Multiline_Input_set_value(Fl_Multiline_Input *, const char *); const char *Fl_Multiline_Input_value(Fl_Multiline_Input *); int Fl_Multiline_Input_maximum_size(Fl_Multiline_Input *); void Fl_Multiline_Input_set_maximum_size(Fl_Multiline_Input *, int m); int Fl_Multiline_Input_position(Fl_Multiline_Input *); int Fl_Multiline_Input_set_position(Fl_Multiline_Input *, int p); int Fl_Multiline_Input_set_mark(Fl_Multiline_Input *, int m); int Fl_Multiline_Input_mark(Fl_Multiline_Input *); int Fl_Multiline_Input_replace(Fl_Multiline_Input *, int b, int e, const char *text, int ilen); int Fl_Multiline_Input_insert(Fl_Multiline_Input *, const char *t, int l); int Fl_Multiline_Input_append(Fl_Multiline_Input *, const char *t, int l, char keep_selection); int Fl_Multiline_Input_copy(Fl_Multiline_Input *, int clipboard); int Fl_Multiline_Input_undo(Fl_Multiline_Input *); int Fl_Multiline_Input_copy_cuts(Fl_Multiline_Input *); unsigned int Fl_Multiline_Input_cursor_color(const Fl_Multiline_Input *); void Fl_Multiline_Input_set_cursor_color(Fl_Multiline_Input *, unsigned int s); int Fl_Multiline_Input_text_font(Fl_Multiline_Input *); void Fl_Multiline_Input_set_text_font(Fl_Multiline_Input *, int s); unsigned int Fl_Multiline_Input_text_color(Fl_Multiline_Input *); void Fl_Multiline_Input_set_text_color(Fl_Multiline_Input *, unsigned int s); int Fl_Multiline_Input_text_size(Fl_Multiline_Input *); void Fl_Multiline_Input_set_text_size(Fl_Multiline_Input *, int s); int Fl_Multiline_Input_readonly(Fl_Multiline_Input *); void Fl_Multiline_Input_set_readonly(Fl_Multiline_Input *, int boolean); int Fl_Multiline_Input_wrap(Fl_Multiline_Input *); void Fl_Multiline_Input_set_wrap(Fl_Multiline_Input *, int boolean); void Fl_Multiline_Input_set_tab_nav(Fl_Multiline_Input *, int flag); int Fl_Multiline_Input_tab_nav(const Fl_Multiline_Input *);

typedef struct Fl_Secret_Input Fl_Secret_Input; Fl_Secret_Input *Fl_Secret_Input_new( int x, int y, int width, int height, const char *title ); int Fl_Secret_Input_x(Fl_Secret_Input *); int Fl_Secret_Input_y(Fl_Secret_Input *); int Fl_Secret_Input_width(Fl_Secret_Input *); int Fl_Secret_Input_height(Fl_Secret_Input *); const char *Fl_Secret_Input_label(Fl_Secret_Input *); void Fl_Secret_Input_set_label(Fl_Secret_Input *, const char *title); void Fl_Secret_Input_redraw(Fl_Secret_Input *); void Fl_Secret_Input_show(Fl_Secret_Input *); void Fl_Secret_Input_hide(Fl_Secret_Input *); void Fl_Secret_Input_activate(Fl_Secret_Input *); void Fl_Secret_Input_deactivate(Fl_Secret_Input *); void Fl_Secret_Input_redraw_label(Fl_Secret_Input *); void Fl_Secret_Input_resize(Fl_Secret_Input *, int x, int y, int width, int height); void Fl_Secret_Input_widget_resize( Fl_Secret_Input *, int x, int y, int width, int height ); const char *Fl_Secret_Input_tooltip(Fl_Secret_Input *); void Fl_Secret_Input_set_tooltip(Fl_Secret_Input *, const char *txt); int Fl_Secret_Input_get_type(Fl_Secret_Input *); void Fl_Secret_Input_set_type(Fl_Secret_Input *, int typ); unsigned int Fl_Secret_Input_color(Fl_Secret_Input *); void Fl_Secret_Input_set_color(Fl_Secret_Input *, unsigned int color); void Fl_Secret_Input_measure_label(const Fl_Secret_Input *, int *, int *); unsigned int Fl_Secret_Input_label_color(Fl_Secret_Input *); void Fl_Secret_Input_set_label_color(Fl_Secret_Input *, unsigned int color); int Fl_Secret_Input_label_font(Fl_Secret_Input *); void Fl_Secret_Input_set_label_font(Fl_Secret_Input *, int font); int Fl_Secret_Input_label_size(Fl_Secret_Input *); void Fl_Secret_Input_set_label_size(Fl_Secret_Input *, int sz); int Fl_Secret_Input_label_type(Fl_Secret_Input *); void Fl_Secret_Input_set_label_type(Fl_Secret_Input *, int typ); int Fl_Secret_Input_box(Fl_Secret_Input *); void Fl_Secret_Input_set_box(Fl_Secret_Input *, int typ); int Fl_Secret_Input_changed(Fl_Secret_Input *); void Fl_Secret_Input_set_changed(Fl_Secret_Input *); void Fl_Secret_Input_clear_changed(Fl_Secret_Input *); int Fl_Secret_Input_align(Fl_Secret_Input *); void Fl_Secret_Input_set_align(Fl_Secret_Input *, int typ); void Fl_Secret_Input_delete(Fl_Secret_Input *); void Fl_Secret_Input_set_image(Fl_Secret_Input *, void *); void Fl_Secret_Input_handle( Fl_Secret_Input *self, custom_handler_callback cb, void *data ); int Fl_Secret_Input_handle_event(Fl_Secret_Input *self, int event); void Fl_Secret_Input_draw(Fl_Secret_Input *self, custom_draw_callback cb, void *data); void Fl_Secret_Input_resize_callback( Fl_Secret_Input *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Secret_Input_set_when(Fl_Secret_Input *, int); int Fl_Secret_Input_when(const Fl_Secret_Input *); const void *Fl_Secret_Input_image(const Fl_Secret_Input *); void *Fl_Secret_Input_parent(const Fl_Secret_Input *self); unsigned int Fl_Secret_Input_selection_color(Fl_Secret_Input *); void Fl_Secret_Input_set_selection_color(Fl_Secret_Input *, unsigned int color); void Fl_Secret_Input_do_callback(Fl_Secret_Input *); int Fl_Secret_Input_inside(const Fl_Secret_Input *self, void *); void *Fl_Secret_Input_window(const Fl_Secret_Input *); void *Fl_Secret_Input_top_window(const Fl_Secret_Input *); int Fl_Secret_Input_takes_events(const Fl_Secret_Input *); void *Fl_Secret_Input_user_data(const Fl_Secret_Input *); int Fl_Secret_Input_take_focus(Fl_Secret_Input *self); void Fl_Secret_Input_set_visible_focus(Fl_Secret_Input *self); void Fl_Secret_Input_clear_visible_focus(Fl_Secret_Input *self); void Fl_Secret_Input_visible_focus(Fl_Secret_Input *self, int v); unsigned int Fl_Secret_Input_has_visible_focus(Fl_Secret_Input *self); void Fl_Secret_Input_set_user_data(Fl_Secret_Input *, void *data); void *Fl_Secret_Input_draw_data(const Fl_Secret_Input *self); void *Fl_Secret_Input_handle_data(const Fl_Secret_Input *self); void Fl_Secret_Input_set_draw_data(Fl_Secret_Input *self, void *data); void Fl_Secret_Input_set_handle_data(Fl_Secret_Input *self, void *data); unsigned char Fl_Secret_Input_damage(const Fl_Secret_Input *self); void Fl_Secret_Input_set_damage(Fl_Secret_Input *self, unsigned char flag); void Fl_Secret_Input_set_damage_area( Fl_Secret_Input *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Secret_Input_clear_damage(Fl_Secret_Input *self); void *Fl_Secret_Input_as_window(Fl_Secret_Input *self); void *Fl_Secret_Input_as_group(Fl_Secret_Input *self); void Fl_Secret_Input_set_deimage(Fl_Secret_Input *, void *); const void *Fl_Secret_Input_deimage(const Fl_Secret_Input *); void Fl_Secret_Input_set_callback(Fl_Secret_Input *, Fl_Callback *, void *); int Fl_Secret_Input_visible(const Fl_Secret_Input *self); int Fl_Secret_Input_visible_r(const Fl_Secret_Input *self); unsigned int Fl_Secret_Input_active(const Fl_Secret_Input *self); int Fl_Secret_Input_active_r(const Fl_Secret_Input *self); Fl_Callback *Fl_Secret_Input_callback(const Fl_Secret_Input *self); void Fl_Secret_Input_set_deletion_callback( Fl_Secret_Input *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Secret_Input *Fl_Secret_Input_from_dyn_ptr(Fl_Widget *ptr); Fl_Secret_Input *Fl_Secret_Input_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Secret_Input_super_draw(Fl_Widget *ptr, int flag); void Fl_Secret_Input_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Secret_Input_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Secret_Input_set_value(Fl_Secret_Input *, const char *); const char *Fl_Secret_Input_value(Fl_Secret_Input *); int Fl_Secret_Input_maximum_size(Fl_Secret_Input *); void Fl_Secret_Input_set_maximum_size(Fl_Secret_Input *, int m); int Fl_Secret_Input_position(Fl_Secret_Input *); int Fl_Secret_Input_set_position(Fl_Secret_Input *, int p); int Fl_Secret_Input_set_mark(Fl_Secret_Input *, int m); int Fl_Secret_Input_mark(Fl_Secret_Input *); int Fl_Secret_Input_replace(Fl_Secret_Input *, int b, int e, const char *text, int ilen); int Fl_Secret_Input_insert(Fl_Secret_Input *, const char *t, int l); int Fl_Secret_Input_append(Fl_Secret_Input *, const char *t, int l, char keep_selection); int Fl_Secret_Input_copy(Fl_Secret_Input *, int clipboard); int Fl_Secret_Input_undo(Fl_Secret_Input *); int Fl_Secret_Input_copy_cuts(Fl_Secret_Input *); unsigned int Fl_Secret_Input_cursor_color(const Fl_Secret_Input *); void Fl_Secret_Input_set_cursor_color(Fl_Secret_Input *, unsigned int s); int Fl_Secret_Input_text_font(Fl_Secret_Input *); void Fl_Secret_Input_set_text_font(Fl_Secret_Input *, int s); unsigned int Fl_Secret_Input_text_color(Fl_Secret_Input *); void Fl_Secret_Input_set_text_color(Fl_Secret_Input *, unsigned int s); int Fl_Secret_Input_text_size(Fl_Secret_Input *); void Fl_Secret_Input_set_text_size(Fl_Secret_Input *, int s); int Fl_Secret_Input_readonly(Fl_Secret_Input *); void Fl_Secret_Input_set_readonly(Fl_Secret_Input *, int boolean); int Fl_Secret_Input_wrap(Fl_Secret_Input *); void Fl_Secret_Input_set_wrap(Fl_Secret_Input *, int boolean); void Fl_Secret_Input_set_tab_nav(Fl_Secret_Input *, int flag); int Fl_Secret_Input_tab_nav(const Fl_Secret_Input *);

typedef struct Fl_File_Input Fl_File_Input; Fl_File_Input *Fl_File_Input_new( int x, int y, int width, int height, const char *title ); int Fl_File_Input_x(Fl_File_Input *); int Fl_File_Input_y(Fl_File_Input *); int Fl_File_Input_width(Fl_File_Input *); int Fl_File_Input_height(Fl_File_Input *); const char *Fl_File_Input_label(Fl_File_Input *); void Fl_File_Input_set_label(Fl_File_Input *, const char *title); void Fl_File_Input_redraw(Fl_File_Input *); void Fl_File_Input_show(Fl_File_Input *); void Fl_File_Input_hide(Fl_File_Input *); void Fl_File_Input_activate(Fl_File_Input *); void Fl_File_Input_deactivate(Fl_File_Input *); void Fl_File_Input_redraw_label(Fl_File_Input *); void Fl_File_Input_resize(Fl_File_Input *, int x, int y, int width, int height); void Fl_File_Input_widget_resize( Fl_File_Input *, int x, int y, int width, int height ); const char *Fl_File_Input_tooltip(Fl_File_Input *); void Fl_File_Input_set_tooltip(Fl_File_Input *, const char *txt); int Fl_File_Input_get_type(Fl_File_Input *); void Fl_File_Input_set_type(Fl_File_Input *, int typ); unsigned int Fl_File_Input_color(Fl_File_Input *); void Fl_File_Input_set_color(Fl_File_Input *, unsigned int color); void Fl_File_Input_measure_label(const Fl_File_Input *, int *, int *); unsigned int Fl_File_Input_label_color(Fl_File_Input *); void Fl_File_Input_set_label_color(Fl_File_Input *, unsigned int color); int Fl_File_Input_label_font(Fl_File_Input *); void Fl_File_Input_set_label_font(Fl_File_Input *, int font); int Fl_File_Input_label_size(Fl_File_Input *); void Fl_File_Input_set_label_size(Fl_File_Input *, int sz); int Fl_File_Input_label_type(Fl_File_Input *); void Fl_File_Input_set_label_type(Fl_File_Input *, int typ); int Fl_File_Input_box(Fl_File_Input *); void Fl_File_Input_set_box(Fl_File_Input *, int typ); int Fl_File_Input_changed(Fl_File_Input *); void Fl_File_Input_set_changed(Fl_File_Input *); void Fl_File_Input_clear_changed(Fl_File_Input *); int Fl_File_Input_align(Fl_File_Input *); void Fl_File_Input_set_align(Fl_File_Input *, int typ); void Fl_File_Input_delete(Fl_File_Input *); void Fl_File_Input_set_image(Fl_File_Input *, void *); void Fl_File_Input_handle( Fl_File_Input *self, custom_handler_callback cb, void *data ); int Fl_File_Input_handle_event(Fl_File_Input *self, int event); void Fl_File_Input_draw(Fl_File_Input *self, custom_draw_callback cb, void *data); void Fl_File_Input_resize_callback( Fl_File_Input *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_File_Input_set_when(Fl_File_Input *, int); int Fl_File_Input_when(const Fl_File_Input *); const void *Fl_File_Input_image(const Fl_File_Input *); void *Fl_File_Input_parent(const Fl_File_Input *self); unsigned int Fl_File_Input_selection_color(Fl_File_Input *); void Fl_File_Input_set_selection_color(Fl_File_Input *, unsigned int color); void Fl_File_Input_do_callback(Fl_File_Input *); int Fl_File_Input_inside(const Fl_File_Input *self, void *); void *Fl_File_Input_window(const Fl_File_Input *); void *Fl_File_Input_top_window(const Fl_File_Input *); int Fl_File_Input_takes_events(const Fl_File_Input *); void *Fl_File_Input_user_data(const Fl_File_Input *); int Fl_File_Input_take_focus(Fl_File_Input *self); void Fl_File_Input_set_visible_focus(Fl_File_Input *self); void Fl_File_Input_clear_visible_focus(Fl_File_Input *self); void Fl_File_Input_visible_focus(Fl_File_Input *self, int v); unsigned int Fl_File_Input_has_visible_focus(Fl_File_Input *self); void Fl_File_Input_set_user_data(Fl_File_Input *, void *data); void *Fl_File_Input_draw_data(const Fl_File_Input *self); void *Fl_File_Input_handle_data(const Fl_File_Input *self); void Fl_File_Input_set_draw_data(Fl_File_Input *self, void *data); void Fl_File_Input_set_handle_data(Fl_File_Input *self, void *data); unsigned char Fl_File_Input_damage(const Fl_File_Input *self); void Fl_File_Input_set_damage(Fl_File_Input *self, unsigned char flag); void Fl_File_Input_set_damage_area( Fl_File_Input *self, unsigned char flag, int x, int y, int w, int h ); void Fl_File_Input_clear_damage(Fl_File_Input *self); void *Fl_File_Input_as_window(Fl_File_Input *self); void *Fl_File_Input_as_group(Fl_File_Input *self); void Fl_File_Input_set_deimage(Fl_File_Input *, void *); const void *Fl_File_Input_deimage(const Fl_File_Input *); void Fl_File_Input_set_callback(Fl_File_Input *, Fl_Callback *, void *); int Fl_File_Input_visible(const Fl_File_Input *self); int Fl_File_Input_visible_r(const Fl_File_Input *self); unsigned int Fl_File_Input_active(const Fl_File_Input *self); int Fl_File_Input_active_r(const Fl_File_Input *self); Fl_Callback *Fl_File_Input_callback(const Fl_File_Input *self); void Fl_File_Input_set_deletion_callback( Fl_File_Input *self, void (*)(Fl_Widget *, void *), void *data ); Fl_File_Input *Fl_File_Input_from_dyn_ptr(Fl_Widget *ptr); Fl_File_Input *Fl_File_Input_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_File_Input_super_draw(Fl_Widget *ptr, int flag); void Fl_File_Input_super_draw_first(Fl_Widget *ptr, int flag); void Fl_File_Input_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_File_Input_set_down_box(Fl_File_Input *self, int box);

int Fl_File_Input_down_box(const Fl_File_Input *self);

int Fl_File_Input_set_value(Fl_File_Input *, const char *); const char *Fl_File_Input_value(Fl_File_Input *); int Fl_File_Input_maximum_size(Fl_File_Input *); void Fl_File_Input_set_maximum_size(Fl_File_Input *, int m); int Fl_File_Input_position(Fl_File_Input *); int Fl_File_Input_set_position(Fl_File_Input *, int p); int Fl_File_Input_set_mark(Fl_File_Input *, int m); int Fl_File_Input_mark(Fl_File_Input *); int Fl_File_Input_replace(Fl_File_Input *, int b, int e, const char *text, int ilen); int Fl_File_Input_insert(Fl_File_Input *, const char *t, int l); int Fl_File_Input_append(Fl_File_Input *, const char *t, int l, char keep_selection); int Fl_File_Input_copy(Fl_File_Input *, int clipboard); int Fl_File_Input_undo(Fl_File_Input *); int Fl_File_Input_copy_cuts(Fl_File_Input *); unsigned int Fl_File_Input_cursor_color(const Fl_File_Input *); void Fl_File_Input_set_cursor_color(Fl_File_Input *, unsigned int s); int Fl_File_Input_text_font(Fl_File_Input *); void Fl_File_Input_set_text_font(Fl_File_Input *, int s); unsigned int Fl_File_Input_text_color(Fl_File_Input *); void Fl_File_Input_set_text_color(Fl_File_Input *, unsigned int s); int Fl_File_Input_text_size(Fl_File_Input *); void Fl_File_Input_set_text_size(Fl_File_Input *, int s); int Fl_File_Input_readonly(Fl_File_Input *); void Fl_File_Input_set_readonly(Fl_File_Input *, int boolean); int Fl_File_Input_wrap(Fl_File_Input *); void Fl_File_Input_set_wrap(Fl_File_Input *, int boolean); void Fl_File_Input_set_tab_nav(Fl_File_Input *, int flag); int Fl_File_Input_tab_nav(const Fl_File_Input *);

typedef struct Fl_Output Fl_Output; Fl_Output *Fl_Output_new( int x, int y, int width, int height, const char *title ); int Fl_Output_x(Fl_Output *); int Fl_Output_y(Fl_Output *); int Fl_Output_width(Fl_Output *); int Fl_Output_height(Fl_Output *); const char *Fl_Output_label(Fl_Output *); void Fl_Output_set_label(Fl_Output *, const char *title); void Fl_Output_redraw(Fl_Output *); void Fl_Output_show(Fl_Output *); void Fl_Output_hide(Fl_Output *); void Fl_Output_activate(Fl_Output *); void Fl_Output_deactivate(Fl_Output *); void Fl_Output_redraw_label(Fl_Output *); void Fl_Output_resize(Fl_Output *, int x, int y, int width, int height); void Fl_Output_widget_resize( Fl_Output *, int x, int y, int width, int height ); const char *Fl_Output_tooltip(Fl_Output *); void Fl_Output_set_tooltip(Fl_Output *, const char *txt); int Fl_Output_get_type(Fl_Output *); void Fl_Output_set_type(Fl_Output *, int typ); unsigned int Fl_Output_color(Fl_Output *); void Fl_Output_set_color(Fl_Output *, unsigned int color); void Fl_Output_measure_label(const Fl_Output *, int *, int *); unsigned int Fl_Output_label_color(Fl_Output *); void Fl_Output_set_label_color(Fl_Output *, unsigned int color); int Fl_Output_label_font(Fl_Output *); void Fl_Output_set_label_font(Fl_Output *, int font); int Fl_Output_label_size(Fl_Output *); void Fl_Output_set_label_size(Fl_Output *, int sz); int Fl_Output_label_type(Fl_Output *); void Fl_Output_set_label_type(Fl_Output *, int typ); int Fl_Output_box(Fl_Output *); void Fl_Output_set_box(Fl_Output *, int typ); int Fl_Output_changed(Fl_Output *); void Fl_Output_set_changed(Fl_Output *); void Fl_Output_clear_changed(Fl_Output *); int Fl_Output_align(Fl_Output *); void Fl_Output_set_align(Fl_Output *, int typ); void Fl_Output_delete(Fl_Output *); void Fl_Output_set_image(Fl_Output *, void *); void Fl_Output_handle( Fl_Output *self, custom_handler_callback cb, void *data ); int Fl_Output_handle_event(Fl_Output *self, int event); void Fl_Output_draw(Fl_Output *self, custom_draw_callback cb, void *data); void Fl_Output_resize_callback( Fl_Output *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Output_set_when(Fl_Output *, int); int Fl_Output_when(const Fl_Output *); const void *Fl_Output_image(const Fl_Output *); void *Fl_Output_parent(const Fl_Output *self); unsigned int Fl_Output_selection_color(Fl_Output *); void Fl_Output_set_selection_color(Fl_Output *, unsigned int color); void Fl_Output_do_callback(Fl_Output *); int Fl_Output_inside(const Fl_Output *self, void *); void *Fl_Output_window(const Fl_Output *); void *Fl_Output_top_window(const Fl_Output *); int Fl_Output_takes_events(const Fl_Output *); void *Fl_Output_user_data(const Fl_Output *); int Fl_Output_take_focus(Fl_Output *self); void Fl_Output_set_visible_focus(Fl_Output *self); void Fl_Output_clear_visible_focus(Fl_Output *self); void Fl_Output_visible_focus(Fl_Output *self, int v); unsigned int Fl_Output_has_visible_focus(Fl_Output *self); void Fl_Output_set_user_data(Fl_Output *, void *data); void *Fl_Output_draw_data(const Fl_Output *self); void *Fl_Output_handle_data(const Fl_Output *self); void Fl_Output_set_draw_data(Fl_Output *self, void *data); void Fl_Output_set_handle_data(Fl_Output *self, void *data); unsigned char Fl_Output_damage(const Fl_Output *self); void Fl_Output_set_damage(Fl_Output *self, unsigned char flag); void Fl_Output_set_damage_area( Fl_Output *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Output_clear_damage(Fl_Output *self); void *Fl_Output_as_window(Fl_Output *self); void *Fl_Output_as_group(Fl_Output *self); void Fl_Output_set_deimage(Fl_Output *, void *); const void *Fl_Output_deimage(const Fl_Output *); void Fl_Output_set_callback(Fl_Output *, Fl_Callback *, void *); int Fl_Output_visible(const Fl_Output *self); int Fl_Output_visible_r(const Fl_Output *self); unsigned int Fl_Output_active(const Fl_Output *self); int Fl_Output_active_r(const Fl_Output *self); Fl_Callback *Fl_Output_callback(const Fl_Output *self); void Fl_Output_set_deletion_callback( Fl_Output *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Output *Fl_Output_from_dyn_ptr(Fl_Widget *ptr); Fl_Output *Fl_Output_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Output_super_draw(Fl_Widget *ptr, int flag); void Fl_Output_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Output_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Output_set_value(Fl_Output *, const char *); const char *Fl_Output_value(Fl_Output *); int Fl_Output_maximum_size(Fl_Output *); void Fl_Output_set_maximum_size(Fl_Output *, int m); int Fl_Output_position(Fl_Output *); int Fl_Output_set_position(Fl_Output *, int p); int Fl_Output_set_mark(Fl_Output *, int m); int Fl_Output_mark(Fl_Output *); int Fl_Output_replace(Fl_Output *, int b, int e, const char *text, int ilen); int Fl_Output_insert(Fl_Output *, const char *t, int l); int Fl_Output_append(Fl_Output *, const char *t, int l, char keep_selection); int Fl_Output_copy(Fl_Output *, int clipboard); int Fl_Output_undo(Fl_Output *); int Fl_Output_copy_cuts(Fl_Output *); unsigned int Fl_Output_cursor_color(const Fl_Output *); void Fl_Output_set_cursor_color(Fl_Output *, unsigned int s); int Fl_Output_text_font(Fl_Output *); void Fl_Output_set_text_font(Fl_Output *, int s); unsigned int Fl_Output_text_color(Fl_Output *); void Fl_Output_set_text_color(Fl_Output *, unsigned int s); int Fl_Output_text_size(Fl_Output *); void Fl_Output_set_text_size(Fl_Output *, int s); int Fl_Output_readonly(Fl_Output *); void Fl_Output_set_readonly(Fl_Output *, int boolean); int Fl_Output_wrap(Fl_Output *); void Fl_Output_set_wrap(Fl_Output *, int boolean); void Fl_Output_set_tab_nav(Fl_Output *, int flag); int Fl_Output_tab_nav(const Fl_Output *);

typedef struct Fl_Multiline_Output Fl_Multiline_Output; Fl_Multiline_Output *Fl_Multiline_Output_new( int x, int y, int width, int height, const char *title ); int Fl_Multiline_Output_x(Fl_Multiline_Output *); int Fl_Multiline_Output_y(Fl_Multiline_Output *); int Fl_Multiline_Output_width(Fl_Multiline_Output *); int Fl_Multiline_Output_height(Fl_Multiline_Output *); const char *Fl_Multiline_Output_label(Fl_Multiline_Output *); void Fl_Multiline_Output_set_label(Fl_Multiline_Output *, const char *title); void Fl_Multiline_Output_redraw(Fl_Multiline_Output *); void Fl_Multiline_Output_show(Fl_Multiline_Output *); void Fl_Multiline_Output_hide(Fl_Multiline_Output *); void Fl_Multiline_Output_activate(Fl_Multiline_Output *); void Fl_Multiline_Output_deactivate(Fl_Multiline_Output *); void Fl_Multiline_Output_redraw_label(Fl_Multiline_Output *); void Fl_Multiline_Output_resize(Fl_Multiline_Output *, int x, int y, int width, int height); void Fl_Multiline_Output_widget_resize( Fl_Multiline_Output *, int x, int y, int width, int height ); const char *Fl_Multiline_Output_tooltip(Fl_Multiline_Output *); void Fl_Multiline_Output_set_tooltip(Fl_Multiline_Output *, const char *txt); int Fl_Multiline_Output_get_type(Fl_Multiline_Output *); void Fl_Multiline_Output_set_type(Fl_Multiline_Output *, int typ); unsigned int Fl_Multiline_Output_color(Fl_Multiline_Output *); void Fl_Multiline_Output_set_color(Fl_Multiline_Output *, unsigned int color); void Fl_Multiline_Output_measure_label(const Fl_Multiline_Output *, int *, int *); unsigned int Fl_Multiline_Output_label_color(Fl_Multiline_Output *); void Fl_Multiline_Output_set_label_color(Fl_Multiline_Output *, unsigned int color); int Fl_Multiline_Output_label_font(Fl_Multiline_Output *); void Fl_Multiline_Output_set_label_font(Fl_Multiline_Output *, int font); int Fl_Multiline_Output_label_size(Fl_Multiline_Output *); void Fl_Multiline_Output_set_label_size(Fl_Multiline_Output *, int sz); int Fl_Multiline_Output_label_type(Fl_Multiline_Output *); void Fl_Multiline_Output_set_label_type(Fl_Multiline_Output *, int typ); int Fl_Multiline_Output_box(Fl_Multiline_Output *); void Fl_Multiline_Output_set_box(Fl_Multiline_Output *, int typ); int Fl_Multiline_Output_changed(Fl_Multiline_Output *); void Fl_Multiline_Output_set_changed(Fl_Multiline_Output *); void Fl_Multiline_Output_clear_changed(Fl_Multiline_Output *); int Fl_Multiline_Output_align(Fl_Multiline_Output *); void Fl_Multiline_Output_set_align(Fl_Multiline_Output *, int typ); void Fl_Multiline_Output_delete(Fl_Multiline_Output *); void Fl_Multiline_Output_set_image(Fl_Multiline_Output *, void *); void Fl_Multiline_Output_handle( Fl_Multiline_Output *self, custom_handler_callback cb, void *data ); int Fl_Multiline_Output_handle_event(Fl_Multiline_Output *self, int event); void Fl_Multiline_Output_draw(Fl_Multiline_Output *self, custom_draw_callback cb, void *data); void Fl_Multiline_Output_resize_callback( Fl_Multiline_Output *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Multiline_Output_set_when(Fl_Multiline_Output *, int); int Fl_Multiline_Output_when(const Fl_Multiline_Output *); const void *Fl_Multiline_Output_image(const Fl_Multiline_Output *); void *Fl_Multiline_Output_parent(const Fl_Multiline_Output *self); unsigned int Fl_Multiline_Output_selection_color(Fl_Multiline_Output *); void Fl_Multiline_Output_set_selection_color(Fl_Multiline_Output *, unsigned int color); void Fl_Multiline_Output_do_callback(Fl_Multiline_Output *); int Fl_Multiline_Output_inside(const Fl_Multiline_Output *self, void *); void *Fl_Multiline_Output_window(const Fl_Multiline_Output *); void *Fl_Multiline_Output_top_window(const Fl_Multiline_Output *); int Fl_Multiline_Output_takes_events(const Fl_Multiline_Output *); void *Fl_Multiline_Output_user_data(const Fl_Multiline_Output *); int Fl_Multiline_Output_take_focus(Fl_Multiline_Output *self); void Fl_Multiline_Output_set_visible_focus(Fl_Multiline_Output *self); void Fl_Multiline_Output_clear_visible_focus(Fl_Multiline_Output *self); void Fl_Multiline_Output_visible_focus(Fl_Multiline_Output *self, int v); unsigned int Fl_Multiline_Output_has_visible_focus(Fl_Multiline_Output *self); void Fl_Multiline_Output_set_user_data(Fl_Multiline_Output *, void *data); void *Fl_Multiline_Output_draw_data(const Fl_Multiline_Output *self); void *Fl_Multiline_Output_handle_data(const Fl_Multiline_Output *self); void Fl_Multiline_Output_set_draw_data(Fl_Multiline_Output *self, void *data); void Fl_Multiline_Output_set_handle_data(Fl_Multiline_Output *self, void *data); unsigned char Fl_Multiline_Output_damage(const Fl_Multiline_Output *self); void Fl_Multiline_Output_set_damage(Fl_Multiline_Output *self, unsigned char flag); void Fl_Multiline_Output_set_damage_area( Fl_Multiline_Output *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Multiline_Output_clear_damage(Fl_Multiline_Output *self); void *Fl_Multiline_Output_as_window(Fl_Multiline_Output *self); void *Fl_Multiline_Output_as_group(Fl_Multiline_Output *self); void Fl_Multiline_Output_set_deimage(Fl_Multiline_Output *, void *); const void *Fl_Multiline_Output_deimage(const Fl_Multiline_Output *); void Fl_Multiline_Output_set_callback(Fl_Multiline_Output *, Fl_Callback *, void *); int Fl_Multiline_Output_visible(const Fl_Multiline_Output *self); int Fl_Multiline_Output_visible_r(const Fl_Multiline_Output *self); unsigned int Fl_Multiline_Output_active(const Fl_Multiline_Output *self); int Fl_Multiline_Output_active_r(const Fl_Multiline_Output *self); Fl_Callback *Fl_Multiline_Output_callback(const Fl_Multiline_Output *self); void Fl_Multiline_Output_set_deletion_callback( Fl_Multiline_Output *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Multiline_Output *Fl_Multiline_Output_from_dyn_ptr(Fl_Widget *ptr); Fl_Multiline_Output *Fl_Multiline_Output_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Multiline_Output_super_draw(Fl_Widget *ptr, int flag); void Fl_Multiline_Output_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Multiline_Output_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Multiline_Output_set_value(Fl_Multiline_Output *, const char *); const char *Fl_Multiline_Output_value(Fl_Multiline_Output *); int Fl_Multiline_Output_maximum_size(Fl_Multiline_Output *); void Fl_Multiline_Output_set_maximum_size(Fl_Multiline_Output *, int m); int Fl_Multiline_Output_position(Fl_Multiline_Output *); int Fl_Multiline_Output_set_position(Fl_Multiline_Output *, int p); int Fl_Multiline_Output_set_mark(Fl_Multiline_Output *, int m); int Fl_Multiline_Output_mark(Fl_Multiline_Output *); int Fl_Multiline_Output_replace(Fl_Multiline_Output *, int b, int e, const char *text, int ilen); int Fl_Multiline_Output_insert(Fl_Multiline_Output *, const char *t, int l); int Fl_Multiline_Output_append(Fl_Multiline_Output *, const char *t, int l, char keep_selection); int Fl_Multiline_Output_copy(Fl_Multiline_Output *, int clipboard); int Fl_Multiline_Output_undo(Fl_Multiline_Output *); int Fl_Multiline_Output_copy_cuts(Fl_Multiline_Output *); unsigned int Fl_Multiline_Output_cursor_color(const Fl_Multiline_Output *); void Fl_Multiline_Output_set_cursor_color(Fl_Multiline_Output *, unsigned int s); int Fl_Multiline_Output_text_font(Fl_Multiline_Output *); void Fl_Multiline_Output_set_text_font(Fl_Multiline_Output *, int s); unsigned int Fl_Multiline_Output_text_color(Fl_Multiline_Output *); void Fl_Multiline_Output_set_text_color(Fl_Multiline_Output *, unsigned int s); int Fl_Multiline_Output_text_size(Fl_Multiline_Output *); void Fl_Multiline_Output_set_text_size(Fl_Multiline_Output *, int s); int Fl_Multiline_Output_readonly(Fl_Multiline_Output *); void Fl_Multiline_Output_set_readonly(Fl_Multiline_Output *, int boolean); int Fl_Multiline_Output_wrap(Fl_Multiline_Output *); void Fl_Multiline_Output_set_wrap(Fl_Multiline_Output *, int boolean); void Fl_Multiline_Output_set_tab_nav(Fl_Multiline_Output *, int flag); int Fl_Multiline_Output_tab_nav(const Fl_Multiline_Output *);
void Fl_mutex_lock(void);
void Fl_mutex_unlock(void);

typedef struct Fl_Menu_Item Fl_Menu_Item;

typedef struct Fl_Menu_Bar Fl_Menu_Bar; Fl_Menu_Bar *Fl_Menu_Bar_new( int x, int y, int width, int height, const char *title ); int Fl_Menu_Bar_x(Fl_Menu_Bar *); int Fl_Menu_Bar_y(Fl_Menu_Bar *); int Fl_Menu_Bar_width(Fl_Menu_Bar *); int Fl_Menu_Bar_height(Fl_Menu_Bar *); const char *Fl_Menu_Bar_label(Fl_Menu_Bar *); void Fl_Menu_Bar_set_label(Fl_Menu_Bar *, const char *title); void Fl_Menu_Bar_redraw(Fl_Menu_Bar *); void Fl_Menu_Bar_show(Fl_Menu_Bar *); void Fl_Menu_Bar_hide(Fl_Menu_Bar *); void Fl_Menu_Bar_activate(Fl_Menu_Bar *); void Fl_Menu_Bar_deactivate(Fl_Menu_Bar *); void Fl_Menu_Bar_redraw_label(Fl_Menu_Bar *); void Fl_Menu_Bar_resize(Fl_Menu_Bar *, int x, int y, int width, int height); void Fl_Menu_Bar_widget_resize( Fl_Menu_Bar *, int x, int y, int width, int height ); const char *Fl_Menu_Bar_tooltip(Fl_Menu_Bar *); void Fl_Menu_Bar_set_tooltip(Fl_Menu_Bar *, const char *txt); int Fl_Menu_Bar_get_type(Fl_Menu_Bar *); void Fl_Menu_Bar_set_type(Fl_Menu_Bar *, int typ); unsigned int Fl_Menu_Bar_color(Fl_Menu_Bar *); void Fl_Menu_Bar_set_color(Fl_Menu_Bar *, unsigned int color); void Fl_Menu_Bar_measure_label(const Fl_Menu_Bar *, int *, int *); unsigned int Fl_Menu_Bar_label_color(Fl_Menu_Bar *); void Fl_Menu_Bar_set_label_color(Fl_Menu_Bar *, unsigned int color); int Fl_Menu_Bar_label_font(Fl_Menu_Bar *); void Fl_Menu_Bar_set_label_font(Fl_Menu_Bar *, int font); int Fl_Menu_Bar_label_size(Fl_Menu_Bar *); void Fl_Menu_Bar_set_label_size(Fl_Menu_Bar *, int sz); int Fl_Menu_Bar_label_type(Fl_Menu_Bar *); void Fl_Menu_Bar_set_label_type(Fl_Menu_Bar *, int typ); int Fl_Menu_Bar_box(Fl_Menu_Bar *); void Fl_Menu_Bar_set_box(Fl_Menu_Bar *, int typ); int Fl_Menu_Bar_changed(Fl_Menu_Bar *); void Fl_Menu_Bar_set_changed(Fl_Menu_Bar *); void Fl_Menu_Bar_clear_changed(Fl_Menu_Bar *); int Fl_Menu_Bar_align(Fl_Menu_Bar *); void Fl_Menu_Bar_set_align(Fl_Menu_Bar *, int typ); void Fl_Menu_Bar_delete(Fl_Menu_Bar *); void Fl_Menu_Bar_set_image(Fl_Menu_Bar *, void *); void Fl_Menu_Bar_handle( Fl_Menu_Bar *self, custom_handler_callback cb, void *data ); int Fl_Menu_Bar_handle_event(Fl_Menu_Bar *self, int event); void Fl_Menu_Bar_draw(Fl_Menu_Bar *self, custom_draw_callback cb, void *data); void Fl_Menu_Bar_resize_callback( Fl_Menu_Bar *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Menu_Bar_set_when(Fl_Menu_Bar *, int); int Fl_Menu_Bar_when(const Fl_Menu_Bar *); const void *Fl_Menu_Bar_image(const Fl_Menu_Bar *); void *Fl_Menu_Bar_parent(const Fl_Menu_Bar *self); unsigned int Fl_Menu_Bar_selection_color(Fl_Menu_Bar *); void Fl_Menu_Bar_set_selection_color(Fl_Menu_Bar *, unsigned int color); void Fl_Menu_Bar_do_callback(Fl_Menu_Bar *); int Fl_Menu_Bar_inside(const Fl_Menu_Bar *self, void *); void *Fl_Menu_Bar_window(const Fl_Menu_Bar *); void *Fl_Menu_Bar_top_window(const Fl_Menu_Bar *); int Fl_Menu_Bar_takes_events(const Fl_Menu_Bar *); void *Fl_Menu_Bar_user_data(const Fl_Menu_Bar *); int Fl_Menu_Bar_take_focus(Fl_Menu_Bar *self); void Fl_Menu_Bar_set_visible_focus(Fl_Menu_Bar *self); void Fl_Menu_Bar_clear_visible_focus(Fl_Menu_Bar *self); void Fl_Menu_Bar_visible_focus(Fl_Menu_Bar *self, int v); unsigned int Fl_Menu_Bar_has_visible_focus(Fl_Menu_Bar *self); void Fl_Menu_Bar_set_user_data(Fl_Menu_Bar *, void *data); void *Fl_Menu_Bar_draw_data(const Fl_Menu_Bar *self); void *Fl_Menu_Bar_handle_data(const Fl_Menu_Bar *self); void Fl_Menu_Bar_set_draw_data(Fl_Menu_Bar *self, void *data); void Fl_Menu_Bar_set_handle_data(Fl_Menu_Bar *self, void *data); unsigned char Fl_Menu_Bar_damage(const Fl_Menu_Bar *self); void Fl_Menu_Bar_set_damage(Fl_Menu_Bar *self, unsigned char flag); void Fl_Menu_Bar_set_damage_area( Fl_Menu_Bar *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Menu_Bar_clear_damage(Fl_Menu_Bar *self); void *Fl_Menu_Bar_as_window(Fl_Menu_Bar *self); void *Fl_Menu_Bar_as_group(Fl_Menu_Bar *self); void Fl_Menu_Bar_set_deimage(Fl_Menu_Bar *, void *); const void *Fl_Menu_Bar_deimage(const Fl_Menu_Bar *); void Fl_Menu_Bar_set_callback(Fl_Menu_Bar *, Fl_Callback *, void *); int Fl_Menu_Bar_visible(const Fl_Menu_Bar *self); int Fl_Menu_Bar_visible_r(const Fl_Menu_Bar *self); unsigned int Fl_Menu_Bar_active(const Fl_Menu_Bar *self); int Fl_Menu_Bar_active_r(const Fl_Menu_Bar *self); Fl_Callback *Fl_Menu_Bar_callback(const Fl_Menu_Bar *self); void Fl_Menu_Bar_set_deletion_callback( Fl_Menu_Bar *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Menu_Bar *Fl_Menu_Bar_from_dyn_ptr(Fl_Widget *ptr); Fl_Menu_Bar *Fl_Menu_Bar_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Menu_Bar_super_draw(Fl_Widget *ptr, int flag); void Fl_Menu_Bar_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Menu_Bar_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Menu_Bar_add( Fl_Menu_Bar *, const char *name, int shortcut, Fl_Callback *, void *, int ); int Fl_Menu_Bar_insert( Fl_Menu_Bar *, int index, const char *name, int shortcut, Fl_Callback *, void *, int ); Fl_Menu_Item *Fl_Menu_Bar_get_item(Fl_Menu_Bar *, const char *name); int Fl_Menu_Bar_set_item(Fl_Menu_Bar *, Fl_Menu_Item *item); int Fl_Menu_Bar_text_font(Fl_Menu_Bar *); void Fl_Menu_Bar_set_text_font(Fl_Menu_Bar *, int c); int Fl_Menu_Bar_text_size(Fl_Menu_Bar *); void Fl_Menu_Bar_set_text_size(Fl_Menu_Bar *, int c); unsigned int Fl_Menu_Bar_text_color(Fl_Menu_Bar *); void Fl_Menu_Bar_set_text_color(Fl_Menu_Bar *, unsigned int c); int Fl_Menu_Bar_add_choice(Fl_Menu_Bar *, const char *); const char *Fl_Menu_Bar_get_choice(Fl_Menu_Bar *); int Fl_Menu_Bar_value(Fl_Menu_Bar *); int Fl_Menu_Bar_set_value(Fl_Menu_Bar *, int v); void Fl_Menu_Bar_clear(Fl_Menu_Bar *); int Fl_Menu_Bar_clear_submenu(Fl_Menu_Bar *, int index); int Fl_Menu_Bar_size(const Fl_Menu_Bar *); const char *Fl_Menu_Bar_text(const Fl_Menu_Bar *, int idx); const Fl_Menu_Item *Fl_Menu_Bar_at(const Fl_Menu_Bar *, int idx); void Fl_Menu_Bar_set_mode(Fl_Menu_Bar *self, int i, int fl); int Fl_Menu_Bar_mode(const Fl_Menu_Bar *self, int i); int Fl_Menu_Bar_find_index(const Fl_Menu_Bar *self, const char *label); const Fl_Menu_Item *Fl_Menu_Bar_menu(const Fl_Menu_Bar *self); void Fl_Menu_Bar_set_menu(Fl_Menu_Bar *self, const Fl_Menu_Item *item); void Fl_Menu_Bar_remove(Fl_Menu_Bar *self, int idx); void Fl_Menu_Bar_set_down_box(Fl_Menu_Bar *self, int box); int Fl_Menu_Bar_down_box(const Fl_Menu_Bar *self); void Fl_Menu_Bar_global(Fl_Menu_Bar *self); int Fl_Menu_Bar_item_pathname( const Fl_Menu_Bar *self, char *pathname, int pathnamelen, const Fl_Menu_Item *item ); void Fl_Menu_Bar_set_menu_box(Fl_Menu_Bar *self, int b); int Fl_Menu_Bar_menu_box(const Fl_Menu_Bar *self); Fl_Menu_Item *Fl_Menu_Bar_mvalue(const Fl_Menu_Bar *); Fl_Menu_Item *Fl_Menu_Bar_prev_mvalue(const Fl_Menu_Bar *);

typedef struct Fl_Menu_Button Fl_Menu_Button; Fl_Menu_Button *Fl_Menu_Button_new( int x, int y, int width, int height, const char *title ); int Fl_Menu_Button_x(Fl_Menu_Button *); int Fl_Menu_Button_y(Fl_Menu_Button *); int Fl_Menu_Button_width(Fl_Menu_Button *); int Fl_Menu_Button_height(Fl_Menu_Button *); const char *Fl_Menu_Button_label(Fl_Menu_Button *); void Fl_Menu_Button_set_label(Fl_Menu_Button *, const char *title); void Fl_Menu_Button_redraw(Fl_Menu_Button *); void Fl_Menu_Button_show(Fl_Menu_Button *); void Fl_Menu_Button_hide(Fl_Menu_Button *); void Fl_Menu_Button_activate(Fl_Menu_Button *); void Fl_Menu_Button_deactivate(Fl_Menu_Button *); void Fl_Menu_Button_redraw_label(Fl_Menu_Button *); void Fl_Menu_Button_resize(Fl_Menu_Button *, int x, int y, int width, int height); void Fl_Menu_Button_widget_resize( Fl_Menu_Button *, int x, int y, int width, int height ); const char *Fl_Menu_Button_tooltip(Fl_Menu_Button *); void Fl_Menu_Button_set_tooltip(Fl_Menu_Button *, const char *txt); int Fl_Menu_Button_get_type(Fl_Menu_Button *); void Fl_Menu_Button_set_type(Fl_Menu_Button *, int typ); unsigned int Fl_Menu_Button_color(Fl_Menu_Button *); void Fl_Menu_Button_set_color(Fl_Menu_Button *, unsigned int color); void Fl_Menu_Button_measure_label(const Fl_Menu_Button *, int *, int *); unsigned int Fl_Menu_Button_label_color(Fl_Menu_Button *); void Fl_Menu_Button_set_label_color(Fl_Menu_Button *, unsigned int color); int Fl_Menu_Button_label_font(Fl_Menu_Button *); void Fl_Menu_Button_set_label_font(Fl_Menu_Button *, int font); int Fl_Menu_Button_label_size(Fl_Menu_Button *); void Fl_Menu_Button_set_label_size(Fl_Menu_Button *, int sz); int Fl_Menu_Button_label_type(Fl_Menu_Button *); void Fl_Menu_Button_set_label_type(Fl_Menu_Button *, int typ); int Fl_Menu_Button_box(Fl_Menu_Button *); void Fl_Menu_Button_set_box(Fl_Menu_Button *, int typ); int Fl_Menu_Button_changed(Fl_Menu_Button *); void Fl_Menu_Button_set_changed(Fl_Menu_Button *); void Fl_Menu_Button_clear_changed(Fl_Menu_Button *); int Fl_Menu_Button_align(Fl_Menu_Button *); void Fl_Menu_Button_set_align(Fl_Menu_Button *, int typ); void Fl_Menu_Button_delete(Fl_Menu_Button *); void Fl_Menu_Button_set_image(Fl_Menu_Button *, void *); void Fl_Menu_Button_handle( Fl_Menu_Button *self, custom_handler_callback cb, void *data ); int Fl_Menu_Button_handle_event(Fl_Menu_Button *self, int event); void Fl_Menu_Button_draw(Fl_Menu_Button *self, custom_draw_callback cb, void *data); void Fl_Menu_Button_resize_callback( Fl_Menu_Button *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Menu_Button_set_when(Fl_Menu_Button *, int); int Fl_Menu_Button_when(const Fl_Menu_Button *); const void *Fl_Menu_Button_image(const Fl_Menu_Button *); void *Fl_Menu_Button_parent(const Fl_Menu_Button *self); unsigned int Fl_Menu_Button_selection_color(Fl_Menu_Button *); void Fl_Menu_Button_set_selection_color(Fl_Menu_Button *, unsigned int color); void Fl_Menu_Button_do_callback(Fl_Menu_Button *); int Fl_Menu_Button_inside(const Fl_Menu_Button *self, void *); void *Fl_Menu_Button_window(const Fl_Menu_Button *); void *Fl_Menu_Button_top_window(const Fl_Menu_Button *); int Fl_Menu_Button_takes_events(const Fl_Menu_Button *); void *Fl_Menu_Button_user_data(const Fl_Menu_Button *); int Fl_Menu_Button_take_focus(Fl_Menu_Button *self); void Fl_Menu_Button_set_visible_focus(Fl_Menu_Button *self); void Fl_Menu_Button_clear_visible_focus(Fl_Menu_Button *self); void Fl_Menu_Button_visible_focus(Fl_Menu_Button *self, int v); unsigned int Fl_Menu_Button_has_visible_focus(Fl_Menu_Button *self); void Fl_Menu_Button_set_user_data(Fl_Menu_Button *, void *data); void *Fl_Menu_Button_draw_data(const Fl_Menu_Button *self); void *Fl_Menu_Button_handle_data(const Fl_Menu_Button *self); void Fl_Menu_Button_set_draw_data(Fl_Menu_Button *self, void *data); void Fl_Menu_Button_set_handle_data(Fl_Menu_Button *self, void *data); unsigned char Fl_Menu_Button_damage(const Fl_Menu_Button *self); void Fl_Menu_Button_set_damage(Fl_Menu_Button *self, unsigned char flag); void Fl_Menu_Button_set_damage_area( Fl_Menu_Button *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Menu_Button_clear_damage(Fl_Menu_Button *self); void *Fl_Menu_Button_as_window(Fl_Menu_Button *self); void *Fl_Menu_Button_as_group(Fl_Menu_Button *self); void Fl_Menu_Button_set_deimage(Fl_Menu_Button *, void *); const void *Fl_Menu_Button_deimage(const Fl_Menu_Button *); void Fl_Menu_Button_set_callback(Fl_Menu_Button *, Fl_Callback *, void *); int Fl_Menu_Button_visible(const Fl_Menu_Button *self); int Fl_Menu_Button_visible_r(const Fl_Menu_Button *self); unsigned int Fl_Menu_Button_active(const Fl_Menu_Button *self); int Fl_Menu_Button_active_r(const Fl_Menu_Button *self); Fl_Callback *Fl_Menu_Button_callback(const Fl_Menu_Button *self); void Fl_Menu_Button_set_deletion_callback( Fl_Menu_Button *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Menu_Button *Fl_Menu_Button_from_dyn_ptr(Fl_Widget *ptr); Fl_Menu_Button *Fl_Menu_Button_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Menu_Button_super_draw(Fl_Widget *ptr, int flag); void Fl_Menu_Button_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Menu_Button_super_handle_first(Fl_Widget *ptr, int flag);

const Fl_Menu_Item *Fl_Menu_Button_popup(Fl_Menu_Button *self);

int Fl_Menu_Button_add( Fl_Menu_Button *, const char *name, int shortcut, Fl_Callback *, void *, int ); int Fl_Menu_Button_insert( Fl_Menu_Button *, int index, const char *name, int shortcut, Fl_Callback *, void *, int ); Fl_Menu_Item *Fl_Menu_Button_get_item(Fl_Menu_Button *, const char *name); int Fl_Menu_Button_set_item(Fl_Menu_Button *, Fl_Menu_Item *item); int Fl_Menu_Button_text_font(Fl_Menu_Button *); void Fl_Menu_Button_set_text_font(Fl_Menu_Button *, int c); int Fl_Menu_Button_text_size(Fl_Menu_Button *); void Fl_Menu_Button_set_text_size(Fl_Menu_Button *, int c); unsigned int Fl_Menu_Button_text_color(Fl_Menu_Button *); void Fl_Menu_Button_set_text_color(Fl_Menu_Button *, unsigned int c); int Fl_Menu_Button_add_choice(Fl_Menu_Button *, const char *); const char *Fl_Menu_Button_get_choice(Fl_Menu_Button *); int Fl_Menu_Button_value(Fl_Menu_Button *); int Fl_Menu_Button_set_value(Fl_Menu_Button *, int v); void Fl_Menu_Button_clear(Fl_Menu_Button *); int Fl_Menu_Button_clear_submenu(Fl_Menu_Button *, int index); int Fl_Menu_Button_size(const Fl_Menu_Button *); const char *Fl_Menu_Button_text(const Fl_Menu_Button *, int idx); const Fl_Menu_Item *Fl_Menu_Button_at(const Fl_Menu_Button *, int idx); void Fl_Menu_Button_set_mode(Fl_Menu_Button *self, int i, int fl); int Fl_Menu_Button_mode(const Fl_Menu_Button *self, int i); int Fl_Menu_Button_find_index(const Fl_Menu_Button *self, const char *label); const Fl_Menu_Item *Fl_Menu_Button_menu(const Fl_Menu_Button *self); void Fl_Menu_Button_set_menu(Fl_Menu_Button *self, const Fl_Menu_Item *item); void Fl_Menu_Button_remove(Fl_Menu_Button *self, int idx); void Fl_Menu_Button_set_down_box(Fl_Menu_Button *self, int box); int Fl_Menu_Button_down_box(const Fl_Menu_Button *self); void Fl_Menu_Button_global(Fl_Menu_Button *self); int Fl_Menu_Button_item_pathname( const Fl_Menu_Button *self, char *pathname, int pathnamelen, const Fl_Menu_Item *item ); void Fl_Menu_Button_set_menu_box(Fl_Menu_Button *self, int b); int Fl_Menu_Button_menu_box(const Fl_Menu_Button *self); Fl_Menu_Item *Fl_Menu_Button_mvalue(const Fl_Menu_Button *); Fl_Menu_Item *Fl_Menu_Button_prev_mvalue(const Fl_Menu_Button *);

typedef struct Fl_Choice Fl_Choice; Fl_Choice *Fl_Choice_new( int x, int y, int width, int height, const char *title ); int Fl_Choice_x(Fl_Choice *); int Fl_Choice_y(Fl_Choice *); int Fl_Choice_width(Fl_Choice *); int Fl_Choice_height(Fl_Choice *); const char *Fl_Choice_label(Fl_Choice *); void Fl_Choice_set_label(Fl_Choice *, const char *title); void Fl_Choice_redraw(Fl_Choice *); void Fl_Choice_show(Fl_Choice *); void Fl_Choice_hide(Fl_Choice *); void Fl_Choice_activate(Fl_Choice *); void Fl_Choice_deactivate(Fl_Choice *); void Fl_Choice_redraw_label(Fl_Choice *); void Fl_Choice_resize(Fl_Choice *, int x, int y, int width, int height); void Fl_Choice_widget_resize( Fl_Choice *, int x, int y, int width, int height ); const char *Fl_Choice_tooltip(Fl_Choice *); void Fl_Choice_set_tooltip(Fl_Choice *, const char *txt); int Fl_Choice_get_type(Fl_Choice *); void Fl_Choice_set_type(Fl_Choice *, int typ); unsigned int Fl_Choice_color(Fl_Choice *); void Fl_Choice_set_color(Fl_Choice *, unsigned int color); void Fl_Choice_measure_label(const Fl_Choice *, int *, int *); unsigned int Fl_Choice_label_color(Fl_Choice *); void Fl_Choice_set_label_color(Fl_Choice *, unsigned int color); int Fl_Choice_label_font(Fl_Choice *); void Fl_Choice_set_label_font(Fl_Choice *, int font); int Fl_Choice_label_size(Fl_Choice *); void Fl_Choice_set_label_size(Fl_Choice *, int sz); int Fl_Choice_label_type(Fl_Choice *); void Fl_Choice_set_label_type(Fl_Choice *, int typ); int Fl_Choice_box(Fl_Choice *); void Fl_Choice_set_box(Fl_Choice *, int typ); int Fl_Choice_changed(Fl_Choice *); void Fl_Choice_set_changed(Fl_Choice *); void Fl_Choice_clear_changed(Fl_Choice *); int Fl_Choice_align(Fl_Choice *); void Fl_Choice_set_align(Fl_Choice *, int typ); void Fl_Choice_delete(Fl_Choice *); void Fl_Choice_set_image(Fl_Choice *, void *); void Fl_Choice_handle( Fl_Choice *self, custom_handler_callback cb, void *data ); int Fl_Choice_handle_event(Fl_Choice *self, int event); void Fl_Choice_draw(Fl_Choice *self, custom_draw_callback cb, void *data); void Fl_Choice_resize_callback( Fl_Choice *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Choice_set_when(Fl_Choice *, int); int Fl_Choice_when(const Fl_Choice *); const void *Fl_Choice_image(const Fl_Choice *); void *Fl_Choice_parent(const Fl_Choice *self); unsigned int Fl_Choice_selection_color(Fl_Choice *); void Fl_Choice_set_selection_color(Fl_Choice *, unsigned int color); void Fl_Choice_do_callback(Fl_Choice *); int Fl_Choice_inside(const Fl_Choice *self, void *); void *Fl_Choice_window(const Fl_Choice *); void *Fl_Choice_top_window(const Fl_Choice *); int Fl_Choice_takes_events(const Fl_Choice *); void *Fl_Choice_user_data(const Fl_Choice *); int Fl_Choice_take_focus(Fl_Choice *self); void Fl_Choice_set_visible_focus(Fl_Choice *self); void Fl_Choice_clear_visible_focus(Fl_Choice *self); void Fl_Choice_visible_focus(Fl_Choice *self, int v); unsigned int Fl_Choice_has_visible_focus(Fl_Choice *self); void Fl_Choice_set_user_data(Fl_Choice *, void *data); void *Fl_Choice_draw_data(const Fl_Choice *self); void *Fl_Choice_handle_data(const Fl_Choice *self); void Fl_Choice_set_draw_data(Fl_Choice *self, void *data); void Fl_Choice_set_handle_data(Fl_Choice *self, void *data); unsigned char Fl_Choice_damage(const Fl_Choice *self); void Fl_Choice_set_damage(Fl_Choice *self, unsigned char flag); void Fl_Choice_set_damage_area( Fl_Choice *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Choice_clear_damage(Fl_Choice *self); void *Fl_Choice_as_window(Fl_Choice *self); void *Fl_Choice_as_group(Fl_Choice *self); void Fl_Choice_set_deimage(Fl_Choice *, void *); const void *Fl_Choice_deimage(const Fl_Choice *); void Fl_Choice_set_callback(Fl_Choice *, Fl_Callback *, void *); int Fl_Choice_visible(const Fl_Choice *self); int Fl_Choice_visible_r(const Fl_Choice *self); unsigned int Fl_Choice_active(const Fl_Choice *self); int Fl_Choice_active_r(const Fl_Choice *self); Fl_Callback *Fl_Choice_callback(const Fl_Choice *self); void Fl_Choice_set_deletion_callback( Fl_Choice *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Choice *Fl_Choice_from_dyn_ptr(Fl_Widget *ptr); Fl_Choice *Fl_Choice_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Choice_super_draw(Fl_Widget *ptr, int flag); void Fl_Choice_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Choice_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Choice_add( Fl_Choice *, const char *name, int shortcut, Fl_Callback *, void *, int ); int Fl_Choice_insert( Fl_Choice *, int index, const char *name, int shortcut, Fl_Callback *, void *, int ); Fl_Menu_Item *Fl_Choice_get_item(Fl_Choice *, const char *name); int Fl_Choice_set_item(Fl_Choice *, Fl_Menu_Item *item); int Fl_Choice_text_font(Fl_Choice *); void Fl_Choice_set_text_font(Fl_Choice *, int c); int Fl_Choice_text_size(Fl_Choice *); void Fl_Choice_set_text_size(Fl_Choice *, int c); unsigned int Fl_Choice_text_color(Fl_Choice *); void Fl_Choice_set_text_color(Fl_Choice *, unsigned int c); int Fl_Choice_add_choice(Fl_Choice *, const char *); const char *Fl_Choice_get_choice(Fl_Choice *); int Fl_Choice_value(Fl_Choice *); int Fl_Choice_set_value(Fl_Choice *, int v); void Fl_Choice_clear(Fl_Choice *); int Fl_Choice_clear_submenu(Fl_Choice *, int index); int Fl_Choice_size(const Fl_Choice *); const char *Fl_Choice_text(const Fl_Choice *, int idx); const Fl_Menu_Item *Fl_Choice_at(const Fl_Choice *, int idx); void Fl_Choice_set_mode(Fl_Choice *self, int i, int fl); int Fl_Choice_mode(const Fl_Choice *self, int i); int Fl_Choice_find_index(const Fl_Choice *self, const char *label); const Fl_Menu_Item *Fl_Choice_menu(const Fl_Choice *self); void Fl_Choice_set_menu(Fl_Choice *self, const Fl_Menu_Item *item); void Fl_Choice_remove(Fl_Choice *self, int idx); void Fl_Choice_set_down_box(Fl_Choice *self, int box); int Fl_Choice_down_box(const Fl_Choice *self); void Fl_Choice_global(Fl_Choice *self); int Fl_Choice_item_pathname( const Fl_Choice *self, char *pathname, int pathnamelen, const Fl_Menu_Item *item ); void Fl_Choice_set_menu_box(Fl_Choice *self, int b); int Fl_Choice_menu_box(const Fl_Choice *self); Fl_Menu_Item *Fl_Choice_mvalue(const Fl_Choice *); Fl_Menu_Item *Fl_Choice_prev_mvalue(const Fl_Choice *);

typedef struct Fl_Sys_Menu_Bar Fl_Sys_Menu_Bar; Fl_Sys_Menu_Bar *Fl_Sys_Menu_Bar_new( int x, int y, int width, int height, const char *title ); int Fl_Sys_Menu_Bar_x(Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_y(Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_width(Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_height(Fl_Sys_Menu_Bar *); const char *Fl_Sys_Menu_Bar_label(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_label(Fl_Sys_Menu_Bar *, const char *title); void Fl_Sys_Menu_Bar_redraw(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_show(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_hide(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_activate(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_deactivate(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_redraw_label(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_resize(Fl_Sys_Menu_Bar *, int x, int y, int width, int height); void Fl_Sys_Menu_Bar_widget_resize( Fl_Sys_Menu_Bar *, int x, int y, int width, int height ); const char *Fl_Sys_Menu_Bar_tooltip(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_tooltip(Fl_Sys_Menu_Bar *, const char *txt); int Fl_Sys_Menu_Bar_get_type(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_type(Fl_Sys_Menu_Bar *, int typ); unsigned int Fl_Sys_Menu_Bar_color(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_color(Fl_Sys_Menu_Bar *, unsigned int color); void Fl_Sys_Menu_Bar_measure_label(const Fl_Sys_Menu_Bar *, int *, int *); unsigned int Fl_Sys_Menu_Bar_label_color(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_label_color(Fl_Sys_Menu_Bar *, unsigned int color); int Fl_Sys_Menu_Bar_label_font(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_label_font(Fl_Sys_Menu_Bar *, int font); int Fl_Sys_Menu_Bar_label_size(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_label_size(Fl_Sys_Menu_Bar *, int sz); int Fl_Sys_Menu_Bar_label_type(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_label_type(Fl_Sys_Menu_Bar *, int typ); int Fl_Sys_Menu_Bar_box(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_box(Fl_Sys_Menu_Bar *, int typ); int Fl_Sys_Menu_Bar_changed(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_changed(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_clear_changed(Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_align(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_align(Fl_Sys_Menu_Bar *, int typ); void Fl_Sys_Menu_Bar_delete(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_image(Fl_Sys_Menu_Bar *, void *); void Fl_Sys_Menu_Bar_handle( Fl_Sys_Menu_Bar *self, custom_handler_callback cb, void *data ); int Fl_Sys_Menu_Bar_handle_event(Fl_Sys_Menu_Bar *self, int event); void Fl_Sys_Menu_Bar_draw(Fl_Sys_Menu_Bar *self, custom_draw_callback cb, void *data); void Fl_Sys_Menu_Bar_resize_callback( Fl_Sys_Menu_Bar *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Sys_Menu_Bar_set_when(Fl_Sys_Menu_Bar *, int); int Fl_Sys_Menu_Bar_when(const Fl_Sys_Menu_Bar *); const void *Fl_Sys_Menu_Bar_image(const Fl_Sys_Menu_Bar *); void *Fl_Sys_Menu_Bar_parent(const Fl_Sys_Menu_Bar *self); unsigned int Fl_Sys_Menu_Bar_selection_color(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_selection_color(Fl_Sys_Menu_Bar *, unsigned int color); void Fl_Sys_Menu_Bar_do_callback(Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_inside(const Fl_Sys_Menu_Bar *self, void *); void *Fl_Sys_Menu_Bar_window(const Fl_Sys_Menu_Bar *); void *Fl_Sys_Menu_Bar_top_window(const Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_takes_events(const Fl_Sys_Menu_Bar *); void *Fl_Sys_Menu_Bar_user_data(const Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_take_focus(Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_set_visible_focus(Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_clear_visible_focus(Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_visible_focus(Fl_Sys_Menu_Bar *self, int v); unsigned int Fl_Sys_Menu_Bar_has_visible_focus(Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_set_user_data(Fl_Sys_Menu_Bar *, void *data); void *Fl_Sys_Menu_Bar_draw_data(const Fl_Sys_Menu_Bar *self); void *Fl_Sys_Menu_Bar_handle_data(const Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_set_draw_data(Fl_Sys_Menu_Bar *self, void *data); void Fl_Sys_Menu_Bar_set_handle_data(Fl_Sys_Menu_Bar *self, void *data); unsigned char Fl_Sys_Menu_Bar_damage(const Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_set_damage(Fl_Sys_Menu_Bar *self, unsigned char flag); void Fl_Sys_Menu_Bar_set_damage_area( Fl_Sys_Menu_Bar *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Sys_Menu_Bar_clear_damage(Fl_Sys_Menu_Bar *self); void *Fl_Sys_Menu_Bar_as_window(Fl_Sys_Menu_Bar *self); void *Fl_Sys_Menu_Bar_as_group(Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_set_deimage(Fl_Sys_Menu_Bar *, void *); const void *Fl_Sys_Menu_Bar_deimage(const Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_callback(Fl_Sys_Menu_Bar *, Fl_Callback *, void *); int Fl_Sys_Menu_Bar_visible(const Fl_Sys_Menu_Bar *self); int Fl_Sys_Menu_Bar_visible_r(const Fl_Sys_Menu_Bar *self); unsigned int Fl_Sys_Menu_Bar_active(const Fl_Sys_Menu_Bar *self); int Fl_Sys_Menu_Bar_active_r(const Fl_Sys_Menu_Bar *self); Fl_Callback *Fl_Sys_Menu_Bar_callback(const Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_set_deletion_callback( Fl_Sys_Menu_Bar *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Sys_Menu_Bar *Fl_Sys_Menu_Bar_from_dyn_ptr(Fl_Widget *ptr); Fl_Sys_Menu_Bar *Fl_Sys_Menu_Bar_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Sys_Menu_Bar_super_draw(Fl_Widget *ptr, int flag); void Fl_Sys_Menu_Bar_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Sys_Menu_Bar_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Sys_Menu_Bar_set_window_menu_style(int style);

void Fl_Sys_Menu_Bar_about(Fl_Sys_Menu_Bar *self, Fl_Callback *cb, void *data);

int Fl_Sys_Menu_Bar_add( Fl_Sys_Menu_Bar *, const char *name, int shortcut, Fl_Callback *, void *, int ); int Fl_Sys_Menu_Bar_insert( Fl_Sys_Menu_Bar *, int index, const char *name, int shortcut, Fl_Callback *, void *, int ); Fl_Menu_Item *Fl_Sys_Menu_Bar_get_item(Fl_Sys_Menu_Bar *, const char *name); int Fl_Sys_Menu_Bar_set_item(Fl_Sys_Menu_Bar *, Fl_Menu_Item *item); int Fl_Sys_Menu_Bar_text_font(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_text_font(Fl_Sys_Menu_Bar *, int c); int Fl_Sys_Menu_Bar_text_size(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_text_size(Fl_Sys_Menu_Bar *, int c); unsigned int Fl_Sys_Menu_Bar_text_color(Fl_Sys_Menu_Bar *); void Fl_Sys_Menu_Bar_set_text_color(Fl_Sys_Menu_Bar *, unsigned int c); int Fl_Sys_Menu_Bar_add_choice(Fl_Sys_Menu_Bar *, const char *); const char *Fl_Sys_Menu_Bar_get_choice(Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_value(Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_set_value(Fl_Sys_Menu_Bar *, int v); void Fl_Sys_Menu_Bar_clear(Fl_Sys_Menu_Bar *); int Fl_Sys_Menu_Bar_clear_submenu(Fl_Sys_Menu_Bar *, int index); int Fl_Sys_Menu_Bar_size(const Fl_Sys_Menu_Bar *); const char *Fl_Sys_Menu_Bar_text(const Fl_Sys_Menu_Bar *, int idx); const Fl_Menu_Item *Fl_Sys_Menu_Bar_at(const Fl_Sys_Menu_Bar *, int idx); void Fl_Sys_Menu_Bar_set_mode(Fl_Sys_Menu_Bar *self, int i, int fl); int Fl_Sys_Menu_Bar_mode(const Fl_Sys_Menu_Bar *self, int i); int Fl_Sys_Menu_Bar_find_index(const Fl_Sys_Menu_Bar *self, const char *label); const Fl_Menu_Item *Fl_Sys_Menu_Bar_menu(const Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_set_menu(Fl_Sys_Menu_Bar *self, const Fl_Menu_Item *item); void Fl_Sys_Menu_Bar_remove(Fl_Sys_Menu_Bar *self, int idx); void Fl_Sys_Menu_Bar_set_down_box(Fl_Sys_Menu_Bar *self, int box); int Fl_Sys_Menu_Bar_down_box(const Fl_Sys_Menu_Bar *self); void Fl_Sys_Menu_Bar_global(Fl_Sys_Menu_Bar *self); int Fl_Sys_Menu_Bar_item_pathname( const Fl_Sys_Menu_Bar *self, char *pathname, int pathnamelen, const Fl_Menu_Item *item ); void Fl_Sys_Menu_Bar_set_menu_box(Fl_Sys_Menu_Bar *self, int b); int Fl_Sys_Menu_Bar_menu_box(const Fl_Sys_Menu_Bar *self); Fl_Menu_Item *Fl_Sys_Menu_Bar_mvalue(const Fl_Sys_Menu_Bar *); Fl_Menu_Item *Fl_Sys_Menu_Bar_prev_mvalue(const Fl_Sys_Menu_Bar *);

Fl_Menu_Item *Fl_Menu_Item_new(char **args, int sz);

Fl_Menu_Item *Fl_Menu_Item_new2(
    char **args,
    int *shortcuts,
    Fl_Callback **cb,
    int *flags,
    int *labeltype,
    int *labelfont,
    int *labelsize,
    unsigned int *labelcolor,
    int sz
);

void Fl_Menu_Item_delete(Fl_Menu_Item *self);

const Fl_Menu_Item *Fl_Menu_Item_popup(Fl_Menu_Item *self, int x, int y);

const Fl_Menu_Item *Fl_Menu_Item_pulldown(
    Fl_Menu_Item *self,
    int X,
    int Y,
    int W,
    int H,
    const Fl_Menu_Item *picked,
    const void *,
    const Fl_Menu_Item *title,
    int menubar
);

const char *Fl_Menu_Item_label(Fl_Menu_Item *);

void Fl_Menu_Item_set_label(Fl_Menu_Item *, const char *a);

int Fl_Menu_Item_label_type(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_type(Fl_Menu_Item *, int a);

unsigned int Fl_Menu_Item_label_color(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_color(Fl_Menu_Item *, unsigned int a);

int Fl_Menu_Item_label_font(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_font(Fl_Menu_Item *, int a);

int Fl_Menu_Item_label_size(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_size(Fl_Menu_Item *, int a);

int Fl_Menu_Item_value(Fl_Menu_Item *);

void Fl_Menu_Item_set(Fl_Menu_Item *);

void Fl_Menu_Item_clear(Fl_Menu_Item *);

int Fl_Menu_Item_visible(Fl_Menu_Item *);

void Fl_Menu_Item_show(Fl_Menu_Item *);

void Fl_Menu_Item_hide(Fl_Menu_Item *);

int Fl_Menu_Item_active(Fl_Menu_Item *);

void Fl_Menu_Item_activate(Fl_Menu_Item *);

void Fl_Menu_Item_deactivate(Fl_Menu_Item *);

int Fl_Menu_Item_submenu(const Fl_Menu_Item *self);

int Fl_Menu_Item_checkbox(const Fl_Menu_Item *self);

int Fl_Menu_Item_radio(const Fl_Menu_Item *self);

Fl_Menu_Item *Fl_Menu_Item_next(Fl_Menu_Item *self, int idx);

void Fl_Menu_Item_set_callback(Fl_Menu_Item *self, Fl_Callback *c, void *p);

void Fl_Menu_Item_do_callback(Fl_Menu_Item *self, Fl_Widget *w);

void *Fl_Menu_Item_user_data(const Fl_Menu_Item *);

void Fl_Menu_Item_set_user_data(Fl_Menu_Item *, void *data);

void Fl_Menu_Item_draw(
    const Fl_Menu_Item *self,
    int x,
    int y,
    int w,
    int h,
    const void *m,
    int selected
);

int Fl_Menu_Item_measure(const Fl_Menu_Item *self, int *hp, const void *m);

void Fl_Menu_Item_image(Fl_Menu_Item *self, void *image);

void Fl_Menu_Item_add_image(Fl_Menu_Item *self, void *image, int on_left);

int Fl_Menu_Item_children(const Fl_Menu_Item *self);

const Fl_Menu_Item *Fl_Menu_Item_at(const Fl_Menu_Item *self, int idx);

int Fl_Menu_Item_add(
    Fl_Menu_Item *self,
    const char *name,
    int shortcut,
    Fl_Callback *cb,
    void *data,
    int flag
);

int Fl_Menu_Item_insert(
    Fl_Menu_Item *self,
    int index,
    const char *name,
    int shortcut,
    Fl_Callback *cb,
    void *data,
    int flag
);

void Fl_Menu_Item_set_shortcut(Fl_Menu_Item *self, int shortcut);

void Fl_Menu_Item_set_flag(Fl_Menu_Item *self, int flag);

void Fl_mac_set_about(Fl_Callback *cb, void *user_data, int shortcut);

void Fl_Mac_App_Menu_custom_application_menu_items(const Fl_Menu_Item *m);

void Fl_Mac_App_Menu_set_about(const char *about);

void Fl_Mac_App_Menu_set_print(const char *print);

void Fl_Mac_App_Menu_set_print_no_titlebar(const char *print_no_titlebar);

void Fl_Mac_App_Menu_set_toggle_print_titlebar(const char *toggle_print_titlebar
);

void Fl_Mac_App_Menu_set_services(const char *services);

void Fl_Mac_App_Menu_set_hide(const char *hide);

void Fl_Mac_App_Menu_set_hide_others(const char *hide_others);

void Fl_Mac_App_Menu_set_show(const char *show);

void Fl_Mac_App_Menu_set_quit(const char *quit);
typedef struct Fl_Spinner Fl_Spinner; Fl_Spinner *Fl_Spinner_new( int x, int y, int width, int height, const char *title ); int Fl_Spinner_x(Fl_Spinner *); int Fl_Spinner_y(Fl_Spinner *); int Fl_Spinner_width(Fl_Spinner *); int Fl_Spinner_height(Fl_Spinner *); const char *Fl_Spinner_label(Fl_Spinner *); void Fl_Spinner_set_label(Fl_Spinner *, const char *title); void Fl_Spinner_redraw(Fl_Spinner *); void Fl_Spinner_show(Fl_Spinner *); void Fl_Spinner_hide(Fl_Spinner *); void Fl_Spinner_activate(Fl_Spinner *); void Fl_Spinner_deactivate(Fl_Spinner *); void Fl_Spinner_redraw_label(Fl_Spinner *); void Fl_Spinner_resize(Fl_Spinner *, int x, int y, int width, int height); void Fl_Spinner_widget_resize( Fl_Spinner *, int x, int y, int width, int height ); const char *Fl_Spinner_tooltip(Fl_Spinner *); void Fl_Spinner_set_tooltip(Fl_Spinner *, const char *txt); int Fl_Spinner_get_type(Fl_Spinner *); void Fl_Spinner_set_type(Fl_Spinner *, int typ); unsigned int Fl_Spinner_color(Fl_Spinner *); void Fl_Spinner_set_color(Fl_Spinner *, unsigned int color); void Fl_Spinner_measure_label(const Fl_Spinner *, int *, int *); unsigned int Fl_Spinner_label_color(Fl_Spinner *); void Fl_Spinner_set_label_color(Fl_Spinner *, unsigned int color); int Fl_Spinner_label_font(Fl_Spinner *); void Fl_Spinner_set_label_font(Fl_Spinner *, int font); int Fl_Spinner_label_size(Fl_Spinner *); void Fl_Spinner_set_label_size(Fl_Spinner *, int sz); int Fl_Spinner_label_type(Fl_Spinner *); void Fl_Spinner_set_label_type(Fl_Spinner *, int typ); int Fl_Spinner_box(Fl_Spinner *); void Fl_Spinner_set_box(Fl_Spinner *, int typ); int Fl_Spinner_changed(Fl_Spinner *); void Fl_Spinner_set_changed(Fl_Spinner *); void Fl_Spinner_clear_changed(Fl_Spinner *); int Fl_Spinner_align(Fl_Spinner *); void Fl_Spinner_set_align(Fl_Spinner *, int typ); void Fl_Spinner_delete(Fl_Spinner *); void Fl_Spinner_set_image(Fl_Spinner *, void *); void Fl_Spinner_handle( Fl_Spinner *self, custom_handler_callback cb, void *data ); int Fl_Spinner_handle_event(Fl_Spinner *self, int event); void Fl_Spinner_draw(Fl_Spinner *self, custom_draw_callback cb, void *data); void Fl_Spinner_resize_callback( Fl_Spinner *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Spinner_set_when(Fl_Spinner *, int); int Fl_Spinner_when(const Fl_Spinner *); const void *Fl_Spinner_image(const Fl_Spinner *); void *Fl_Spinner_parent(const Fl_Spinner *self); unsigned int Fl_Spinner_selection_color(Fl_Spinner *); void Fl_Spinner_set_selection_color(Fl_Spinner *, unsigned int color); void Fl_Spinner_do_callback(Fl_Spinner *); int Fl_Spinner_inside(const Fl_Spinner *self, void *); void *Fl_Spinner_window(const Fl_Spinner *); void *Fl_Spinner_top_window(const Fl_Spinner *); int Fl_Spinner_takes_events(const Fl_Spinner *); void *Fl_Spinner_user_data(const Fl_Spinner *); int Fl_Spinner_take_focus(Fl_Spinner *self); void Fl_Spinner_set_visible_focus(Fl_Spinner *self); void Fl_Spinner_clear_visible_focus(Fl_Spinner *self); void Fl_Spinner_visible_focus(Fl_Spinner *self, int v); unsigned int Fl_Spinner_has_visible_focus(Fl_Spinner *self); void Fl_Spinner_set_user_data(Fl_Spinner *, void *data); void *Fl_Spinner_draw_data(const Fl_Spinner *self); void *Fl_Spinner_handle_data(const Fl_Spinner *self); void Fl_Spinner_set_draw_data(Fl_Spinner *self, void *data); void Fl_Spinner_set_handle_data(Fl_Spinner *self, void *data); unsigned char Fl_Spinner_damage(const Fl_Spinner *self); void Fl_Spinner_set_damage(Fl_Spinner *self, unsigned char flag); void Fl_Spinner_set_damage_area( Fl_Spinner *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Spinner_clear_damage(Fl_Spinner *self); void *Fl_Spinner_as_window(Fl_Spinner *self); void *Fl_Spinner_as_group(Fl_Spinner *self); void Fl_Spinner_set_deimage(Fl_Spinner *, void *); const void *Fl_Spinner_deimage(const Fl_Spinner *); void Fl_Spinner_set_callback(Fl_Spinner *, Fl_Callback *, void *); int Fl_Spinner_visible(const Fl_Spinner *self); int Fl_Spinner_visible_r(const Fl_Spinner *self); unsigned int Fl_Spinner_active(const Fl_Spinner *self); int Fl_Spinner_active_r(const Fl_Spinner *self); Fl_Callback *Fl_Spinner_callback(const Fl_Spinner *self); void Fl_Spinner_set_deletion_callback( Fl_Spinner *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Spinner *Fl_Spinner_from_dyn_ptr(Fl_Widget *ptr); Fl_Spinner *Fl_Spinner_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Spinner_super_draw(Fl_Widget *ptr, int flag); void Fl_Spinner_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Spinner_super_handle_first(Fl_Widget *ptr, int flag);

double Fl_Spinner_minimum(Fl_Spinner *);

void Fl_Spinner_set_minimum(Fl_Spinner *, double a);

double Fl_Spinner_maximum(Fl_Spinner *);

void Fl_Spinner_set_maximum(Fl_Spinner *, double a);

void Fl_Spinner_set_range(Fl_Spinner *, double a, double b);

void Fl_Spinner_set_step(Fl_Spinner *, double a);

double Fl_Spinner_step(Fl_Spinner *);

int Fl_Spinner_maxsize(const Fl_Spinner *self);

void Fl_Spinner_set_maxsize(Fl_Spinner *self, int m);

int Fl_Spinner_text_font(const Fl_Spinner *self);

void Fl_Spinner_set_text_font(Fl_Spinner *self, int s);

int Fl_Spinner_text_size(const Fl_Spinner *self);

void Fl_Spinner_set_text_size(Fl_Spinner *self, int s);

unsigned int Fl_Spinner_text_color(const Fl_Spinner *self);

void Fl_Spinner_set_text_color(Fl_Spinner *self, unsigned int n);

double Fl_Spinner_value(const Fl_Spinner *);

void Fl_Spinner_set_value(Fl_Spinner *, double);

void Fl_Spinner_set_wrap(Fl_Spinner *self, int flag);

int Fl_Spinner_wrap(const Fl_Spinner *self);

typedef struct Fl_Clock Fl_Clock; Fl_Clock *Fl_Clock_new( int x, int y, int width, int height, const char *title ); int Fl_Clock_x(Fl_Clock *); int Fl_Clock_y(Fl_Clock *); int Fl_Clock_width(Fl_Clock *); int Fl_Clock_height(Fl_Clock *); const char *Fl_Clock_label(Fl_Clock *); void Fl_Clock_set_label(Fl_Clock *, const char *title); void Fl_Clock_redraw(Fl_Clock *); void Fl_Clock_show(Fl_Clock *); void Fl_Clock_hide(Fl_Clock *); void Fl_Clock_activate(Fl_Clock *); void Fl_Clock_deactivate(Fl_Clock *); void Fl_Clock_redraw_label(Fl_Clock *); void Fl_Clock_resize(Fl_Clock *, int x, int y, int width, int height); void Fl_Clock_widget_resize( Fl_Clock *, int x, int y, int width, int height ); const char *Fl_Clock_tooltip(Fl_Clock *); void Fl_Clock_set_tooltip(Fl_Clock *, const char *txt); int Fl_Clock_get_type(Fl_Clock *); void Fl_Clock_set_type(Fl_Clock *, int typ); unsigned int Fl_Clock_color(Fl_Clock *); void Fl_Clock_set_color(Fl_Clock *, unsigned int color); void Fl_Clock_measure_label(const Fl_Clock *, int *, int *); unsigned int Fl_Clock_label_color(Fl_Clock *); void Fl_Clock_set_label_color(Fl_Clock *, unsigned int color); int Fl_Clock_label_font(Fl_Clock *); void Fl_Clock_set_label_font(Fl_Clock *, int font); int Fl_Clock_label_size(Fl_Clock *); void Fl_Clock_set_label_size(Fl_Clock *, int sz); int Fl_Clock_label_type(Fl_Clock *); void Fl_Clock_set_label_type(Fl_Clock *, int typ); int Fl_Clock_box(Fl_Clock *); void Fl_Clock_set_box(Fl_Clock *, int typ); int Fl_Clock_changed(Fl_Clock *); void Fl_Clock_set_changed(Fl_Clock *); void Fl_Clock_clear_changed(Fl_Clock *); int Fl_Clock_align(Fl_Clock *); void Fl_Clock_set_align(Fl_Clock *, int typ); void Fl_Clock_delete(Fl_Clock *); void Fl_Clock_set_image(Fl_Clock *, void *); void Fl_Clock_handle( Fl_Clock *self, custom_handler_callback cb, void *data ); int Fl_Clock_handle_event(Fl_Clock *self, int event); void Fl_Clock_draw(Fl_Clock *self, custom_draw_callback cb, void *data); void Fl_Clock_resize_callback( Fl_Clock *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Clock_set_when(Fl_Clock *, int); int Fl_Clock_when(const Fl_Clock *); const void *Fl_Clock_image(const Fl_Clock *); void *Fl_Clock_parent(const Fl_Clock *self); unsigned int Fl_Clock_selection_color(Fl_Clock *); void Fl_Clock_set_selection_color(Fl_Clock *, unsigned int color); void Fl_Clock_do_callback(Fl_Clock *); int Fl_Clock_inside(const Fl_Clock *self, void *); void *Fl_Clock_window(const Fl_Clock *); void *Fl_Clock_top_window(const Fl_Clock *); int Fl_Clock_takes_events(const Fl_Clock *); void *Fl_Clock_user_data(const Fl_Clock *); int Fl_Clock_take_focus(Fl_Clock *self); void Fl_Clock_set_visible_focus(Fl_Clock *self); void Fl_Clock_clear_visible_focus(Fl_Clock *self); void Fl_Clock_visible_focus(Fl_Clock *self, int v); unsigned int Fl_Clock_has_visible_focus(Fl_Clock *self); void Fl_Clock_set_user_data(Fl_Clock *, void *data); void *Fl_Clock_draw_data(const Fl_Clock *self); void *Fl_Clock_handle_data(const Fl_Clock *self); void Fl_Clock_set_draw_data(Fl_Clock *self, void *data); void Fl_Clock_set_handle_data(Fl_Clock *self, void *data); unsigned char Fl_Clock_damage(const Fl_Clock *self); void Fl_Clock_set_damage(Fl_Clock *self, unsigned char flag); void Fl_Clock_set_damage_area( Fl_Clock *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Clock_clear_damage(Fl_Clock *self); void *Fl_Clock_as_window(Fl_Clock *self); void *Fl_Clock_as_group(Fl_Clock *self); void Fl_Clock_set_deimage(Fl_Clock *, void *); const void *Fl_Clock_deimage(const Fl_Clock *); void Fl_Clock_set_callback(Fl_Clock *, Fl_Callback *, void *); int Fl_Clock_visible(const Fl_Clock *self); int Fl_Clock_visible_r(const Fl_Clock *self); unsigned int Fl_Clock_active(const Fl_Clock *self); int Fl_Clock_active_r(const Fl_Clock *self); Fl_Callback *Fl_Clock_callback(const Fl_Clock *self); void Fl_Clock_set_deletion_callback( Fl_Clock *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Clock *Fl_Clock_from_dyn_ptr(Fl_Widget *ptr); Fl_Clock *Fl_Clock_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Clock_super_draw(Fl_Widget *ptr, int flag); void Fl_Clock_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Clock_super_handle_first(Fl_Widget *ptr, int flag);

typedef struct Fl_Chart Fl_Chart; Fl_Chart *Fl_Chart_new( int x, int y, int width, int height, const char *title ); int Fl_Chart_x(Fl_Chart *); int Fl_Chart_y(Fl_Chart *); int Fl_Chart_width(Fl_Chart *); int Fl_Chart_height(Fl_Chart *); const char *Fl_Chart_label(Fl_Chart *); void Fl_Chart_set_label(Fl_Chart *, const char *title); void Fl_Chart_redraw(Fl_Chart *); void Fl_Chart_show(Fl_Chart *); void Fl_Chart_hide(Fl_Chart *); void Fl_Chart_activate(Fl_Chart *); void Fl_Chart_deactivate(Fl_Chart *); void Fl_Chart_redraw_label(Fl_Chart *); void Fl_Chart_resize(Fl_Chart *, int x, int y, int width, int height); void Fl_Chart_widget_resize( Fl_Chart *, int x, int y, int width, int height ); const char *Fl_Chart_tooltip(Fl_Chart *); void Fl_Chart_set_tooltip(Fl_Chart *, const char *txt); int Fl_Chart_get_type(Fl_Chart *); void Fl_Chart_set_type(Fl_Chart *, int typ); unsigned int Fl_Chart_color(Fl_Chart *); void Fl_Chart_set_color(Fl_Chart *, unsigned int color); void Fl_Chart_measure_label(const Fl_Chart *, int *, int *); unsigned int Fl_Chart_label_color(Fl_Chart *); void Fl_Chart_set_label_color(Fl_Chart *, unsigned int color); int Fl_Chart_label_font(Fl_Chart *); void Fl_Chart_set_label_font(Fl_Chart *, int font); int Fl_Chart_label_size(Fl_Chart *); void Fl_Chart_set_label_size(Fl_Chart *, int sz); int Fl_Chart_label_type(Fl_Chart *); void Fl_Chart_set_label_type(Fl_Chart *, int typ); int Fl_Chart_box(Fl_Chart *); void Fl_Chart_set_box(Fl_Chart *, int typ); int Fl_Chart_changed(Fl_Chart *); void Fl_Chart_set_changed(Fl_Chart *); void Fl_Chart_clear_changed(Fl_Chart *); int Fl_Chart_align(Fl_Chart *); void Fl_Chart_set_align(Fl_Chart *, int typ); void Fl_Chart_delete(Fl_Chart *); void Fl_Chart_set_image(Fl_Chart *, void *); void Fl_Chart_handle( Fl_Chart *self, custom_handler_callback cb, void *data ); int Fl_Chart_handle_event(Fl_Chart *self, int event); void Fl_Chart_draw(Fl_Chart *self, custom_draw_callback cb, void *data); void Fl_Chart_resize_callback( Fl_Chart *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Chart_set_when(Fl_Chart *, int); int Fl_Chart_when(const Fl_Chart *); const void *Fl_Chart_image(const Fl_Chart *); void *Fl_Chart_parent(const Fl_Chart *self); unsigned int Fl_Chart_selection_color(Fl_Chart *); void Fl_Chart_set_selection_color(Fl_Chart *, unsigned int color); void Fl_Chart_do_callback(Fl_Chart *); int Fl_Chart_inside(const Fl_Chart *self, void *); void *Fl_Chart_window(const Fl_Chart *); void *Fl_Chart_top_window(const Fl_Chart *); int Fl_Chart_takes_events(const Fl_Chart *); void *Fl_Chart_user_data(const Fl_Chart *); int Fl_Chart_take_focus(Fl_Chart *self); void Fl_Chart_set_visible_focus(Fl_Chart *self); void Fl_Chart_clear_visible_focus(Fl_Chart *self); void Fl_Chart_visible_focus(Fl_Chart *self, int v); unsigned int Fl_Chart_has_visible_focus(Fl_Chart *self); void Fl_Chart_set_user_data(Fl_Chart *, void *data); void *Fl_Chart_draw_data(const Fl_Chart *self); void *Fl_Chart_handle_data(const Fl_Chart *self); void Fl_Chart_set_draw_data(Fl_Chart *self, void *data); void Fl_Chart_set_handle_data(Fl_Chart *self, void *data); unsigned char Fl_Chart_damage(const Fl_Chart *self); void Fl_Chart_set_damage(Fl_Chart *self, unsigned char flag); void Fl_Chart_set_damage_area( Fl_Chart *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Chart_clear_damage(Fl_Chart *self); void *Fl_Chart_as_window(Fl_Chart *self); void *Fl_Chart_as_group(Fl_Chart *self); void Fl_Chart_set_deimage(Fl_Chart *, void *); const void *Fl_Chart_deimage(const Fl_Chart *); void Fl_Chart_set_callback(Fl_Chart *, Fl_Callback *, void *); int Fl_Chart_visible(const Fl_Chart *self); int Fl_Chart_visible_r(const Fl_Chart *self); unsigned int Fl_Chart_active(const Fl_Chart *self); int Fl_Chart_active_r(const Fl_Chart *self); Fl_Callback *Fl_Chart_callback(const Fl_Chart *self); void Fl_Chart_set_deletion_callback( Fl_Chart *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Chart *Fl_Chart_from_dyn_ptr(Fl_Widget *ptr); Fl_Chart *Fl_Chart_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Chart_super_draw(Fl_Widget *ptr, int flag); void Fl_Chart_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Chart_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Chart_clear(Fl_Chart *self);

void Fl_Chart_add(Fl_Chart *self, double val, const char *str, unsigned col);

void Fl_Chart_insert(
    Fl_Chart *self, int ind, double val, const char *str, unsigned col
);

void Fl_Chart_replace(
    Fl_Chart *self, int ind, double val, const char *str, unsigned col
);

void Fl_Chart_set_bounds(Fl_Chart *self, double a, double b);

int Fl_Chart_size(const Fl_Chart *self);

int Fl_Chart_maxsize(const Fl_Chart *self);

void Fl_Chart_set_maxsize(Fl_Chart *self, int m);

int Fl_Chart_text_font(const Fl_Chart *self);

void Fl_Chart_set_text_font(Fl_Chart *self, int s);

int Fl_Chart_text_size(const Fl_Chart *self);

void Fl_Chart_set_text_size(Fl_Chart *self, int s);

unsigned int Fl_Chart_text_color(const Fl_Chart *self);

void Fl_Chart_set_text_color(Fl_Chart *self, unsigned int n);

int Fl_Chart_is_autosize(const Fl_Chart *self);

void Fl_Chart_make_autosize(Fl_Chart *self, int n);

void Fl_Chart_bounds(Fl_Chart *self, double *a, double *b);

typedef struct Fl_Progress Fl_Progress; Fl_Progress *Fl_Progress_new( int x, int y, int width, int height, const char *title ); int Fl_Progress_x(Fl_Progress *); int Fl_Progress_y(Fl_Progress *); int Fl_Progress_width(Fl_Progress *); int Fl_Progress_height(Fl_Progress *); const char *Fl_Progress_label(Fl_Progress *); void Fl_Progress_set_label(Fl_Progress *, const char *title); void Fl_Progress_redraw(Fl_Progress *); void Fl_Progress_show(Fl_Progress *); void Fl_Progress_hide(Fl_Progress *); void Fl_Progress_activate(Fl_Progress *); void Fl_Progress_deactivate(Fl_Progress *); void Fl_Progress_redraw_label(Fl_Progress *); void Fl_Progress_resize(Fl_Progress *, int x, int y, int width, int height); void Fl_Progress_widget_resize( Fl_Progress *, int x, int y, int width, int height ); const char *Fl_Progress_tooltip(Fl_Progress *); void Fl_Progress_set_tooltip(Fl_Progress *, const char *txt); int Fl_Progress_get_type(Fl_Progress *); void Fl_Progress_set_type(Fl_Progress *, int typ); unsigned int Fl_Progress_color(Fl_Progress *); void Fl_Progress_set_color(Fl_Progress *, unsigned int color); void Fl_Progress_measure_label(const Fl_Progress *, int *, int *); unsigned int Fl_Progress_label_color(Fl_Progress *); void Fl_Progress_set_label_color(Fl_Progress *, unsigned int color); int Fl_Progress_label_font(Fl_Progress *); void Fl_Progress_set_label_font(Fl_Progress *, int font); int Fl_Progress_label_size(Fl_Progress *); void Fl_Progress_set_label_size(Fl_Progress *, int sz); int Fl_Progress_label_type(Fl_Progress *); void Fl_Progress_set_label_type(Fl_Progress *, int typ); int Fl_Progress_box(Fl_Progress *); void Fl_Progress_set_box(Fl_Progress *, int typ); int Fl_Progress_changed(Fl_Progress *); void Fl_Progress_set_changed(Fl_Progress *); void Fl_Progress_clear_changed(Fl_Progress *); int Fl_Progress_align(Fl_Progress *); void Fl_Progress_set_align(Fl_Progress *, int typ); void Fl_Progress_delete(Fl_Progress *); void Fl_Progress_set_image(Fl_Progress *, void *); void Fl_Progress_handle( Fl_Progress *self, custom_handler_callback cb, void *data ); int Fl_Progress_handle_event(Fl_Progress *self, int event); void Fl_Progress_draw(Fl_Progress *self, custom_draw_callback cb, void *data); void Fl_Progress_resize_callback( Fl_Progress *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Progress_set_when(Fl_Progress *, int); int Fl_Progress_when(const Fl_Progress *); const void *Fl_Progress_image(const Fl_Progress *); void *Fl_Progress_parent(const Fl_Progress *self); unsigned int Fl_Progress_selection_color(Fl_Progress *); void Fl_Progress_set_selection_color(Fl_Progress *, unsigned int color); void Fl_Progress_do_callback(Fl_Progress *); int Fl_Progress_inside(const Fl_Progress *self, void *); void *Fl_Progress_window(const Fl_Progress *); void *Fl_Progress_top_window(const Fl_Progress *); int Fl_Progress_takes_events(const Fl_Progress *); void *Fl_Progress_user_data(const Fl_Progress *); int Fl_Progress_take_focus(Fl_Progress *self); void Fl_Progress_set_visible_focus(Fl_Progress *self); void Fl_Progress_clear_visible_focus(Fl_Progress *self); void Fl_Progress_visible_focus(Fl_Progress *self, int v); unsigned int Fl_Progress_has_visible_focus(Fl_Progress *self); void Fl_Progress_set_user_data(Fl_Progress *, void *data); void *Fl_Progress_draw_data(const Fl_Progress *self); void *Fl_Progress_handle_data(const Fl_Progress *self); void Fl_Progress_set_draw_data(Fl_Progress *self, void *data); void Fl_Progress_set_handle_data(Fl_Progress *self, void *data); unsigned char Fl_Progress_damage(const Fl_Progress *self); void Fl_Progress_set_damage(Fl_Progress *self, unsigned char flag); void Fl_Progress_set_damage_area( Fl_Progress *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Progress_clear_damage(Fl_Progress *self); void *Fl_Progress_as_window(Fl_Progress *self); void *Fl_Progress_as_group(Fl_Progress *self); void Fl_Progress_set_deimage(Fl_Progress *, void *); const void *Fl_Progress_deimage(const Fl_Progress *); void Fl_Progress_set_callback(Fl_Progress *, Fl_Callback *, void *); int Fl_Progress_visible(const Fl_Progress *self); int Fl_Progress_visible_r(const Fl_Progress *self); unsigned int Fl_Progress_active(const Fl_Progress *self); int Fl_Progress_active_r(const Fl_Progress *self); Fl_Callback *Fl_Progress_callback(const Fl_Progress *self); void Fl_Progress_set_deletion_callback( Fl_Progress *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Progress *Fl_Progress_from_dyn_ptr(Fl_Widget *ptr); Fl_Progress *Fl_Progress_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Progress_super_draw(Fl_Widget *ptr, int flag); void Fl_Progress_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Progress_super_handle_first(Fl_Widget *ptr, int flag);

double Fl_Progress_minimum(Fl_Progress *);

void Fl_Progress_set_minimum(Fl_Progress *, double a);

double Fl_Progress_maximum(Fl_Progress *);

void Fl_Progress_set_maximum(Fl_Progress *, double a);

double Fl_Progress_value(Fl_Progress *);

void Fl_Progress_set_value(Fl_Progress *, double);

float Fl_Tooltip_delay(void);

void Fl_Tooltip_set_delay(float f);

float Fl_Tooltip_hidedelay(void);

void Fl_Tooltip_set_hidedelay(float f);

float Fl_Tooltip_hoverdelay(void);

void Fl_Tooltip_set_hoverdelay(float f);

int Fl_Tooltip_enabled(void);

void Fl_Tooltip_enable(int b);

void Fl_Tooltip_disable(void);



void Fl_Tooltip_enter_area(
    Fl_Widget *w, int X, int Y, int W, int H, const char *tip
);



void *Fl_Tooltip_current_widget(void);

void Fl_Tooltip_current(Fl_Widget *);

int Fl_Tooltip_font(void);

void Fl_Tooltip_set_font(int i);

int Fl_Tooltip_font_size(void);

void Fl_Tooltip_set_font_size(int s);

int Fl_Tooltip_color(void);

void Fl_Tooltip_set_color(unsigned int c);

int Fl_Tooltip_text_color(void);

void Fl_Tooltip_set_text_color(unsigned int c);

int Fl_Tooltip_margin_width(void);

void Fl_Tooltip_set_margin_width(int v);

int Fl_Tooltip_margin_height(void);

void Fl_Tooltip_set_margin_height(int v);

int Fl_Tooltip_wrap_width(void);

void Fl_Tooltip_set_wrap_width(int v);

void *Fl_Tooltip_current_window(void);

typedef struct Fl_Help_View Fl_Help_View; Fl_Help_View *Fl_Help_View_new( int x, int y, int width, int height, const char *title ); int Fl_Help_View_x(Fl_Help_View *); int Fl_Help_View_y(Fl_Help_View *); int Fl_Help_View_width(Fl_Help_View *); int Fl_Help_View_height(Fl_Help_View *); const char *Fl_Help_View_label(Fl_Help_View *); void Fl_Help_View_set_label(Fl_Help_View *, const char *title); void Fl_Help_View_redraw(Fl_Help_View *); void Fl_Help_View_show(Fl_Help_View *); void Fl_Help_View_hide(Fl_Help_View *); void Fl_Help_View_activate(Fl_Help_View *); void Fl_Help_View_deactivate(Fl_Help_View *); void Fl_Help_View_redraw_label(Fl_Help_View *); void Fl_Help_View_resize(Fl_Help_View *, int x, int y, int width, int height); void Fl_Help_View_widget_resize( Fl_Help_View *, int x, int y, int width, int height ); const char *Fl_Help_View_tooltip(Fl_Help_View *); void Fl_Help_View_set_tooltip(Fl_Help_View *, const char *txt); int Fl_Help_View_get_type(Fl_Help_View *); void Fl_Help_View_set_type(Fl_Help_View *, int typ); unsigned int Fl_Help_View_color(Fl_Help_View *); void Fl_Help_View_set_color(Fl_Help_View *, unsigned int color); void Fl_Help_View_measure_label(const Fl_Help_View *, int *, int *); unsigned int Fl_Help_View_label_color(Fl_Help_View *); void Fl_Help_View_set_label_color(Fl_Help_View *, unsigned int color); int Fl_Help_View_label_font(Fl_Help_View *); void Fl_Help_View_set_label_font(Fl_Help_View *, int font); int Fl_Help_View_label_size(Fl_Help_View *); void Fl_Help_View_set_label_size(Fl_Help_View *, int sz); int Fl_Help_View_label_type(Fl_Help_View *); void Fl_Help_View_set_label_type(Fl_Help_View *, int typ); int Fl_Help_View_box(Fl_Help_View *); void Fl_Help_View_set_box(Fl_Help_View *, int typ); int Fl_Help_View_changed(Fl_Help_View *); void Fl_Help_View_set_changed(Fl_Help_View *); void Fl_Help_View_clear_changed(Fl_Help_View *); int Fl_Help_View_align(Fl_Help_View *); void Fl_Help_View_set_align(Fl_Help_View *, int typ); void Fl_Help_View_delete(Fl_Help_View *); void Fl_Help_View_set_image(Fl_Help_View *, void *); void Fl_Help_View_handle( Fl_Help_View *self, custom_handler_callback cb, void *data ); int Fl_Help_View_handle_event(Fl_Help_View *self, int event); void Fl_Help_View_draw(Fl_Help_View *self, custom_draw_callback cb, void *data); void Fl_Help_View_resize_callback( Fl_Help_View *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Help_View_set_when(Fl_Help_View *, int); int Fl_Help_View_when(const Fl_Help_View *); const void *Fl_Help_View_image(const Fl_Help_View *); void *Fl_Help_View_parent(const Fl_Help_View *self); unsigned int Fl_Help_View_selection_color(Fl_Help_View *); void Fl_Help_View_set_selection_color(Fl_Help_View *, unsigned int color); void Fl_Help_View_do_callback(Fl_Help_View *); int Fl_Help_View_inside(const Fl_Help_View *self, void *); void *Fl_Help_View_window(const Fl_Help_View *); void *Fl_Help_View_top_window(const Fl_Help_View *); int Fl_Help_View_takes_events(const Fl_Help_View *); void *Fl_Help_View_user_data(const Fl_Help_View *); int Fl_Help_View_take_focus(Fl_Help_View *self); void Fl_Help_View_set_visible_focus(Fl_Help_View *self); void Fl_Help_View_clear_visible_focus(Fl_Help_View *self); void Fl_Help_View_visible_focus(Fl_Help_View *self, int v); unsigned int Fl_Help_View_has_visible_focus(Fl_Help_View *self); void Fl_Help_View_set_user_data(Fl_Help_View *, void *data); void *Fl_Help_View_draw_data(const Fl_Help_View *self); void *Fl_Help_View_handle_data(const Fl_Help_View *self); void Fl_Help_View_set_draw_data(Fl_Help_View *self, void *data); void Fl_Help_View_set_handle_data(Fl_Help_View *self, void *data); unsigned char Fl_Help_View_damage(const Fl_Help_View *self); void Fl_Help_View_set_damage(Fl_Help_View *self, unsigned char flag); void Fl_Help_View_set_damage_area( Fl_Help_View *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Help_View_clear_damage(Fl_Help_View *self); void *Fl_Help_View_as_window(Fl_Help_View *self); void *Fl_Help_View_as_group(Fl_Help_View *self); void Fl_Help_View_set_deimage(Fl_Help_View *, void *); const void *Fl_Help_View_deimage(const Fl_Help_View *); void Fl_Help_View_set_callback(Fl_Help_View *, Fl_Callback *, void *); int Fl_Help_View_visible(const Fl_Help_View *self); int Fl_Help_View_visible_r(const Fl_Help_View *self); unsigned int Fl_Help_View_active(const Fl_Help_View *self); int Fl_Help_View_active_r(const Fl_Help_View *self); Fl_Callback *Fl_Help_View_callback(const Fl_Help_View *self); void Fl_Help_View_set_deletion_callback( Fl_Help_View *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Help_View *Fl_Help_View_from_dyn_ptr(Fl_Widget *ptr); Fl_Help_View *Fl_Help_View_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Help_View_super_draw(Fl_Widget *ptr, int flag); void Fl_Help_View_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Help_View_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Help_View_find(Fl_Help_View *self, const char *s, int p);

void Fl_Help_View_select_all(Fl_Help_View *self);

void Fl_Help_View_set_topline_str(Fl_Help_View *self, const char *n);

void Fl_Help_View_set_topline(Fl_Help_View *self, int);

int Fl_Help_View_topline(const Fl_Help_View *self);

void Fl_Help_View_set_leftline(Fl_Help_View *self, int);

int Fl_Help_View_leftline(const Fl_Help_View *self);

void Fl_Help_View_set_text_color(Fl_Help_View *self, unsigned int c);

unsigned int Fl_Help_View_text_color(Fl_Help_View *self);

void Fl_Help_View_set_text_font(Fl_Help_View *self, int f);

int Fl_Help_View_text_font(Fl_Help_View *self);

void Fl_Help_View_set_text_size(Fl_Help_View *self, int s);

int Fl_Help_View_text_size(Fl_Help_View *self);

int Fl_Help_View_scrollbar_size(const Fl_Help_View *self);

void Fl_Help_View_set_scrollbar_size(Fl_Help_View *self, int newSize);

int Fl_Help_View_load(Fl_Help_View *self, const char *f);

typedef struct Fl_Input_Choice Fl_Input_Choice; Fl_Input_Choice *Fl_Input_Choice_new( int x, int y, int width, int height, const char *title ); int Fl_Input_Choice_x(Fl_Input_Choice *); int Fl_Input_Choice_y(Fl_Input_Choice *); int Fl_Input_Choice_width(Fl_Input_Choice *); int Fl_Input_Choice_height(Fl_Input_Choice *); const char *Fl_Input_Choice_label(Fl_Input_Choice *); void Fl_Input_Choice_set_label(Fl_Input_Choice *, const char *title); void Fl_Input_Choice_redraw(Fl_Input_Choice *); void Fl_Input_Choice_show(Fl_Input_Choice *); void Fl_Input_Choice_hide(Fl_Input_Choice *); void Fl_Input_Choice_activate(Fl_Input_Choice *); void Fl_Input_Choice_deactivate(Fl_Input_Choice *); void Fl_Input_Choice_redraw_label(Fl_Input_Choice *); void Fl_Input_Choice_resize(Fl_Input_Choice *, int x, int y, int width, int height); void Fl_Input_Choice_widget_resize( Fl_Input_Choice *, int x, int y, int width, int height ); const char *Fl_Input_Choice_tooltip(Fl_Input_Choice *); void Fl_Input_Choice_set_tooltip(Fl_Input_Choice *, const char *txt); int Fl_Input_Choice_get_type(Fl_Input_Choice *); void Fl_Input_Choice_set_type(Fl_Input_Choice *, int typ); unsigned int Fl_Input_Choice_color(Fl_Input_Choice *); void Fl_Input_Choice_set_color(Fl_Input_Choice *, unsigned int color); void Fl_Input_Choice_measure_label(const Fl_Input_Choice *, int *, int *); unsigned int Fl_Input_Choice_label_color(Fl_Input_Choice *); void Fl_Input_Choice_set_label_color(Fl_Input_Choice *, unsigned int color); int Fl_Input_Choice_label_font(Fl_Input_Choice *); void Fl_Input_Choice_set_label_font(Fl_Input_Choice *, int font); int Fl_Input_Choice_label_size(Fl_Input_Choice *); void Fl_Input_Choice_set_label_size(Fl_Input_Choice *, int sz); int Fl_Input_Choice_label_type(Fl_Input_Choice *); void Fl_Input_Choice_set_label_type(Fl_Input_Choice *, int typ); int Fl_Input_Choice_box(Fl_Input_Choice *); void Fl_Input_Choice_set_box(Fl_Input_Choice *, int typ); int Fl_Input_Choice_changed(Fl_Input_Choice *); void Fl_Input_Choice_set_changed(Fl_Input_Choice *); void Fl_Input_Choice_clear_changed(Fl_Input_Choice *); int Fl_Input_Choice_align(Fl_Input_Choice *); void Fl_Input_Choice_set_align(Fl_Input_Choice *, int typ); void Fl_Input_Choice_delete(Fl_Input_Choice *); void Fl_Input_Choice_set_image(Fl_Input_Choice *, void *); void Fl_Input_Choice_handle( Fl_Input_Choice *self, custom_handler_callback cb, void *data ); int Fl_Input_Choice_handle_event(Fl_Input_Choice *self, int event); void Fl_Input_Choice_draw(Fl_Input_Choice *self, custom_draw_callback cb, void *data); void Fl_Input_Choice_resize_callback( Fl_Input_Choice *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Input_Choice_set_when(Fl_Input_Choice *, int); int Fl_Input_Choice_when(const Fl_Input_Choice *); const void *Fl_Input_Choice_image(const Fl_Input_Choice *); void *Fl_Input_Choice_parent(const Fl_Input_Choice *self); unsigned int Fl_Input_Choice_selection_color(Fl_Input_Choice *); void Fl_Input_Choice_set_selection_color(Fl_Input_Choice *, unsigned int color); void Fl_Input_Choice_do_callback(Fl_Input_Choice *); int Fl_Input_Choice_inside(const Fl_Input_Choice *self, void *); void *Fl_Input_Choice_window(const Fl_Input_Choice *); void *Fl_Input_Choice_top_window(const Fl_Input_Choice *); int Fl_Input_Choice_takes_events(const Fl_Input_Choice *); void *Fl_Input_Choice_user_data(const Fl_Input_Choice *); int Fl_Input_Choice_take_focus(Fl_Input_Choice *self); void Fl_Input_Choice_set_visible_focus(Fl_Input_Choice *self); void Fl_Input_Choice_clear_visible_focus(Fl_Input_Choice *self); void Fl_Input_Choice_visible_focus(Fl_Input_Choice *self, int v); unsigned int Fl_Input_Choice_has_visible_focus(Fl_Input_Choice *self); void Fl_Input_Choice_set_user_data(Fl_Input_Choice *, void *data); void *Fl_Input_Choice_draw_data(const Fl_Input_Choice *self); void *Fl_Input_Choice_handle_data(const Fl_Input_Choice *self); void Fl_Input_Choice_set_draw_data(Fl_Input_Choice *self, void *data); void Fl_Input_Choice_set_handle_data(Fl_Input_Choice *self, void *data); unsigned char Fl_Input_Choice_damage(const Fl_Input_Choice *self); void Fl_Input_Choice_set_damage(Fl_Input_Choice *self, unsigned char flag); void Fl_Input_Choice_set_damage_area( Fl_Input_Choice *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Input_Choice_clear_damage(Fl_Input_Choice *self); void *Fl_Input_Choice_as_window(Fl_Input_Choice *self); void *Fl_Input_Choice_as_group(Fl_Input_Choice *self); void Fl_Input_Choice_set_deimage(Fl_Input_Choice *, void *); const void *Fl_Input_Choice_deimage(const Fl_Input_Choice *); void Fl_Input_Choice_set_callback(Fl_Input_Choice *, Fl_Callback *, void *); int Fl_Input_Choice_visible(const Fl_Input_Choice *self); int Fl_Input_Choice_visible_r(const Fl_Input_Choice *self); unsigned int Fl_Input_Choice_active(const Fl_Input_Choice *self); int Fl_Input_Choice_active_r(const Fl_Input_Choice *self); Fl_Callback *Fl_Input_Choice_callback(const Fl_Input_Choice *self); void Fl_Input_Choice_set_deletion_callback( Fl_Input_Choice *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Input_Choice *Fl_Input_Choice_from_dyn_ptr(Fl_Widget *ptr); Fl_Input_Choice *Fl_Input_Choice_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Input_Choice_super_draw(Fl_Widget *ptr, int flag); void Fl_Input_Choice_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Input_Choice_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Input_Choice_set_down_box(Fl_Input_Choice *self, int box);

int Fl_Input_Choice_down_box(const Fl_Input_Choice *self);

void Fl_Input_Choice_add(Fl_Input_Choice *self, const char *s);

void Fl_Input_Choice_clear(Fl_Input_Choice *self);

const char *Fl_Input_Choice_value(const Fl_Input_Choice *self);

int Fl_Input_Choice_value_index(Fl_Input_Choice *self);

void Fl_Input_Choice_set_value(Fl_Input_Choice *self, const char *val);

void Fl_Input_Choice_set_value_index(Fl_Input_Choice *self, int val);

void *Fl_Input_Choice_input(Fl_Input_Choice *self);

void *Fl_Input_Choice_menu_button(Fl_Input_Choice *self);

void Fl_Input_Choice_set_text_color(Fl_Input_Choice *self, unsigned int c);

unsigned int Fl_Input_Choice_text_color(Fl_Input_Choice *self);

void Fl_Input_Choice_set_text_font(Fl_Input_Choice *self, int f);

int Fl_Input_Choice_text_font(Fl_Input_Choice *self);

void Fl_Input_Choice_set_text_size(Fl_Input_Choice *self, int s);

int Fl_Input_Choice_text_size(Fl_Input_Choice *self);
typedef struct Fl_Preferences Fl_Preferences;

void Fl_Preferences_set_file_access(unsigned int flags);

unsigned int Fl_Preferences_file_access(void);

char Fl_Preferences_remove(void *id_);

Fl_Preferences *
Fl_Preferences_new(int root, const char *vendor, const char *application);

Fl_Preferences *Fl_Preferences_from_path(
    const char *path, const char *vendor, const char *application
);

Fl_Preferences *
Fl_Preferences_from_parent_group(Fl_Preferences *parent, const char *group);

Fl_Preferences *
Fl_Preferences_from_parent_idx(Fl_Preferences *parent, int groupIndex);

Fl_Preferences *Fl_Preferences_copy(const Fl_Preferences *);

void Fl_Preferences_delete(Fl_Preferences *);

Fl_Preferences *Fl_Preferences_from_id(void *id);

int Fl_Preferences_filename(
    Fl_Preferences *prefs, char *buffer, unsigned long long buffer_size
);

char Fl_Preferences_get_userdata_path(
    Fl_Preferences *prefs, char *path, int pathlen
);

void *Fl_Preferences_id(Fl_Preferences *prefs);

const char *Fl_Preferences_name(Fl_Preferences *prefs);

const char *Fl_Preferences_path(Fl_Preferences *prefs);

int Fl_Preferences_groups(Fl_Preferences *prefs);

const char *Fl_Preferences_group(Fl_Preferences *prefs, int num_group);

char Fl_Preferences_group_exists(Fl_Preferences *prefs, const char *key);

char Fl_Preferences_delete_group(Fl_Preferences *prefs, const char *group);

char Fl_Preferences_delete_all_groups(Fl_Preferences *prefs);

int Fl_Preferences_entries(Fl_Preferences *prefs);

const char *Fl_Preferences_entry(Fl_Preferences *prefs, int index);

char Fl_Preferences_entry_exists(Fl_Preferences *prefs, const char *key);

char Fl_Preferences_delete_entry(Fl_Preferences *prefs, const char *entry);

char Fl_Preferences_delete_all_entries(Fl_Preferences *prefs);

char Fl_Preferences_clear(Fl_Preferences *prefs);

char Fl_Preferences_seti(Fl_Preferences *prefs, const char *entry, int value);

char Fl_Preferences_setf(Fl_Preferences *prefs, const char *entry, float value);

char Fl_Preferences_setfp(
    Fl_Preferences *prefs, const char *entry, float value, int precision
);

char Fl_Preferences_setd(
    Fl_Preferences *prefs, const char *entry, double value
);

char Fl_Preferences_setdp(
    Fl_Preferences *prefs, const char *entry, double value, int precision
);

char Fl_Preferences_sets(
    Fl_Preferences *prefs, const char *entry, const char *value
);

char Fl_Preferences_setv(
    Fl_Preferences *prefs, const char *entry, const void *value, int size
);

char Fl_Preferences_geti(
    Fl_Preferences *prefs, const char *entry, int *value, int defaultValue
);

char Fl_Preferences_getf(
    Fl_Preferences *prefs, const char *entry, float *value, float defaultValue
);

char Fl_Preferences_getd(
    Fl_Preferences *prefs, const char *entry, double *value, double defaultValue
);

char Fl_Preferences_gets(
    Fl_Preferences *prefs,
    const char *entry,
    char *value,
    const char *defaultValue,
    int maxSize
);

char Fl_Preferences_getv(
    Fl_Preferences *prefs,
    const char *entry,
    void *value,
    const void *defaultValue,
    int defaultSize,
    int maxSize
);

char Fl_Preferences_getv2(
    Fl_Preferences *prefs,
    const char *entry,
    void *value,
    const void *defaultValue,
    int defaultSize,
    int *size
);

int Fl_Preferences_size(Fl_Preferences *prefs, const char *entry);
typedef struct Fl_Printer Fl_Printer;

Fl_Printer *Fl_Printer_new(void);

void Fl_Printer_delete(Fl_Printer *self);

int Fl_Printer_begin_job(
    Fl_Printer *self,
    int pagecount,
    int *frompage,
    int *topage,
    char **perr_message
);

int Fl_Printer_begin_page(Fl_Printer *self);

int Fl_Printer_printable_rect(Fl_Printer *self, int *w, int *h);

void Fl_Printer_margins(
    Fl_Printer *self, int *left, int *top, int *right, int *bottom
);

void Fl_Printer_origin(Fl_Printer *self, int *x, int *y);

void Fl_Printer_set_origin(Fl_Printer *self, int x, int y);

void Fl_Printer_scale(Fl_Printer *self, float scale_x, float scale_y);

void Fl_Printer_rotate(Fl_Printer *self, float angle);

void Fl_Printer_translate(Fl_Printer *self, int x, int y);

void Fl_Printer_untranslate(Fl_Printer *self);

int Fl_Printer_end_page(Fl_Printer *self);

void Fl_Printer_end_job(Fl_Printer *self);

void Fl_Printer_set_current(Fl_Printer *self);

int Fl_Printer_is_current(Fl_Printer *self);

void Fl_Printer_print_widget(
    Fl_Printer *self, void *widget, int delta_x, int delta_y
);

void Fl_Printer_print_window(
    Fl_Printer *self, void *win, int x_offset, int y_offset
);

void Fl_Printer_set_dialog_title(const char *msg);

void Fl_Printer_set_dialog_printer(const char *msg);

void Fl_Printer_set_dialog_range(const char *msg);

void Fl_Printer_set_dialog_copies(const char *msg);

void Fl_Printer_set_dialog_all(const char *msg);

void Fl_Printer_set_dialog_pages(const char *msg);

void Fl_Printer_set_dialog_from(const char *msg);

void Fl_Printer_set_dialog_to(const char *msg);

void Fl_Printer_set_dialog_properties(const char *msg);

void Fl_Printer_set_dialog_copyNo(const char *msg);

void Fl_Printer_set_dialog_print_button(const char *msg);

void Fl_Printer_set_dialog_cancel_button(const char *msg);

void Fl_Printer_set_dialog_print_to_file(const char *msg);

void Fl_Printer_set_property_title(const char *msg);

void Fl_Printer_set_property_pagesize(const char *msg);

void Fl_Printer_set_property_mode(const char *msg);

void Fl_Printer_set_property_use(const char *msg);

void Fl_Printer_set_property_save(const char *msg);

void Fl_Printer_set_property_cancel(const char *msg);
typedef struct Fl_Surface_Device Fl_Surface_Device;

void Fl_Surface_Device_set_current(Fl_Surface_Device *self);

int Fl_Surface_Device_is_current(Fl_Surface_Device *self);

Fl_Surface_Device *Fl_Surface_Device_surface(void);

void Fl_Surface_Device_push_current(Fl_Surface_Device *new_current);

Fl_Surface_Device *Fl_Surface_Device_pop_current(void);

typedef struct Fl_Image_Surface Fl_Image_Surface;

Fl_Image_Surface *Fl_Image_Surface_new(int w, int h, int high_res);

void Fl_Image_Surface_delete(Fl_Image_Surface *s);

void Fl_Image_Surface_set_current(Fl_Image_Surface *self);

int Fl_Image_Surface_is_current(Fl_Image_Surface *self);

void *Fl_Image_Surface_image(Fl_Image_Surface *self);

void *Fl_Image_Surface_highres_image(Fl_Image_Surface *self);

void Fl_Image_Surface_origin(Fl_Image_Surface *self, int *x, int *y);

void Fl_Image_Surface_set_origin(Fl_Image_Surface *self, int x, int y);

void Fl_Image_Surface_rescale(Fl_Image_Surface *self);

void Fl_Image_Surface_draw(
    Fl_Image_Surface *self, void *widget, int delta_x, int delta_y
);

void Fl_Image_Surface_draw_decorated_window(
    Fl_Image_Surface *self, void *widget, int delta_x, int delta_y
);

typedef struct Fl_SVG_File_Surface Fl_SVG_File_Surface;

Fl_SVG_File_Surface *
Fl_SVG_File_Surface_new(int width, int height, const char *file);

void Fl_SVG_File_Surface_delete(Fl_SVG_File_Surface *self);

void Fl_SVG_File_Surface_origin(Fl_SVG_File_Surface *self, int x, int y);

int Fl_SVG_File_Surface_printable_rect(
    Fl_SVG_File_Surface *self, int *w, int *h
);

void Fl_SVG_File_Surface_draw(
    Fl_SVG_File_Surface *self, void *widget, int delta_x, int delta_y
);

void Fl_SVG_File_Surface_draw_decorated_window(
    Fl_SVG_File_Surface *self, void *widget, int delta_x, int delta_y
);
typedef struct Fl_Table Fl_Table; Fl_Table *Fl_Table_new( int x, int y, int width, int height, const char *title ); int Fl_Table_x(Fl_Table *); int Fl_Table_y(Fl_Table *); int Fl_Table_width(Fl_Table *); int Fl_Table_height(Fl_Table *); const char *Fl_Table_label(Fl_Table *); void Fl_Table_set_label(Fl_Table *, const char *title); void Fl_Table_redraw(Fl_Table *); void Fl_Table_show(Fl_Table *); void Fl_Table_hide(Fl_Table *); void Fl_Table_activate(Fl_Table *); void Fl_Table_deactivate(Fl_Table *); void Fl_Table_redraw_label(Fl_Table *); void Fl_Table_resize(Fl_Table *, int x, int y, int width, int height); void Fl_Table_widget_resize( Fl_Table *, int x, int y, int width, int height ); const char *Fl_Table_tooltip(Fl_Table *); void Fl_Table_set_tooltip(Fl_Table *, const char *txt); int Fl_Table_get_type(Fl_Table *); void Fl_Table_set_type(Fl_Table *, int typ); unsigned int Fl_Table_color(Fl_Table *); void Fl_Table_set_color(Fl_Table *, unsigned int color); void Fl_Table_measure_label(const Fl_Table *, int *, int *); unsigned int Fl_Table_label_color(Fl_Table *); void Fl_Table_set_label_color(Fl_Table *, unsigned int color); int Fl_Table_label_font(Fl_Table *); void Fl_Table_set_label_font(Fl_Table *, int font); int Fl_Table_label_size(Fl_Table *); void Fl_Table_set_label_size(Fl_Table *, int sz); int Fl_Table_label_type(Fl_Table *); void Fl_Table_set_label_type(Fl_Table *, int typ); int Fl_Table_box(Fl_Table *); void Fl_Table_set_box(Fl_Table *, int typ); int Fl_Table_changed(Fl_Table *); void Fl_Table_set_changed(Fl_Table *); void Fl_Table_clear_changed(Fl_Table *); int Fl_Table_align(Fl_Table *); void Fl_Table_set_align(Fl_Table *, int typ); void Fl_Table_delete(Fl_Table *); void Fl_Table_set_image(Fl_Table *, void *); void Fl_Table_handle( Fl_Table *self, custom_handler_callback cb, void *data ); int Fl_Table_handle_event(Fl_Table *self, int event); void Fl_Table_draw(Fl_Table *self, custom_draw_callback cb, void *data); void Fl_Table_resize_callback( Fl_Table *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Table_set_when(Fl_Table *, int); int Fl_Table_when(const Fl_Table *); const void *Fl_Table_image(const Fl_Table *); void *Fl_Table_parent(const Fl_Table *self); unsigned int Fl_Table_selection_color(Fl_Table *); void Fl_Table_set_selection_color(Fl_Table *, unsigned int color); void Fl_Table_do_callback(Fl_Table *); int Fl_Table_inside(const Fl_Table *self, void *); void *Fl_Table_window(const Fl_Table *); void *Fl_Table_top_window(const Fl_Table *); int Fl_Table_takes_events(const Fl_Table *); void *Fl_Table_user_data(const Fl_Table *); int Fl_Table_take_focus(Fl_Table *self); void Fl_Table_set_visible_focus(Fl_Table *self); void Fl_Table_clear_visible_focus(Fl_Table *self); void Fl_Table_visible_focus(Fl_Table *self, int v); unsigned int Fl_Table_has_visible_focus(Fl_Table *self); void Fl_Table_set_user_data(Fl_Table *, void *data); void *Fl_Table_draw_data(const Fl_Table *self); void *Fl_Table_handle_data(const Fl_Table *self); void Fl_Table_set_draw_data(Fl_Table *self, void *data); void Fl_Table_set_handle_data(Fl_Table *self, void *data); unsigned char Fl_Table_damage(const Fl_Table *self); void Fl_Table_set_damage(Fl_Table *self, unsigned char flag); void Fl_Table_set_damage_area( Fl_Table *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Table_clear_damage(Fl_Table *self); void *Fl_Table_as_window(Fl_Table *self); void *Fl_Table_as_group(Fl_Table *self); void Fl_Table_set_deimage(Fl_Table *, void *); const void *Fl_Table_deimage(const Fl_Table *); void Fl_Table_set_callback(Fl_Table *, Fl_Callback *, void *); int Fl_Table_visible(const Fl_Table *self); int Fl_Table_visible_r(const Fl_Table *self); unsigned int Fl_Table_active(const Fl_Table *self); int Fl_Table_active_r(const Fl_Table *self); Fl_Callback *Fl_Table_callback(const Fl_Table *self); void Fl_Table_set_deletion_callback( Fl_Table *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Table *Fl_Table_from_dyn_ptr(Fl_Widget *ptr); Fl_Table *Fl_Table_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Table_super_draw(Fl_Widget *ptr, int flag); void Fl_Table_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Table_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Table_begin(Fl_Table *self); void Fl_Table_end(Fl_Table *self); int Fl_Table_find(Fl_Table *self, const void *); void Fl_Table_add(Fl_Table *self, void *); void Fl_Table_insert(Fl_Table *self, void *, int pos); void Fl_Table_remove(Fl_Table *self, void *wid); void Fl_Table_remove_by_index(Fl_Table *self, int idx); void Fl_Table_clear(Fl_Table *self); int Fl_Table_children(Fl_Table *self); Fl_Widget *Fl_Table_child(Fl_Table *, int index); void Fl_Table_resizable(Fl_Table *self, void *); void Fl_Table_set_clip_children(Fl_Table *self, int c); int Fl_Table_clip_children(Fl_Table *self); void Fl_Table_init_sizes(Fl_Table *self); void Fl_Table_draw_child(const Fl_Table *self, Fl_Widget *w); void Fl_Table_update_child(const Fl_Table *self, Fl_Widget *w); void Fl_Table_draw_outside_label(const Fl_Table *self, const Fl_Widget *w); void Fl_Table_draw_children(Fl_Table *self);

typedef struct Fl_Table Fl_Table; void Fl_Table_set_table_box(Fl_Table *self, int val); int Fl_Table_table_box(Fl_Table *self); void Fl_Table_set_rows(Fl_Table *self, int val); int Fl_Table_rows(Fl_Table *self); void Fl_Table_set_cols(Fl_Table *self, int val); int Fl_Table_cols(Fl_Table *self); void Fl_Table_visible_cells( Fl_Table *self, int *r1, int *r2, int *c1, int *c2 ); int Fl_Table_is_interactive_resize(Fl_Table *self); int Fl_Table_row_resize(Fl_Table *self); void Fl_Table_set_row_resize(Fl_Table *self, int flag); int Fl_Table_col_resize(Fl_Table *self); void Fl_Table_set_col_resize(Fl_Table *self, int flag); int Fl_Table_col_resize_min(Fl_Table *self); void Fl_Table_set_col_resize_min(Fl_Table *self, int val); int Fl_Table_row_resize_min(Fl_Table *self); void Fl_Table_set_row_resize_min(Fl_Table *self, int val); int Fl_Table_row_header(Fl_Table *self); void Fl_Table_set_row_header(Fl_Table *self, int flag); int Fl_Table_col_header(Fl_Table *self); void Fl_Table_set_col_header(Fl_Table *self, int flag); void Fl_Table_set_col_header_height(Fl_Table *self, int height); int Fl_Table_col_header_height(Fl_Table *self); void Fl_Table_set_row_header_width(Fl_Table *self, int width); int Fl_Table_row_header_width(Fl_Table *self); void Fl_Table_set_row_header_color(Fl_Table *self, unsigned int val); unsigned int Fl_Table_row_header_color(Fl_Table *self); void Fl_Table_set_col_header_color(Fl_Table *self, unsigned int val); unsigned int Fl_Table_col_header_color(Fl_Table *self); void Fl_Table_set_row_height(Fl_Table *self, int row, int height); int Fl_Table_row_height(Fl_Table *self, int row); void Fl_Table_set_col_width(Fl_Table *self, int col, int width); int Fl_Table_col_width(Fl_Table *self, int col); void Fl_Table_set_row_height_all(Fl_Table *self, int height); void Fl_Table_set_col_width_all(Fl_Table *self, int width); void Fl_Table_set_row_position(Fl_Table *self, int row); void Fl_Table_set_col_position(Fl_Table *self, int col); int Fl_Table_row_position(Fl_Table *self); int Fl_Table_col_position(Fl_Table *self); void Fl_Table_set_top_row(Fl_Table *self, int row); int Fl_Table_top_row(Fl_Table *self); int Fl_Table_is_selected(Fl_Table *self, int r, int c); void Fl_Table_get_selection( Fl_Table *self, int *row_top, int *col_left, int *row_bot, int *col_right ); void Fl_Table_set_selection( Fl_Table *self, int row_top, int col_left, int row_bot, int col_right ); int Fl_Table_move_cursor_with_shiftselect( Fl_Table *self, int R, int C, int shiftselect ); int Fl_Table_move_cursor(Fl_Table *self, int R, int C); int Fl_Table_scrollbar_size(const Fl_Table *self); void Fl_Table_set_scrollbar_size(Fl_Table *self, int newSize); void Fl_Table_set_tab_cell_nav(Fl_Table *self, int val); int Fl_Table_tab_cell_nav(const Fl_Table *self); void Fl_Table_draw_cell( Fl_Table *self, void (*)(Fl_Widget *, int, int, int, int, int, int, int, void *), void *data ); void *Fl_Table_draw_cell_data(const Fl_Table *self); void Fl_Table_set_draw_cell_data(Fl_Table *self, void *data); int Fl_Table_callback_col(Fl_Table *); int Fl_Table_callback_row(Fl_Table *); int Fl_Table_callback_context(Fl_Table *); void *Fl_Table_scrollbar(const Fl_Table *); void *Fl_Table_hscrollbar(const Fl_Table *); int Fl_Table_find_cell( const Fl_Table *self, int ctx, int r, int c, int *x, int *y, int *w, int *h ); int Fl_Table_cursor2rowcol(const Fl_Table *self, int *r, int *c, int *flag);

typedef struct Fl_Table_Row Fl_Table_Row; Fl_Table_Row *Fl_Table_Row_new( int x, int y, int width, int height, const char *title ); int Fl_Table_Row_x(Fl_Table_Row *); int Fl_Table_Row_y(Fl_Table_Row *); int Fl_Table_Row_width(Fl_Table_Row *); int Fl_Table_Row_height(Fl_Table_Row *); const char *Fl_Table_Row_label(Fl_Table_Row *); void Fl_Table_Row_set_label(Fl_Table_Row *, const char *title); void Fl_Table_Row_redraw(Fl_Table_Row *); void Fl_Table_Row_show(Fl_Table_Row *); void Fl_Table_Row_hide(Fl_Table_Row *); void Fl_Table_Row_activate(Fl_Table_Row *); void Fl_Table_Row_deactivate(Fl_Table_Row *); void Fl_Table_Row_redraw_label(Fl_Table_Row *); void Fl_Table_Row_resize(Fl_Table_Row *, int x, int y, int width, int height); void Fl_Table_Row_widget_resize( Fl_Table_Row *, int x, int y, int width, int height ); const char *Fl_Table_Row_tooltip(Fl_Table_Row *); void Fl_Table_Row_set_tooltip(Fl_Table_Row *, const char *txt); int Fl_Table_Row_get_type(Fl_Table_Row *); void Fl_Table_Row_set_type(Fl_Table_Row *, int typ); unsigned int Fl_Table_Row_color(Fl_Table_Row *); void Fl_Table_Row_set_color(Fl_Table_Row *, unsigned int color); void Fl_Table_Row_measure_label(const Fl_Table_Row *, int *, int *); unsigned int Fl_Table_Row_label_color(Fl_Table_Row *); void Fl_Table_Row_set_label_color(Fl_Table_Row *, unsigned int color); int Fl_Table_Row_label_font(Fl_Table_Row *); void Fl_Table_Row_set_label_font(Fl_Table_Row *, int font); int Fl_Table_Row_label_size(Fl_Table_Row *); void Fl_Table_Row_set_label_size(Fl_Table_Row *, int sz); int Fl_Table_Row_label_type(Fl_Table_Row *); void Fl_Table_Row_set_label_type(Fl_Table_Row *, int typ); int Fl_Table_Row_box(Fl_Table_Row *); void Fl_Table_Row_set_box(Fl_Table_Row *, int typ); int Fl_Table_Row_changed(Fl_Table_Row *); void Fl_Table_Row_set_changed(Fl_Table_Row *); void Fl_Table_Row_clear_changed(Fl_Table_Row *); int Fl_Table_Row_align(Fl_Table_Row *); void Fl_Table_Row_set_align(Fl_Table_Row *, int typ); void Fl_Table_Row_delete(Fl_Table_Row *); void Fl_Table_Row_set_image(Fl_Table_Row *, void *); void Fl_Table_Row_handle( Fl_Table_Row *self, custom_handler_callback cb, void *data ); int Fl_Table_Row_handle_event(Fl_Table_Row *self, int event); void Fl_Table_Row_draw(Fl_Table_Row *self, custom_draw_callback cb, void *data); void Fl_Table_Row_resize_callback( Fl_Table_Row *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Table_Row_set_when(Fl_Table_Row *, int); int Fl_Table_Row_when(const Fl_Table_Row *); const void *Fl_Table_Row_image(const Fl_Table_Row *); void *Fl_Table_Row_parent(const Fl_Table_Row *self); unsigned int Fl_Table_Row_selection_color(Fl_Table_Row *); void Fl_Table_Row_set_selection_color(Fl_Table_Row *, unsigned int color); void Fl_Table_Row_do_callback(Fl_Table_Row *); int Fl_Table_Row_inside(const Fl_Table_Row *self, void *); void *Fl_Table_Row_window(const Fl_Table_Row *); void *Fl_Table_Row_top_window(const Fl_Table_Row *); int Fl_Table_Row_takes_events(const Fl_Table_Row *); void *Fl_Table_Row_user_data(const Fl_Table_Row *); int Fl_Table_Row_take_focus(Fl_Table_Row *self); void Fl_Table_Row_set_visible_focus(Fl_Table_Row *self); void Fl_Table_Row_clear_visible_focus(Fl_Table_Row *self); void Fl_Table_Row_visible_focus(Fl_Table_Row *self, int v); unsigned int Fl_Table_Row_has_visible_focus(Fl_Table_Row *self); void Fl_Table_Row_set_user_data(Fl_Table_Row *, void *data); void *Fl_Table_Row_draw_data(const Fl_Table_Row *self); void *Fl_Table_Row_handle_data(const Fl_Table_Row *self); void Fl_Table_Row_set_draw_data(Fl_Table_Row *self, void *data); void Fl_Table_Row_set_handle_data(Fl_Table_Row *self, void *data); unsigned char Fl_Table_Row_damage(const Fl_Table_Row *self); void Fl_Table_Row_set_damage(Fl_Table_Row *self, unsigned char flag); void Fl_Table_Row_set_damage_area( Fl_Table_Row *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Table_Row_clear_damage(Fl_Table_Row *self); void *Fl_Table_Row_as_window(Fl_Table_Row *self); void *Fl_Table_Row_as_group(Fl_Table_Row *self); void Fl_Table_Row_set_deimage(Fl_Table_Row *, void *); const void *Fl_Table_Row_deimage(const Fl_Table_Row *); void Fl_Table_Row_set_callback(Fl_Table_Row *, Fl_Callback *, void *); int Fl_Table_Row_visible(const Fl_Table_Row *self); int Fl_Table_Row_visible_r(const Fl_Table_Row *self); unsigned int Fl_Table_Row_active(const Fl_Table_Row *self); int Fl_Table_Row_active_r(const Fl_Table_Row *self); Fl_Callback *Fl_Table_Row_callback(const Fl_Table_Row *self); void Fl_Table_Row_set_deletion_callback( Fl_Table_Row *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Table_Row *Fl_Table_Row_from_dyn_ptr(Fl_Widget *ptr); Fl_Table_Row *Fl_Table_Row_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Table_Row_super_draw(Fl_Widget *ptr, int flag); void Fl_Table_Row_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Table_Row_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Table_Row_begin(Fl_Table_Row *self); void Fl_Table_Row_end(Fl_Table_Row *self); int Fl_Table_Row_find(Fl_Table_Row *self, const void *); void Fl_Table_Row_add(Fl_Table_Row *self, void *); void Fl_Table_Row_insert(Fl_Table_Row *self, void *, int pos); void Fl_Table_Row_remove(Fl_Table_Row *self, void *wid); void Fl_Table_Row_remove_by_index(Fl_Table_Row *self, int idx); void Fl_Table_Row_clear(Fl_Table_Row *self); int Fl_Table_Row_children(Fl_Table_Row *self); Fl_Widget *Fl_Table_Row_child(Fl_Table_Row *, int index); void Fl_Table_Row_resizable(Fl_Table_Row *self, void *); void Fl_Table_Row_set_clip_children(Fl_Table_Row *self, int c); int Fl_Table_Row_clip_children(Fl_Table_Row *self); void Fl_Table_Row_init_sizes(Fl_Table_Row *self); void Fl_Table_Row_draw_child(const Fl_Table_Row *self, Fl_Widget *w); void Fl_Table_Row_update_child(const Fl_Table_Row *self, Fl_Widget *w); void Fl_Table_Row_draw_outside_label(const Fl_Table_Row *self, const Fl_Widget *w); void Fl_Table_Row_draw_children(Fl_Table_Row *self);

typedef struct Fl_Table_Row Fl_Table_Row; void Fl_Table_Row_set_table_box(Fl_Table_Row *self, int val); int Fl_Table_Row_table_box(Fl_Table_Row *self); void Fl_Table_Row_set_rows(Fl_Table_Row *self, int val); int Fl_Table_Row_rows(Fl_Table_Row *self); void Fl_Table_Row_set_cols(Fl_Table_Row *self, int val); int Fl_Table_Row_cols(Fl_Table_Row *self); void Fl_Table_Row_visible_cells( Fl_Table_Row *self, int *r1, int *r2, int *c1, int *c2 ); int Fl_Table_Row_is_interactive_resize(Fl_Table_Row *self); int Fl_Table_Row_row_resize(Fl_Table_Row *self); void Fl_Table_Row_set_row_resize(Fl_Table_Row *self, int flag); int Fl_Table_Row_col_resize(Fl_Table_Row *self); void Fl_Table_Row_set_col_resize(Fl_Table_Row *self, int flag); int Fl_Table_Row_col_resize_min(Fl_Table_Row *self); void Fl_Table_Row_set_col_resize_min(Fl_Table_Row *self, int val); int Fl_Table_Row_row_resize_min(Fl_Table_Row *self); void Fl_Table_Row_set_row_resize_min(Fl_Table_Row *self, int val); int Fl_Table_Row_row_header(Fl_Table_Row *self); void Fl_Table_Row_set_row_header(Fl_Table_Row *self, int flag); int Fl_Table_Row_col_header(Fl_Table_Row *self); void Fl_Table_Row_set_col_header(Fl_Table_Row *self, int flag); void Fl_Table_Row_set_col_header_height(Fl_Table_Row *self, int height); int Fl_Table_Row_col_header_height(Fl_Table_Row *self); void Fl_Table_Row_set_row_header_width(Fl_Table_Row *self, int width); int Fl_Table_Row_row_header_width(Fl_Table_Row *self); void Fl_Table_Row_set_row_header_color(Fl_Table_Row *self, unsigned int val); unsigned int Fl_Table_Row_row_header_color(Fl_Table_Row *self); void Fl_Table_Row_set_col_header_color(Fl_Table_Row *self, unsigned int val); unsigned int Fl_Table_Row_col_header_color(Fl_Table_Row *self); void Fl_Table_Row_set_row_height(Fl_Table_Row *self, int row, int height); int Fl_Table_Row_row_height(Fl_Table_Row *self, int row); void Fl_Table_Row_set_col_width(Fl_Table_Row *self, int col, int width); int Fl_Table_Row_col_width(Fl_Table_Row *self, int col); void Fl_Table_Row_set_row_height_all(Fl_Table_Row *self, int height); void Fl_Table_Row_set_col_width_all(Fl_Table_Row *self, int width); void Fl_Table_Row_set_row_position(Fl_Table_Row *self, int row); void Fl_Table_Row_set_col_position(Fl_Table_Row *self, int col); int Fl_Table_Row_row_position(Fl_Table_Row *self); int Fl_Table_Row_col_position(Fl_Table_Row *self); void Fl_Table_Row_set_top_row(Fl_Table_Row *self, int row); int Fl_Table_Row_top_row(Fl_Table_Row *self); int Fl_Table_Row_is_selected(Fl_Table_Row *self, int r, int c); void Fl_Table_Row_get_selection( Fl_Table_Row *self, int *row_top, int *col_left, int *row_bot, int *col_right ); void Fl_Table_Row_set_selection( Fl_Table_Row *self, int row_top, int col_left, int row_bot, int col_right ); int Fl_Table_Row_move_cursor_with_shiftselect( Fl_Table_Row *self, int R, int C, int shiftselect ); int Fl_Table_Row_move_cursor(Fl_Table_Row *self, int R, int C); int Fl_Table_Row_scrollbar_size(const Fl_Table_Row *self); void Fl_Table_Row_set_scrollbar_size(Fl_Table_Row *self, int newSize); void Fl_Table_Row_set_tab_cell_nav(Fl_Table_Row *self, int val); int Fl_Table_Row_tab_cell_nav(const Fl_Table_Row *self); void Fl_Table_Row_draw_cell( Fl_Table_Row *self, void (*)(Fl_Widget *, int, int, int, int, int, int, int, void *), void *data ); void *Fl_Table_Row_draw_cell_data(const Fl_Table_Row *self); void Fl_Table_Row_set_draw_cell_data(Fl_Table_Row *self, void *data); int Fl_Table_Row_callback_col(Fl_Table_Row *); int Fl_Table_Row_callback_row(Fl_Table_Row *); int Fl_Table_Row_callback_context(Fl_Table_Row *); void *Fl_Table_Row_scrollbar(const Fl_Table_Row *); void *Fl_Table_Row_hscrollbar(const Fl_Table_Row *); int Fl_Table_Row_find_cell( const Fl_Table_Row *self, int ctx, int r, int c, int *x, int *y, int *w, int *h ); int Fl_Table_Row_cursor2rowcol(const Fl_Table_Row *self, int *r, int *c, int *flag);

int Fl_Table_Row_row_selected(Fl_Table_Row *self, int row);

int Fl_Table_Row_select_row(Fl_Table_Row *self, int row, int flag);

void Fl_Table_Row_select_all_rows(Fl_Table_Row *self, int flag);

void Fl_Table_Row_clear_rows(Fl_Table_Row *self);
typedef struct Fl_Terminal Fl_Terminal; Fl_Terminal *Fl_Terminal_new( int x, int y, int width, int height, const char *title ); int Fl_Terminal_x(Fl_Terminal *); int Fl_Terminal_y(Fl_Terminal *); int Fl_Terminal_width(Fl_Terminal *); int Fl_Terminal_height(Fl_Terminal *); const char *Fl_Terminal_label(Fl_Terminal *); void Fl_Terminal_set_label(Fl_Terminal *, const char *title); void Fl_Terminal_redraw(Fl_Terminal *); void Fl_Terminal_show(Fl_Terminal *); void Fl_Terminal_hide(Fl_Terminal *); void Fl_Terminal_activate(Fl_Terminal *); void Fl_Terminal_deactivate(Fl_Terminal *); void Fl_Terminal_redraw_label(Fl_Terminal *); void Fl_Terminal_resize(Fl_Terminal *, int x, int y, int width, int height); void Fl_Terminal_widget_resize( Fl_Terminal *, int x, int y, int width, int height ); const char *Fl_Terminal_tooltip(Fl_Terminal *); void Fl_Terminal_set_tooltip(Fl_Terminal *, const char *txt); int Fl_Terminal_get_type(Fl_Terminal *); void Fl_Terminal_set_type(Fl_Terminal *, int typ); unsigned int Fl_Terminal_color(Fl_Terminal *); void Fl_Terminal_set_color(Fl_Terminal *, unsigned int color); void Fl_Terminal_measure_label(const Fl_Terminal *, int *, int *); unsigned int Fl_Terminal_label_color(Fl_Terminal *); void Fl_Terminal_set_label_color(Fl_Terminal *, unsigned int color); int Fl_Terminal_label_font(Fl_Terminal *); void Fl_Terminal_set_label_font(Fl_Terminal *, int font); int Fl_Terminal_label_size(Fl_Terminal *); void Fl_Terminal_set_label_size(Fl_Terminal *, int sz); int Fl_Terminal_label_type(Fl_Terminal *); void Fl_Terminal_set_label_type(Fl_Terminal *, int typ); int Fl_Terminal_box(Fl_Terminal *); void Fl_Terminal_set_box(Fl_Terminal *, int typ); int Fl_Terminal_changed(Fl_Terminal *); void Fl_Terminal_set_changed(Fl_Terminal *); void Fl_Terminal_clear_changed(Fl_Terminal *); int Fl_Terminal_align(Fl_Terminal *); void Fl_Terminal_set_align(Fl_Terminal *, int typ); void Fl_Terminal_delete(Fl_Terminal *); void Fl_Terminal_set_image(Fl_Terminal *, void *); void Fl_Terminal_handle( Fl_Terminal *self, custom_handler_callback cb, void *data ); int Fl_Terminal_handle_event(Fl_Terminal *self, int event); void Fl_Terminal_draw(Fl_Terminal *self, custom_draw_callback cb, void *data); void Fl_Terminal_resize_callback( Fl_Terminal *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Terminal_set_when(Fl_Terminal *, int); int Fl_Terminal_when(const Fl_Terminal *); const void *Fl_Terminal_image(const Fl_Terminal *); void *Fl_Terminal_parent(const Fl_Terminal *self); unsigned int Fl_Terminal_selection_color(Fl_Terminal *); void Fl_Terminal_set_selection_color(Fl_Terminal *, unsigned int color); void Fl_Terminal_do_callback(Fl_Terminal *); int Fl_Terminal_inside(const Fl_Terminal *self, void *); void *Fl_Terminal_window(const Fl_Terminal *); void *Fl_Terminal_top_window(const Fl_Terminal *); int Fl_Terminal_takes_events(const Fl_Terminal *); void *Fl_Terminal_user_data(const Fl_Terminal *); int Fl_Terminal_take_focus(Fl_Terminal *self); void Fl_Terminal_set_visible_focus(Fl_Terminal *self); void Fl_Terminal_clear_visible_focus(Fl_Terminal *self); void Fl_Terminal_visible_focus(Fl_Terminal *self, int v); unsigned int Fl_Terminal_has_visible_focus(Fl_Terminal *self); void Fl_Terminal_set_user_data(Fl_Terminal *, void *data); void *Fl_Terminal_draw_data(const Fl_Terminal *self); void *Fl_Terminal_handle_data(const Fl_Terminal *self); void Fl_Terminal_set_draw_data(Fl_Terminal *self, void *data); void Fl_Terminal_set_handle_data(Fl_Terminal *self, void *data); unsigned char Fl_Terminal_damage(const Fl_Terminal *self); void Fl_Terminal_set_damage(Fl_Terminal *self, unsigned char flag); void Fl_Terminal_set_damage_area( Fl_Terminal *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Terminal_clear_damage(Fl_Terminal *self); void *Fl_Terminal_as_window(Fl_Terminal *self); void *Fl_Terminal_as_group(Fl_Terminal *self); void Fl_Terminal_set_deimage(Fl_Terminal *, void *); const void *Fl_Terminal_deimage(const Fl_Terminal *); void Fl_Terminal_set_callback(Fl_Terminal *, Fl_Callback *, void *); int Fl_Terminal_visible(const Fl_Terminal *self); int Fl_Terminal_visible_r(const Fl_Terminal *self); unsigned int Fl_Terminal_active(const Fl_Terminal *self); int Fl_Terminal_active_r(const Fl_Terminal *self); Fl_Callback *Fl_Terminal_callback(const Fl_Terminal *self); void Fl_Terminal_set_deletion_callback( Fl_Terminal *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Terminal *Fl_Terminal_from_dyn_ptr(Fl_Widget *ptr); Fl_Terminal *Fl_Terminal_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Terminal_super_draw(Fl_Widget *ptr, int flag); void Fl_Terminal_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Terminal_super_handle_first(Fl_Widget *ptr, int flag);

int Fl_Terminal_ansi(Fl_Terminal const *self);

void Fl_Terminal_set_ansi(Fl_Terminal *self, int boolean);

void Fl_Terminal_append(Fl_Terminal *self, const char *txt);

void Fl_Terminal_append_u8(Fl_Terminal *self, const char *txt, int len);

void Fl_Terminal_append_ascii(Fl_Terminal *self, const char *txt);

void Fl_Terminal_append_utf8(Fl_Terminal *self, const char *txt);

void Fl_Terminal_append_utf8_u8(Fl_Terminal *self, const char *txt, int len);

void Fl_Terminal_clear_mouse_selection(Fl_Terminal *self);

void Fl_Terminal_clear_to_color(Fl_Terminal *self, unsigned set);

void Fl_Terminal_clear_history(Fl_Terminal *self);

void Fl_Terminal_clear_screen(Fl_Terminal *self, int boolean);

void Fl_Terminal_clear_screen_home(Fl_Terminal *self, int boolean);

int Fl_Terminal_cursor_col(Fl_Terminal const *self);

void Fl_Terminal_set_cursor_col(Fl_Terminal *self, int val);

void Fl_Terminal_cursor_home(Fl_Terminal *self);

int Fl_Terminal_cursor_row(Fl_Terminal const *self);

void Fl_Terminal_set_cursor_row(Fl_Terminal *self, int val);

void Fl_Terminal_cursor_up(Fl_Terminal *self, int count, int do_scroll);

void Fl_Terminal_cursor_down(Fl_Terminal *self, int count, int do_scroll);

void Fl_Terminal_cursor_left(Fl_Terminal *self, int count);

void Fl_Terminal_cursor_right(Fl_Terminal *self, int count, int do_scroll);

void Fl_Terminal_scroll(Fl_Terminal *self, int count);

void Fl_Terminal_clear_eod(Fl_Terminal *self);

void Fl_Terminal_clear_eol(Fl_Terminal *self);

void Fl_Terminal_clear_cur_line(Fl_Terminal *self);

void Fl_Terminal_clear_line(Fl_Terminal *self, int drow);

void Fl_Terminal_clear_sod(Fl_Terminal *self);

void Fl_Terminal_clear_sol(Fl_Terminal *self);

void Fl_Terminal_insert_char(Fl_Terminal *self, char c, int rep);

void Fl_Terminal_insert_char_eol(Fl_Terminal *self, char c, int drow, int dcol, int rep);

void Fl_Terminal_insert_rows(Fl_Terminal *self, int count);

void Fl_Terminal_delete_chars(Fl_Terminal *self, int drow, int dcol, int count);

void Fl_Terminal_delete_cur_chars(Fl_Terminal *self, int count);

void Fl_Terminal_delete_rows(Fl_Terminal *self, int count);


unsigned Fl_Terminal_cursor_bg_color(Fl_Terminal const *self
);

void Fl_Terminal_set_cursor_bg_color(Fl_Terminal *self, unsigned set);

unsigned Fl_Terminal_cursor_fg_color(Fl_Terminal const *self
);

void Fl_Terminal_set_cursor_fg_color(Fl_Terminal *self, unsigned set);

int Fl_Terminal_display_columns(Fl_Terminal const *self);

void Fl_Terminal_set_display_columns(Fl_Terminal *self, int set);

int Fl_Terminal_display_rows(Fl_Terminal const *self);

int Fl_Terminal_history_rows(Fl_Terminal const *self);

void Fl_Terminal_set_history_rows(Fl_Terminal *self, int set);

int Fl_Terminal_get_selection(Fl_Terminal const *self, int *retval);

int Fl_Terminal_history_use(Fl_Terminal const *self);

int Fl_Terminal_margin_bottom(Fl_Terminal const *self);

void Fl_Terminal_set_margin_bottom(Fl_Terminal *self, int set);

int Fl_Terminal_margin_left(Fl_Terminal const *self);

void Fl_Terminal_set_margin_left(Fl_Terminal *self, int set);

int Fl_Terminal_margin_right(Fl_Terminal const *self);

void Fl_Terminal_set_margin_right(Fl_Terminal *self, int set);

int Fl_Terminal_margin_top(Fl_Terminal const *self);

void Fl_Terminal_set_margin_top(Fl_Terminal *self, int set);

unsigned Fl_Terminal_output_translate(Fl_Terminal const *self
);

void Fl_Terminal_set_output_translate(Fl_Terminal *self, unsigned set);

void Fl_Terminal_print_char(Fl_Terminal *self, char c);

void Fl_Terminal_print_char_utf8(Fl_Terminal *self, const char *txt, int len);


void Fl_Terminal_printf(Fl_Terminal *self, const char *fmt, ...);

void Fl_Terminal_plot_char(Fl_Terminal *self, char c, int row, int col);

void Fl_Terminal_plot_char_utf8(
    Fl_Terminal *self, const char *txt, int len, int row, int col
);

float Fl_Terminal_redraw_rate(Fl_Terminal const *self);

void Fl_Terminal_set_redraw_rate(Fl_Terminal *self, float set);

int Fl_Terminal_redraw_style(Fl_Terminal const *self
);

void Fl_Terminal_set_redraw_style(Fl_Terminal *self, int set);

void Fl_Terminal_reset_terminal(Fl_Terminal *self);

int Fl_Terminal_scrollbar_actual_size(Fl_Terminal const *self);

int Fl_Terminal_scrollbar_size(Fl_Terminal const *self);

void Fl_Terminal_set_scrollbar_size(Fl_Terminal *self, int set);
int Fl_Terminal_hscrollbar_style(Fl_Terminal const *self);

void Fl_Terminal_set_hscrollbar_style(Fl_Terminal *self, int set);

unsigned Fl_Terminal_selection_bg_color(Fl_Terminal const *self
);

void Fl_Terminal_set_selection_bg_color(Fl_Terminal *self, unsigned set);

unsigned Fl_Terminal_selection_fg_color(Fl_Terminal const *self
);

void Fl_Terminal_set_selection_fg_color(Fl_Terminal *self, unsigned set);

int Fl_Terminal_show_unknown(Fl_Terminal const *self);

void Fl_Terminal_set_show_unknown(Fl_Terminal *self, int boolean);

unsigned char Fl_Terminal_text_attrib(Fl_Terminal const *self);

void Fl_Terminal_set_text_attrib(
    Fl_Terminal *self,
    unsigned char set
);

unsigned Fl_Terminal_text_bg_color(Fl_Terminal const *self
);

void Fl_Terminal_set_text_bg_color(Fl_Terminal *self, unsigned set);

unsigned Fl_Terminal_text_bg_color_default(Fl_Terminal const *self
);

void Fl_Terminal_set_text_bg_color_default(Fl_Terminal *self, unsigned set);

void Fl_Terminal_set_text_bg_color_xterm(Fl_Terminal *self, unsigned char set);

void Fl_Terminal_set_text_color(Fl_Terminal *self, unsigned set);

unsigned Fl_Terminal_text_fg_color(Fl_Terminal const *self
);

void Fl_Terminal_set_text_fg_color(Fl_Terminal *self, unsigned set);

unsigned Fl_Terminal_text_fg_color_default(Fl_Terminal const *self
);

void Fl_Terminal_set_text_fg_color_default(Fl_Terminal *self, unsigned set);

void Fl_Terminal_set_text_fg_color_xterm(Fl_Terminal *self, unsigned char set);

int Fl_Terminal_text_font(Fl_Terminal const *self);

void Fl_Terminal_set_text_font(Fl_Terminal *self, int set);

int Fl_Terminal_text_size(Fl_Terminal const *self);

void Fl_Terminal_set_text_size(Fl_Terminal *self, int set);

const char* Fl_Terminal_text(Fl_Terminal const *self, int lines_below_cursor);

const char *Fl_Terminal_selection_text(Fl_Terminal const *self);
int Fl_Terminal_selection_text_len(Fl_Terminal const *self);



typedef void Fl_Terminal_Scrollbar;
Fl_Terminal_Scrollbar * Fl_Terminal_scrollbar(Fl_Terminal *self);
Fl_Terminal_Scrollbar * Fl_Terminal_hscrollbar(Fl_Terminal *self);



typedef void Fl_Terminal_Utf8Char;

unsigned Fl_Terminal_Utf8Char_attr_bgcolor(
    Fl_Terminal_Utf8Char const *self, const Fl_Terminal *grp);

unsigned Fl_Terminal_Utf8Char_attr_fgcolor(
    Fl_Terminal_Utf8Char const *self, const Fl_Terminal *grp);

unsigned char Fl_Terminal_Utf8Char_attrib(Fl_Terminal_Utf8Char const *self);

unsigned Fl_Terminal_Utf8Char_bgcolor(Fl_Terminal_Utf8Char const *self
);

unsigned Fl_Terminal_Utf8Char_fgcolor(Fl_Terminal_Utf8Char const *self
);

int Fl_Terminal_Utf8Char_is_char(Fl_Terminal_Utf8Char const *self,
                                 char c);

int Fl_Terminal_Utf8Char_length(Fl_Terminal_Utf8Char const *self);

int Fl_Terminal_Utf8Char_max_utf8(Fl_Terminal_Utf8Char const *self);

double Fl_Terminal_Utf8Char_pwidth(Fl_Terminal_Utf8Char const *self);

int Fl_Terminal_Utf8Char_pwidth_int(Fl_Terminal_Utf8Char const *self);

const unsigned char *
Fl_Terminal_Utf8Char_text_utf8(Fl_Terminal_Utf8Char const *self);

unsigned char Fl_Terminal_Utf8Char_charflags(Fl_Terminal_Utf8Char const *self);

int Fl_Terminal_Utf8Char_length(Fl_Terminal_Utf8Char const *self);


Fl_Terminal_Utf8Char *Fl_Terminal_Utf8Char_new_obj(unsigned char c);




int Fl_Terminal_disp_erow(Fl_Terminal const *self);

int Fl_Terminal_disp_srow(Fl_Terminal const *self);

int Fl_Terminal_hist_erow(Fl_Terminal const *self);

int Fl_Terminal_hist_srow(Fl_Terminal const *self);

int Fl_Terminal_hist_use(Fl_Terminal const *self);

int Fl_Terminal_hist_use_srow(Fl_Terminal const *self);

int Fl_Terminal_h_to_row(Fl_Terminal const *self, int H);

int Fl_Terminal_w_to_col(Fl_Terminal const *self, int W);

int Fl_Terminal_is_inside_selection(
    Fl_Terminal const *self, int row, int col
);

int Fl_Terminal_is_selection(Fl_Terminal const *self
);

int Fl_Terminal_offset(Fl_Terminal const *self);

int Fl_Terminal_ring_erow(Fl_Terminal const *self);

int Fl_Terminal_ring_srow(Fl_Terminal const *self);

int Fl_Terminal_ring_rows(Fl_Terminal const *self);

const Fl_Terminal_Utf8Char *
Fl_Terminal_u8c_cursor(Fl_Terminal const *self);

const Fl_Terminal_Utf8Char *
Fl_Terminal_u8c_disp_row(Fl_Terminal const *self, int drow);

const Fl_Terminal_Utf8Char *
Fl_Terminal_u8c_hist_row(Fl_Terminal const *self, int hrow);

const Fl_Terminal_Utf8Char *
Fl_Terminal_u8c_hist_use_row(Fl_Terminal const *self, int hurow);

const Fl_Terminal_Utf8Char *
Fl_Terminal_u8c_ring_row(Fl_Terminal const *self, int grow);

const unsigned Fl_Terminal_Utf8Char_size(void);

void Fl_free_str(const char *str);




void Fl_Terminal_begin(Fl_Terminal *self); void Fl_Terminal_end(Fl_Terminal *self); int Fl_Terminal_find(Fl_Terminal *self, const void *); void Fl_Terminal_add(Fl_Terminal *self, void *); void Fl_Terminal_insert(Fl_Terminal *self, void *, int pos); void Fl_Terminal_remove(Fl_Terminal *self, void *wid); void Fl_Terminal_remove_by_index(Fl_Terminal *self, int idx); void Fl_Terminal_clear(Fl_Terminal *self); int Fl_Terminal_children(Fl_Terminal *self); Fl_Widget *Fl_Terminal_child(Fl_Terminal *, int index); void Fl_Terminal_resizable(Fl_Terminal *self, void *); void Fl_Terminal_set_clip_children(Fl_Terminal *self, int c); int Fl_Terminal_clip_children(Fl_Terminal *self); void Fl_Terminal_init_sizes(Fl_Terminal *self); void Fl_Terminal_draw_child(const Fl_Terminal *self, Fl_Widget *w); void Fl_Terminal_update_child(const Fl_Terminal *self, Fl_Widget *w); void Fl_Terminal_draw_outside_label(const Fl_Terminal *self, const Fl_Widget *w); void Fl_Terminal_draw_children(Fl_Terminal *self);
typedef void (*Fl_Text_Modify_Cb)(
    int pos,
    int nInserted,
    int nDeleted,
    int nRestyled,
    const char *deletedText,
    void *cbArg
);

typedef struct Fl_Text_Buffer Fl_Text_Buffer;

Fl_Text_Buffer *Fl_Text_Buffer_new(void);

void Fl_Text_Buffer_delete(Fl_Text_Buffer *);

const char *Fl_Text_Buffer_text(Fl_Text_Buffer *self);

void Fl_Text_Buffer_set_text(Fl_Text_Buffer *self, const char *txt);

void Fl_Text_Buffer_append(Fl_Text_Buffer *self, const char *txt);

void Fl_Text_Buffer_append_bytes(Fl_Text_Buffer *self, const char *txt, int len);

void Fl_Text_Buffer_remove(Fl_Text_Buffer *self, int start, int end);

int Fl_Text_Buffer_length(const Fl_Text_Buffer *self);

char *Fl_Text_Buffer_text_range(const Fl_Text_Buffer *self, int start, int end);

void Fl_Text_Buffer_insert(Fl_Text_Buffer *self, int pos, const char *text);

void Fl_Text_Buffer_replace(
    Fl_Text_Buffer *self, int start, int end, const char *text
);

void Fl_Text_Buffer_copy(
    Fl_Text_Buffer *self,
    Fl_Text_Buffer *fromBuf,
    int fromStart,
    int fromEnd,
    int toPos
);

int Fl_Text_Buffer_undo(Fl_Text_Buffer *self, int *cp);

void Fl_Text_Buffer_canUndo(Fl_Text_Buffer *self, char flag);

int Fl_Text_Buffer_can_undo(const Fl_Text_Buffer *self);

int Fl_Text_Buffer_load_file(Fl_Text_Buffer *self, const char *file);

int Fl_Text_Buffer_save_file(Fl_Text_Buffer *self, const char *file);

int Fl_Text_Buffer_tab_distance(const Fl_Text_Buffer *self);

void Fl_Text_Buffer_set_tab_distance(Fl_Text_Buffer *self, int tabDist);

void Fl_Text_Buffer_select(Fl_Text_Buffer *self, int start, int end);

int Fl_Text_Buffer_selected(const Fl_Text_Buffer *self);

void Fl_Text_Buffer_unselect(Fl_Text_Buffer *self);

int Fl_Text_Buffer_selection_position(
    Fl_Text_Buffer *self, int *start, int *end
);

char *Fl_Text_Buffer_selection_text(Fl_Text_Buffer *self);

void Fl_Text_Buffer_remove_selection(Fl_Text_Buffer *self);

void Fl_Text_Buffer_replace_selection(Fl_Text_Buffer *self, const char *text);

void Fl_Text_Buffer_secondary_select(Fl_Text_Buffer *self, int start, int end);

int Fl_Text_Buffer_secondary_selected(Fl_Text_Buffer *self);

void Fl_Text_Buffer_secondary_unselect(Fl_Text_Buffer *self);

int Fl_Text_Buffer_secondary_selection_position(
    Fl_Text_Buffer *self, int *start, int *end
);

char *Fl_Text_Buffer_secondary_selection_text(Fl_Text_Buffer *self);

void Fl_Text_Buffer_remove_secondary_selection(Fl_Text_Buffer *self);

void Fl_Text_Buffer_replace_secondary_selection(
    Fl_Text_Buffer *self, const char *text
);

void Fl_Text_Buffer_highlight(Fl_Text_Buffer *self, int start, int end);

int Fl_Text_Buffer_is_highlighted(Fl_Text_Buffer *self);

void Fl_Text_Buffer_unhighlight(Fl_Text_Buffer *self);

int Fl_Text_Buffer_highlight_position(
    Fl_Text_Buffer *self, int *start, int *end
);

char *Fl_Text_Buffer_highlight_text(Fl_Text_Buffer *self);

char *Fl_Text_Buffer_line_text(const Fl_Text_Buffer *self, int pos);

int Fl_Text_Buffer_line_start(const Fl_Text_Buffer *self, int pos);

int Fl_Text_Buffer_word_start(const Fl_Text_Buffer *self, int pos);

int Fl_Text_Buffer_word_end(const Fl_Text_Buffer *self, int pos);

int Fl_Text_Buffer_count_lines(
    const Fl_Text_Buffer *self, int startPos, int endPos
);

void Fl_Text_Buffer_add_modify_callback(
    Fl_Text_Buffer *self, Fl_Text_Modify_Cb bufModifiedCB, void *cbArg
);

void Fl_Text_Buffer_remove_modify_callback(
    Fl_Text_Buffer *self, Fl_Text_Modify_Cb bufModifiedCB, void *cbArg
);

void Fl_Text_Buffer_call_modify_callbacks(Fl_Text_Buffer *self);

int Fl_Text_Buffer_search_forward(
    const Fl_Text_Buffer *self,
    int start_pos,
    const char *search_string,
    int *found_pos,
    int match_case
);

int Fl_Text_Buffer_search_backward(
    const Fl_Text_Buffer *self,
    int start_pos,
    const char *search_string,
    int *found_pos,
    int match_case
);

int Fl_Text_Buffer_findchar_forward(
    const Fl_Text_Buffer *self,
    int start_pos,
    unsigned int search_char,
    int *found_pos
);

int Fl_Text_Buffer_findchar_backward(
    const Fl_Text_Buffer *self,
    int start_pos,
    unsigned int search_char,
    int *found_pos
);

int Fl_Text_Buffer_redo(Fl_Text_Buffer *self, int *cp);

int Fl_Text_Buffer_can_redo(const Fl_Text_Buffer *self);

typedef struct Fl_Text_Display Fl_Text_Display; Fl_Text_Display *Fl_Text_Display_new( int x, int y, int width, int height, const char *title ); int Fl_Text_Display_x(Fl_Text_Display *); int Fl_Text_Display_y(Fl_Text_Display *); int Fl_Text_Display_width(Fl_Text_Display *); int Fl_Text_Display_height(Fl_Text_Display *); const char *Fl_Text_Display_label(Fl_Text_Display *); void Fl_Text_Display_set_label(Fl_Text_Display *, const char *title); void Fl_Text_Display_redraw(Fl_Text_Display *); void Fl_Text_Display_show(Fl_Text_Display *); void Fl_Text_Display_hide(Fl_Text_Display *); void Fl_Text_Display_activate(Fl_Text_Display *); void Fl_Text_Display_deactivate(Fl_Text_Display *); void Fl_Text_Display_redraw_label(Fl_Text_Display *); void Fl_Text_Display_resize(Fl_Text_Display *, int x, int y, int width, int height); void Fl_Text_Display_widget_resize( Fl_Text_Display *, int x, int y, int width, int height ); const char *Fl_Text_Display_tooltip(Fl_Text_Display *); void Fl_Text_Display_set_tooltip(Fl_Text_Display *, const char *txt); int Fl_Text_Display_get_type(Fl_Text_Display *); void Fl_Text_Display_set_type(Fl_Text_Display *, int typ); unsigned int Fl_Text_Display_color(Fl_Text_Display *); void Fl_Text_Display_set_color(Fl_Text_Display *, unsigned int color); void Fl_Text_Display_measure_label(const Fl_Text_Display *, int *, int *); unsigned int Fl_Text_Display_label_color(Fl_Text_Display *); void Fl_Text_Display_set_label_color(Fl_Text_Display *, unsigned int color); int Fl_Text_Display_label_font(Fl_Text_Display *); void Fl_Text_Display_set_label_font(Fl_Text_Display *, int font); int Fl_Text_Display_label_size(Fl_Text_Display *); void Fl_Text_Display_set_label_size(Fl_Text_Display *, int sz); int Fl_Text_Display_label_type(Fl_Text_Display *); void Fl_Text_Display_set_label_type(Fl_Text_Display *, int typ); int Fl_Text_Display_box(Fl_Text_Display *); void Fl_Text_Display_set_box(Fl_Text_Display *, int typ); int Fl_Text_Display_changed(Fl_Text_Display *); void Fl_Text_Display_set_changed(Fl_Text_Display *); void Fl_Text_Display_clear_changed(Fl_Text_Display *); int Fl_Text_Display_align(Fl_Text_Display *); void Fl_Text_Display_set_align(Fl_Text_Display *, int typ); void Fl_Text_Display_delete(Fl_Text_Display *); void Fl_Text_Display_set_image(Fl_Text_Display *, void *); void Fl_Text_Display_handle( Fl_Text_Display *self, custom_handler_callback cb, void *data ); int Fl_Text_Display_handle_event(Fl_Text_Display *self, int event); void Fl_Text_Display_draw(Fl_Text_Display *self, custom_draw_callback cb, void *data); void Fl_Text_Display_resize_callback( Fl_Text_Display *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Text_Display_set_when(Fl_Text_Display *, int); int Fl_Text_Display_when(const Fl_Text_Display *); const void *Fl_Text_Display_image(const Fl_Text_Display *); void *Fl_Text_Display_parent(const Fl_Text_Display *self); unsigned int Fl_Text_Display_selection_color(Fl_Text_Display *); void Fl_Text_Display_set_selection_color(Fl_Text_Display *, unsigned int color); void Fl_Text_Display_do_callback(Fl_Text_Display *); int Fl_Text_Display_inside(const Fl_Text_Display *self, void *); void *Fl_Text_Display_window(const Fl_Text_Display *); void *Fl_Text_Display_top_window(const Fl_Text_Display *); int Fl_Text_Display_takes_events(const Fl_Text_Display *); void *Fl_Text_Display_user_data(const Fl_Text_Display *); int Fl_Text_Display_take_focus(Fl_Text_Display *self); void Fl_Text_Display_set_visible_focus(Fl_Text_Display *self); void Fl_Text_Display_clear_visible_focus(Fl_Text_Display *self); void Fl_Text_Display_visible_focus(Fl_Text_Display *self, int v); unsigned int Fl_Text_Display_has_visible_focus(Fl_Text_Display *self); void Fl_Text_Display_set_user_data(Fl_Text_Display *, void *data); void *Fl_Text_Display_draw_data(const Fl_Text_Display *self); void *Fl_Text_Display_handle_data(const Fl_Text_Display *self); void Fl_Text_Display_set_draw_data(Fl_Text_Display *self, void *data); void Fl_Text_Display_set_handle_data(Fl_Text_Display *self, void *data); unsigned char Fl_Text_Display_damage(const Fl_Text_Display *self); void Fl_Text_Display_set_damage(Fl_Text_Display *self, unsigned char flag); void Fl_Text_Display_set_damage_area( Fl_Text_Display *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Text_Display_clear_damage(Fl_Text_Display *self); void *Fl_Text_Display_as_window(Fl_Text_Display *self); void *Fl_Text_Display_as_group(Fl_Text_Display *self); void Fl_Text_Display_set_deimage(Fl_Text_Display *, void *); const void *Fl_Text_Display_deimage(const Fl_Text_Display *); void Fl_Text_Display_set_callback(Fl_Text_Display *, Fl_Callback *, void *); int Fl_Text_Display_visible(const Fl_Text_Display *self); int Fl_Text_Display_visible_r(const Fl_Text_Display *self); unsigned int Fl_Text_Display_active(const Fl_Text_Display *self); int Fl_Text_Display_active_r(const Fl_Text_Display *self); Fl_Callback *Fl_Text_Display_callback(const Fl_Text_Display *self); void Fl_Text_Display_set_deletion_callback( Fl_Text_Display *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Text_Display *Fl_Text_Display_from_dyn_ptr(Fl_Widget *ptr); Fl_Text_Display *Fl_Text_Display_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Text_Display_super_draw(Fl_Widget *ptr, int flag); void Fl_Text_Display_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Text_Display_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Text_Display_init(Fl_Text_Display *);

Fl_Text_Buffer *Fl_Text_Display_get_buffer(Fl_Text_Display *);

void Fl_Text_Display_set_buffer(Fl_Text_Display *, Fl_Text_Buffer *);

Fl_Text_Buffer *Fl_Text_Display_get_style_buffer(Fl_Text_Display *);

int Fl_Text_Display_text_font(const Fl_Text_Display *); void Fl_Text_Display_set_text_font(Fl_Text_Display *, int s); int Fl_Text_Display_text_size(const Fl_Text_Display *); void Fl_Text_Display_set_text_size(Fl_Text_Display *, int s); unsigned int Fl_Text_Display_text_color(const Fl_Text_Display *); void Fl_Text_Display_set_text_color(Fl_Text_Display *, unsigned int n); void Fl_Text_Display_scroll(Fl_Text_Display *, int topLineNum, int horizOffset); void Fl_Text_Display_insert(Fl_Text_Display *, const char *text); void Fl_Text_Display_set_insert_position(Fl_Text_Display *, int newPos); int Fl_Text_Display_insert_position(const Fl_Text_Display *); int Fl_Text_Display_position_to_xy(const Fl_Text_Display *self, int pos, int *x, int *y); int Fl_Text_Display_count_lines( const Fl_Text_Display *, int start, int end, int start_pos_is_line_start ); int Fl_Text_Display_move_right(Fl_Text_Display *); int Fl_Text_Display_move_left(Fl_Text_Display *); int Fl_Text_Display_move_up(Fl_Text_Display *); int Fl_Text_Display_move_down(Fl_Text_Display *); void Fl_Text_Display_show_cursor(Fl_Text_Display *, int boolean); void Fl_Text_Display_set_highlight_data( Fl_Text_Display *self, void *sbuff, unsigned int *color, int *font, int *fontsz, unsigned *attr, unsigned int *bgcolor, int sz ); void Fl_Text_Display_set_cursor_style(Fl_Text_Display *, int style); void Fl_Text_Display_set_cursor_color(Fl_Text_Display *, unsigned int color); void Fl_Text_Display_set_scrollbar_size(Fl_Text_Display *, int newSize); void Fl_Text_Display_set_scrollbar_align(Fl_Text_Display *, int align); int Fl_Text_Display_cursor_style(Fl_Text_Display *); unsigned int Fl_Text_Display_cursor_color(Fl_Text_Display *); int Fl_Text_Display_scrollbar_size(Fl_Text_Display *); int Fl_Text_Display_scrollbar_align(Fl_Text_Display *); int Fl_Text_Display_line_start(const Fl_Text_Display *self, int pos); int Fl_Text_Display_line_end( const Fl_Text_Display *self, int startPos, int startPosIsLineStart ); int Fl_Text_Display_skip_lines( Fl_Text_Display *self, int startPos, int nLines, int startPosIsLineStart ); int Fl_Text_Display_rewind_lines(Fl_Text_Display *self, int startPos, int nLines); void Fl_Text_Display_next_word(Fl_Text_Display *self); void Fl_Text_Display_previous_word(Fl_Text_Display *self); int Fl_Text_Display_word_start(const Fl_Text_Display *self, int pos); int Fl_Text_Display_word_end(const Fl_Text_Display *self, int pos); double Fl_Text_Display_x_to_col(const Fl_Text_Display *self, double x); double Fl_Text_Display_col_to_x(const Fl_Text_Display *self, double col); void Fl_Text_Display_set_linenumber_width(Fl_Text_Display *self, int width); int Fl_Text_Display_linenumber_width(const Fl_Text_Display *self); void Fl_Text_Display_set_linenumber_font(Fl_Text_Display *self, int val); int Fl_Text_Display_linenumber_font(const Fl_Text_Display *self); void Fl_Text_Display_set_linenumber_size(Fl_Text_Display *self, int val); int Fl_Text_Display_linenumber_size(const Fl_Text_Display *self); void Fl_Text_Display_set_linenumber_fgcolor(Fl_Text_Display *self, unsigned int val); unsigned int Fl_Text_Display_linenumber_fgcolor(const Fl_Text_Display *self); void Fl_Text_Display_set_linenumber_bgcolor(Fl_Text_Display *self, unsigned int val); unsigned int Fl_Text_Display_linenumber_bgcolor(const Fl_Text_Display *self); void Fl_Text_Display_set_linenumber_align(Fl_Text_Display *self, int val); int Fl_Text_Display_linenumber_align(const Fl_Text_Display *self); int Fl_Text_Display_in_selection(const Fl_Text_Display *self, int x, int y); void Fl_Text_Display_wrap_mode(Fl_Text_Display *self, int wrap, int wrap_margin); int Fl_Text_Display_wrapped_column(const Fl_Text_Display *self, int row, int column); int Fl_Text_Display_wrapped_row(const Fl_Text_Display *self, int row); void Fl_Text_Display_set_grammar_underline_color( Fl_Text_Display *self, unsigned int color ); unsigned int Fl_Text_Display_grammar_underline_color(const Fl_Text_Display *self); void Fl_Text_Display_set_spelling_underline_color( Fl_Text_Display *self, unsigned int color ); unsigned int Fl_Text_Display_spelling_underline_color(const Fl_Text_Display *self); void Fl_Text_Display_set_secondary_selection_color( Fl_Text_Display *self, unsigned int color ); unsigned int Fl_Text_Display_secondary_selection_color(const Fl_Text_Display *self); void Fl_Text_Display_show_insert_position(Fl_Text_Display *self); void Fl_Text_Display_overstrike(Fl_Text_Display *self, const char *text);

typedef struct Fl_Text_Editor Fl_Text_Editor; Fl_Text_Editor *Fl_Text_Editor_new( int x, int y, int width, int height, const char *title ); int Fl_Text_Editor_x(Fl_Text_Editor *); int Fl_Text_Editor_y(Fl_Text_Editor *); int Fl_Text_Editor_width(Fl_Text_Editor *); int Fl_Text_Editor_height(Fl_Text_Editor *); const char *Fl_Text_Editor_label(Fl_Text_Editor *); void Fl_Text_Editor_set_label(Fl_Text_Editor *, const char *title); void Fl_Text_Editor_redraw(Fl_Text_Editor *); void Fl_Text_Editor_show(Fl_Text_Editor *); void Fl_Text_Editor_hide(Fl_Text_Editor *); void Fl_Text_Editor_activate(Fl_Text_Editor *); void Fl_Text_Editor_deactivate(Fl_Text_Editor *); void Fl_Text_Editor_redraw_label(Fl_Text_Editor *); void Fl_Text_Editor_resize(Fl_Text_Editor *, int x, int y, int width, int height); void Fl_Text_Editor_widget_resize( Fl_Text_Editor *, int x, int y, int width, int height ); const char *Fl_Text_Editor_tooltip(Fl_Text_Editor *); void Fl_Text_Editor_set_tooltip(Fl_Text_Editor *, const char *txt); int Fl_Text_Editor_get_type(Fl_Text_Editor *); void Fl_Text_Editor_set_type(Fl_Text_Editor *, int typ); unsigned int Fl_Text_Editor_color(Fl_Text_Editor *); void Fl_Text_Editor_set_color(Fl_Text_Editor *, unsigned int color); void Fl_Text_Editor_measure_label(const Fl_Text_Editor *, int *, int *); unsigned int Fl_Text_Editor_label_color(Fl_Text_Editor *); void Fl_Text_Editor_set_label_color(Fl_Text_Editor *, unsigned int color); int Fl_Text_Editor_label_font(Fl_Text_Editor *); void Fl_Text_Editor_set_label_font(Fl_Text_Editor *, int font); int Fl_Text_Editor_label_size(Fl_Text_Editor *); void Fl_Text_Editor_set_label_size(Fl_Text_Editor *, int sz); int Fl_Text_Editor_label_type(Fl_Text_Editor *); void Fl_Text_Editor_set_label_type(Fl_Text_Editor *, int typ); int Fl_Text_Editor_box(Fl_Text_Editor *); void Fl_Text_Editor_set_box(Fl_Text_Editor *, int typ); int Fl_Text_Editor_changed(Fl_Text_Editor *); void Fl_Text_Editor_set_changed(Fl_Text_Editor *); void Fl_Text_Editor_clear_changed(Fl_Text_Editor *); int Fl_Text_Editor_align(Fl_Text_Editor *); void Fl_Text_Editor_set_align(Fl_Text_Editor *, int typ); void Fl_Text_Editor_delete(Fl_Text_Editor *); void Fl_Text_Editor_set_image(Fl_Text_Editor *, void *); void Fl_Text_Editor_handle( Fl_Text_Editor *self, custom_handler_callback cb, void *data ); int Fl_Text_Editor_handle_event(Fl_Text_Editor *self, int event); void Fl_Text_Editor_draw(Fl_Text_Editor *self, custom_draw_callback cb, void *data); void Fl_Text_Editor_resize_callback( Fl_Text_Editor *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Text_Editor_set_when(Fl_Text_Editor *, int); int Fl_Text_Editor_when(const Fl_Text_Editor *); const void *Fl_Text_Editor_image(const Fl_Text_Editor *); void *Fl_Text_Editor_parent(const Fl_Text_Editor *self); unsigned int Fl_Text_Editor_selection_color(Fl_Text_Editor *); void Fl_Text_Editor_set_selection_color(Fl_Text_Editor *, unsigned int color); void Fl_Text_Editor_do_callback(Fl_Text_Editor *); int Fl_Text_Editor_inside(const Fl_Text_Editor *self, void *); void *Fl_Text_Editor_window(const Fl_Text_Editor *); void *Fl_Text_Editor_top_window(const Fl_Text_Editor *); int Fl_Text_Editor_takes_events(const Fl_Text_Editor *); void *Fl_Text_Editor_user_data(const Fl_Text_Editor *); int Fl_Text_Editor_take_focus(Fl_Text_Editor *self); void Fl_Text_Editor_set_visible_focus(Fl_Text_Editor *self); void Fl_Text_Editor_clear_visible_focus(Fl_Text_Editor *self); void Fl_Text_Editor_visible_focus(Fl_Text_Editor *self, int v); unsigned int Fl_Text_Editor_has_visible_focus(Fl_Text_Editor *self); void Fl_Text_Editor_set_user_data(Fl_Text_Editor *, void *data); void *Fl_Text_Editor_draw_data(const Fl_Text_Editor *self); void *Fl_Text_Editor_handle_data(const Fl_Text_Editor *self); void Fl_Text_Editor_set_draw_data(Fl_Text_Editor *self, void *data); void Fl_Text_Editor_set_handle_data(Fl_Text_Editor *self, void *data); unsigned char Fl_Text_Editor_damage(const Fl_Text_Editor *self); void Fl_Text_Editor_set_damage(Fl_Text_Editor *self, unsigned char flag); void Fl_Text_Editor_set_damage_area( Fl_Text_Editor *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Text_Editor_clear_damage(Fl_Text_Editor *self); void *Fl_Text_Editor_as_window(Fl_Text_Editor *self); void *Fl_Text_Editor_as_group(Fl_Text_Editor *self); void Fl_Text_Editor_set_deimage(Fl_Text_Editor *, void *); const void *Fl_Text_Editor_deimage(const Fl_Text_Editor *); void Fl_Text_Editor_set_callback(Fl_Text_Editor *, Fl_Callback *, void *); int Fl_Text_Editor_visible(const Fl_Text_Editor *self); int Fl_Text_Editor_visible_r(const Fl_Text_Editor *self); unsigned int Fl_Text_Editor_active(const Fl_Text_Editor *self); int Fl_Text_Editor_active_r(const Fl_Text_Editor *self); Fl_Callback *Fl_Text_Editor_callback(const Fl_Text_Editor *self); void Fl_Text_Editor_set_deletion_callback( Fl_Text_Editor *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Text_Editor *Fl_Text_Editor_from_dyn_ptr(Fl_Widget *ptr); Fl_Text_Editor *Fl_Text_Editor_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Text_Editor_super_draw(Fl_Widget *ptr, int flag); void Fl_Text_Editor_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Text_Editor_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Text_Editor_init(Fl_Text_Editor *);

Fl_Text_Buffer *Fl_Text_Editor_get_buffer(Fl_Text_Editor *);

void Fl_Text_Editor_set_buffer(Fl_Text_Editor *, Fl_Text_Buffer *);

Fl_Text_Buffer *Fl_Text_Editor_get_style_buffer(Fl_Text_Editor *);

int Fl_Text_Editor_text_font(const Fl_Text_Editor *); void Fl_Text_Editor_set_text_font(Fl_Text_Editor *, int s); int Fl_Text_Editor_text_size(const Fl_Text_Editor *); void Fl_Text_Editor_set_text_size(Fl_Text_Editor *, int s); unsigned int Fl_Text_Editor_text_color(const Fl_Text_Editor *); void Fl_Text_Editor_set_text_color(Fl_Text_Editor *, unsigned int n); void Fl_Text_Editor_scroll(Fl_Text_Editor *, int topLineNum, int horizOffset); void Fl_Text_Editor_insert(Fl_Text_Editor *, const char *text); void Fl_Text_Editor_set_insert_position(Fl_Text_Editor *, int newPos); int Fl_Text_Editor_insert_position(const Fl_Text_Editor *); int Fl_Text_Editor_position_to_xy(const Fl_Text_Editor *self, int pos, int *x, int *y); int Fl_Text_Editor_count_lines( const Fl_Text_Editor *, int start, int end, int start_pos_is_line_start ); int Fl_Text_Editor_move_right(Fl_Text_Editor *); int Fl_Text_Editor_move_left(Fl_Text_Editor *); int Fl_Text_Editor_move_up(Fl_Text_Editor *); int Fl_Text_Editor_move_down(Fl_Text_Editor *); void Fl_Text_Editor_show_cursor(Fl_Text_Editor *, int boolean); void Fl_Text_Editor_set_highlight_data( Fl_Text_Editor *self, void *sbuff, unsigned int *color, int *font, int *fontsz, unsigned *attr, unsigned int *bgcolor, int sz ); void Fl_Text_Editor_set_cursor_style(Fl_Text_Editor *, int style); void Fl_Text_Editor_set_cursor_color(Fl_Text_Editor *, unsigned int color); void Fl_Text_Editor_set_scrollbar_size(Fl_Text_Editor *, int newSize); void Fl_Text_Editor_set_scrollbar_align(Fl_Text_Editor *, int align); int Fl_Text_Editor_cursor_style(Fl_Text_Editor *); unsigned int Fl_Text_Editor_cursor_color(Fl_Text_Editor *); int Fl_Text_Editor_scrollbar_size(Fl_Text_Editor *); int Fl_Text_Editor_scrollbar_align(Fl_Text_Editor *); int Fl_Text_Editor_line_start(const Fl_Text_Editor *self, int pos); int Fl_Text_Editor_line_end( const Fl_Text_Editor *self, int startPos, int startPosIsLineStart ); int Fl_Text_Editor_skip_lines( Fl_Text_Editor *self, int startPos, int nLines, int startPosIsLineStart ); int Fl_Text_Editor_rewind_lines(Fl_Text_Editor *self, int startPos, int nLines); void Fl_Text_Editor_next_word(Fl_Text_Editor *self); void Fl_Text_Editor_previous_word(Fl_Text_Editor *self); int Fl_Text_Editor_word_start(const Fl_Text_Editor *self, int pos); int Fl_Text_Editor_word_end(const Fl_Text_Editor *self, int pos); double Fl_Text_Editor_x_to_col(const Fl_Text_Editor *self, double x); double Fl_Text_Editor_col_to_x(const Fl_Text_Editor *self, double col); void Fl_Text_Editor_set_linenumber_width(Fl_Text_Editor *self, int width); int Fl_Text_Editor_linenumber_width(const Fl_Text_Editor *self); void Fl_Text_Editor_set_linenumber_font(Fl_Text_Editor *self, int val); int Fl_Text_Editor_linenumber_font(const Fl_Text_Editor *self); void Fl_Text_Editor_set_linenumber_size(Fl_Text_Editor *self, int val); int Fl_Text_Editor_linenumber_size(const Fl_Text_Editor *self); void Fl_Text_Editor_set_linenumber_fgcolor(Fl_Text_Editor *self, unsigned int val); unsigned int Fl_Text_Editor_linenumber_fgcolor(const Fl_Text_Editor *self); void Fl_Text_Editor_set_linenumber_bgcolor(Fl_Text_Editor *self, unsigned int val); unsigned int Fl_Text_Editor_linenumber_bgcolor(const Fl_Text_Editor *self); void Fl_Text_Editor_set_linenumber_align(Fl_Text_Editor *self, int val); int Fl_Text_Editor_linenumber_align(const Fl_Text_Editor *self); int Fl_Text_Editor_in_selection(const Fl_Text_Editor *self, int x, int y); void Fl_Text_Editor_wrap_mode(Fl_Text_Editor *self, int wrap, int wrap_margin); int Fl_Text_Editor_wrapped_column(const Fl_Text_Editor *self, int row, int column); int Fl_Text_Editor_wrapped_row(const Fl_Text_Editor *self, int row); void Fl_Text_Editor_set_grammar_underline_color( Fl_Text_Editor *self, unsigned int color ); unsigned int Fl_Text_Editor_grammar_underline_color(const Fl_Text_Editor *self); void Fl_Text_Editor_set_spelling_underline_color( Fl_Text_Editor *self, unsigned int color ); unsigned int Fl_Text_Editor_spelling_underline_color(const Fl_Text_Editor *self); void Fl_Text_Editor_set_secondary_selection_color( Fl_Text_Editor *self, unsigned int color ); unsigned int Fl_Text_Editor_secondary_selection_color(const Fl_Text_Editor *self); void Fl_Text_Editor_show_insert_position(Fl_Text_Editor *self); void Fl_Text_Editor_overstrike(Fl_Text_Editor *self, const char *text);

int Fl_Text_Editor_kf_copy(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_cut(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_paste(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_undo(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_redo(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_default(int c, Fl_Text_Editor *e);

int Fl_Text_Editor_kf_ignore(int c, Fl_Text_Editor *e);

int Fl_Text_Editor_kf_backspace(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_enter(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_move(int c, Fl_Text_Editor *e);

int Fl_Text_Editor_kf_shift_move(int c, Fl_Text_Editor *e);

int Fl_Text_Editor_kf_ctrl_move(int c, Fl_Text_Editor *e);

int Fl_Text_Editor_kf_c_s_move(int c, Fl_Text_Editor *e);

int Fl_Text_Editor_kf_meta_move(int c, Fl_Text_Editor *e);

int Fl_Text_Editor_kf_m_s_move(int c, Fl_Text_Editor *e);

int Fl_Text_Editor_kf_home(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_end(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_left(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_up(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_right(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_down(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_page_up(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_page_down(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_insert(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_delete(Fl_Text_Editor *e);

int Fl_Text_Editor_kf_select_all(Fl_Text_Editor *e);

void Fl_Text_Editor_set_insert_mode(Fl_Text_Editor *self, int b);

int Fl_Text_Editor_insert_mode(Fl_Text_Editor *self);

void Fl_Text_Editor_set_tab_nav(Fl_Text_Editor *self, int val);

int Fl_Text_Editor_tab_nav(const Fl_Text_Editor *self);

void Fl_Text_Editor_add_key_binding(
    Fl_Text_Editor *self, int key, int state, int (*kf)(int, Fl_Text_Editor *)
);

void Fl_Text_Editor_remove_key_binding(
    Fl_Text_Editor *self, int key, int state
);

void Fl_delete_stable(void *);
typedef struct Fl_Tree Fl_Tree; Fl_Tree *Fl_Tree_new( int x, int y, int width, int height, const char *title ); int Fl_Tree_x(Fl_Tree *); int Fl_Tree_y(Fl_Tree *); int Fl_Tree_width(Fl_Tree *); int Fl_Tree_height(Fl_Tree *); const char *Fl_Tree_label(Fl_Tree *); void Fl_Tree_set_label(Fl_Tree *, const char *title); void Fl_Tree_redraw(Fl_Tree *); void Fl_Tree_show(Fl_Tree *); void Fl_Tree_hide(Fl_Tree *); void Fl_Tree_activate(Fl_Tree *); void Fl_Tree_deactivate(Fl_Tree *); void Fl_Tree_redraw_label(Fl_Tree *); void Fl_Tree_resize(Fl_Tree *, int x, int y, int width, int height); void Fl_Tree_widget_resize( Fl_Tree *, int x, int y, int width, int height ); const char *Fl_Tree_tooltip(Fl_Tree *); void Fl_Tree_set_tooltip(Fl_Tree *, const char *txt); int Fl_Tree_get_type(Fl_Tree *); void Fl_Tree_set_type(Fl_Tree *, int typ); unsigned int Fl_Tree_color(Fl_Tree *); void Fl_Tree_set_color(Fl_Tree *, unsigned int color); void Fl_Tree_measure_label(const Fl_Tree *, int *, int *); unsigned int Fl_Tree_label_color(Fl_Tree *); void Fl_Tree_set_label_color(Fl_Tree *, unsigned int color); int Fl_Tree_label_font(Fl_Tree *); void Fl_Tree_set_label_font(Fl_Tree *, int font); int Fl_Tree_label_size(Fl_Tree *); void Fl_Tree_set_label_size(Fl_Tree *, int sz); int Fl_Tree_label_type(Fl_Tree *); void Fl_Tree_set_label_type(Fl_Tree *, int typ); int Fl_Tree_box(Fl_Tree *); void Fl_Tree_set_box(Fl_Tree *, int typ); int Fl_Tree_changed(Fl_Tree *); void Fl_Tree_set_changed(Fl_Tree *); void Fl_Tree_clear_changed(Fl_Tree *); int Fl_Tree_align(Fl_Tree *); void Fl_Tree_set_align(Fl_Tree *, int typ); void Fl_Tree_delete(Fl_Tree *); void Fl_Tree_set_image(Fl_Tree *, void *); void Fl_Tree_handle( Fl_Tree *self, custom_handler_callback cb, void *data ); int Fl_Tree_handle_event(Fl_Tree *self, int event); void Fl_Tree_draw(Fl_Tree *self, custom_draw_callback cb, void *data); void Fl_Tree_resize_callback( Fl_Tree *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Tree_set_when(Fl_Tree *, int); int Fl_Tree_when(const Fl_Tree *); const void *Fl_Tree_image(const Fl_Tree *); void *Fl_Tree_parent(const Fl_Tree *self); unsigned int Fl_Tree_selection_color(Fl_Tree *); void Fl_Tree_set_selection_color(Fl_Tree *, unsigned int color); void Fl_Tree_do_callback(Fl_Tree *); int Fl_Tree_inside(const Fl_Tree *self, void *); void *Fl_Tree_window(const Fl_Tree *); void *Fl_Tree_top_window(const Fl_Tree *); int Fl_Tree_takes_events(const Fl_Tree *); void *Fl_Tree_user_data(const Fl_Tree *); int Fl_Tree_take_focus(Fl_Tree *self); void Fl_Tree_set_visible_focus(Fl_Tree *self); void Fl_Tree_clear_visible_focus(Fl_Tree *self); void Fl_Tree_visible_focus(Fl_Tree *self, int v); unsigned int Fl_Tree_has_visible_focus(Fl_Tree *self); void Fl_Tree_set_user_data(Fl_Tree *, void *data); void *Fl_Tree_draw_data(const Fl_Tree *self); void *Fl_Tree_handle_data(const Fl_Tree *self); void Fl_Tree_set_draw_data(Fl_Tree *self, void *data); void Fl_Tree_set_handle_data(Fl_Tree *self, void *data); unsigned char Fl_Tree_damage(const Fl_Tree *self); void Fl_Tree_set_damage(Fl_Tree *self, unsigned char flag); void Fl_Tree_set_damage_area( Fl_Tree *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Tree_clear_damage(Fl_Tree *self); void *Fl_Tree_as_window(Fl_Tree *self); void *Fl_Tree_as_group(Fl_Tree *self); void Fl_Tree_set_deimage(Fl_Tree *, void *); const void *Fl_Tree_deimage(const Fl_Tree *); void Fl_Tree_set_callback(Fl_Tree *, Fl_Callback *, void *); int Fl_Tree_visible(const Fl_Tree *self); int Fl_Tree_visible_r(const Fl_Tree *self); unsigned int Fl_Tree_active(const Fl_Tree *self); int Fl_Tree_active_r(const Fl_Tree *self); Fl_Callback *Fl_Tree_callback(const Fl_Tree *self); void Fl_Tree_set_deletion_callback( Fl_Tree *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Tree *Fl_Tree_from_dyn_ptr(Fl_Widget *ptr); Fl_Tree *Fl_Tree_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Tree_super_draw(Fl_Widget *ptr, int flag); void Fl_Tree_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Tree_super_handle_first(Fl_Widget *ptr, int flag);

typedef struct Fl_Tree_Item Fl_Tree_Item;

typedef struct Fl_Tree_Item_Array Fl_Tree_Item_Array;

void Fl_Tree_begin(Fl_Tree *self);

void Fl_Tree_end(Fl_Tree *self);

void Fl_Tree_show_self(Fl_Tree *self);

void Fl_Tree_root_label(Fl_Tree *self, const char *new_label);

Fl_Tree_Item *Fl_Tree_root(Fl_Tree *self);

void Fl_Tree_set_root(Fl_Tree *self, Fl_Tree_Item *newitem);

Fl_Tree_Item *Fl_Tree_add(Fl_Tree *self, const char *name);

Fl_Tree_Item *
Fl_Tree_add_item(Fl_Tree *self, const char *name, Fl_Tree_Item *item);

Fl_Tree_Item *
Fl_Tree_insert_above(Fl_Tree *self, Fl_Tree_Item *above, const char *name);

Fl_Tree_Item *
Fl_Tree_insert(Fl_Tree *self, Fl_Tree_Item *item, const char *name, int pos);

const Fl_Tree_Item *Fl_Tree_find_item(const Fl_Tree *self, const char *path);

Fl_Tree_Item *Fl_Tree_find_item_mut(Fl_Tree *self, const char *path);

int Fl_Tree_remove(Fl_Tree *self, Fl_Tree_Item *item);

void Fl_Tree_clear(Fl_Tree *self);

void Fl_Tree_clear_children(Fl_Tree *self, Fl_Tree_Item *item);

const Fl_Tree_Item *Fl_Tree_find_clicked(const Fl_Tree *self, int yonly);

Fl_Tree_Item *Fl_Tree_item_clicked(Fl_Tree *self);

Fl_Tree_Item *Fl_Tree_first(Fl_Tree *self);

Fl_Tree_Item *Fl_Tree_first_visible_item(Fl_Tree *self);

Fl_Tree_Item *Fl_Tree_next(Fl_Tree *self, Fl_Tree_Item *item);

Fl_Tree_Item *Fl_Tree_prev(Fl_Tree *self, Fl_Tree_Item *item);

Fl_Tree_Item *Fl_Tree_last(Fl_Tree *self);

Fl_Tree_Item *Fl_Tree_last_visible_item(Fl_Tree *self);

Fl_Tree_Item *
Fl_Tree_next_visible_item(Fl_Tree *self, Fl_Tree_Item *start, int dir);

Fl_Tree_Item *Fl_Tree_first_selected_item(Fl_Tree *self);

Fl_Tree_Item *Fl_Tree_last_selected_item(Fl_Tree *self);

Fl_Tree_Item *
Fl_Tree_next_item(Fl_Tree *self, Fl_Tree_Item *item, int dir, int visible);

Fl_Tree_Item *
Fl_Tree_next_selected_item(Fl_Tree *self, Fl_Tree_Item *item, int dir);

int Fl_Tree_get_selected_items(Fl_Tree *self, Fl_Tree_Item_Array **arr);

int Fl_Tree_get_items(Fl_Tree *self, Fl_Tree_Item_Array **arr);

int Fl_Tree_open(Fl_Tree *self, const char *path, int docallback);

void Fl_Tree_open_toggle(Fl_Tree *self, Fl_Tree_Item *item, int docallback);

int Fl_Tree_close(Fl_Tree *self, const char *path, int docallback);

int Fl_Tree_is_open(const Fl_Tree *self, const char *path);

int Fl_Tree_is_close(const Fl_Tree *self, const char *path);

int Fl_Tree_select(Fl_Tree *self, const char *path, int docallback);

void Fl_Tree_select_toggle(Fl_Tree *self, Fl_Tree_Item *item, int docallback);

int Fl_Tree_deselect(Fl_Tree *self, const char *path, int docallback);

int Fl_Tree_deselect_all(Fl_Tree *self, Fl_Tree_Item *item, int docallback);

int Fl_Tree_select_only(Fl_Tree *self, Fl_Tree_Item *selitem, int docallback);

int Fl_Tree_select_all(Fl_Tree *self, Fl_Tree_Item *item, int docallback);

int Fl_Tree_extend_selection_dir(
    Fl_Tree *self,
    Fl_Tree_Item *from,
    Fl_Tree_Item *to,
    int dir,
    int val,
    int visible
);

int Fl_Tree_extend_selection(
    Fl_Tree *self, Fl_Tree_Item *from, Fl_Tree_Item *to, int val, int visible
);

void Fl_Tree_set_item_focus(Fl_Tree *self, Fl_Tree_Item *item);

Fl_Tree_Item *Fl_Tree_get_item_focus(const Fl_Tree *self);

int Fl_Tree_is_selected(Fl_Tree *self, const char *path);

int Fl_Tree_item_labelfont(const Fl_Tree *self);

void Fl_Tree_set_item_labelfont(Fl_Tree *self, int val);

int Fl_Tree_item_labelsize(const Fl_Tree *self);

void Fl_Tree_set_item_labelsize(Fl_Tree *self, int val);

unsigned int Fl_Tree_item_labelfgcolor(const Fl_Tree *self);

void Fl_Tree_set_item_labelfgcolor(Fl_Tree *self, unsigned int val);

unsigned int Fl_Tree_item_labelbgcolor(const Fl_Tree *self);

void Fl_Tree_set_item_labelbgcolor(Fl_Tree *self, unsigned int val);

unsigned int Fl_Tree_connectorcolor(const Fl_Tree *self);

void Fl_Tree_set_connectorcolor(Fl_Tree *self, unsigned int val);

int Fl_Tree_marginleft(const Fl_Tree *self);

void Fl_Tree_set_marginleft(Fl_Tree *self, int val);

int Fl_Tree_margintop(const Fl_Tree *self);

void Fl_Tree_set_margintop(Fl_Tree *self, int val);

int Fl_Tree_marginbottom(const Fl_Tree *self);

void Fl_Tree_set_marginbottom(Fl_Tree *self, int val);

int Fl_Tree_linespacing(const Fl_Tree *self);

void Fl_Tree_set_linespacing(Fl_Tree *self, int val);

int Fl_Tree_openchild_marginbottom(const Fl_Tree *self);

void Fl_Tree_set_openchild_marginbottom(Fl_Tree *self, int val);

int Fl_Tree_usericonmarginleft(const Fl_Tree *self);

void Fl_Tree_set_usericonmarginleft(Fl_Tree *self, int val);

int Fl_Tree_labelmarginleft(const Fl_Tree *self);

void Fl_Tree_set_labelmarginleft(Fl_Tree *self, int val);

int Fl_Tree_widgetmarginleft(const Fl_Tree *self);

void Fl_Tree_set_widgetmarginleft(Fl_Tree *self, int val);

int Fl_Tree_connectorwidth(const Fl_Tree *self);

void Fl_Tree_set_connectorwidth(Fl_Tree *self, int val);

void *Fl_Tree_usericon(const Fl_Tree *self);

void Fl_Tree_set_usericon(Fl_Tree *self, void *val);

void *Fl_Tree_openicon(const Fl_Tree *self);

void Fl_Tree_set_openicon(Fl_Tree *self, void *val);

void *Fl_Tree_closeicon(const Fl_Tree *self);

void Fl_Tree_set_closeicon(Fl_Tree *self, void *val);

int Fl_Tree_showcollapse(const Fl_Tree *self);

void Fl_Tree_set_showcollapse(Fl_Tree *self, int val);

int Fl_Tree_showroot(const Fl_Tree *self);

void Fl_Tree_set_showroot(Fl_Tree *self, int val);

int Fl_Tree_connectorstyle(const Fl_Tree *self);

void Fl_Tree_set_connectorstyle(Fl_Tree *self, int val);

int Fl_Tree_sortorder(const Fl_Tree *self);

void Fl_Tree_set_sortorder(Fl_Tree *self, int val);

int Fl_Tree_selectbox(const Fl_Tree *self);

void Fl_Tree_set_selectbox(Fl_Tree *self, int val);

int Fl_Tree_selectmode(const Fl_Tree *self);

void Fl_Tree_set_selectmode(Fl_Tree *self, int val);

int Fl_Tree_item_reselect_mode(const Fl_Tree *self);

void Fl_Tree_set_item_reselect_mode(Fl_Tree *self, int mode);

int Fl_Tree_item_draw_mode(const Fl_Tree *self);

void Fl_Tree_set_item_draw_mode(Fl_Tree *self, int mode);

void Fl_Tree_calc_dimensions(Fl_Tree *self);

void Fl_Tree_calc_tree(Fl_Tree *self);

void Fl_Tree_recalc_tree(Fl_Tree *self);

int Fl_Tree_displayed(Fl_Tree *self, Fl_Tree_Item *item);

void Fl_Tree_show_item(Fl_Tree *self, Fl_Tree_Item *item, int yoff);

void Fl_Tree_show_item_top(Fl_Tree *self, Fl_Tree_Item *item);

void Fl_Tree_show_item_middle(Fl_Tree *self, Fl_Tree_Item *item);

void Fl_Tree_show_item_bottom(Fl_Tree *self, Fl_Tree_Item *item);

void Fl_Tree_display(Fl_Tree *self, Fl_Tree_Item *item);

int Fl_Tree_vposition(const Fl_Tree *self);

void Fl_Tree_set_vposition(Fl_Tree *self, int pos);

int Fl_Tree_hposition(const Fl_Tree *self);

void Fl_Tree_set_hposition(Fl_Tree *self, int pos);

int Fl_Tree_is_scrollbar(Fl_Tree *self, Fl_Widget *w);

int Fl_Tree_scrollbar_size(const Fl_Tree *self);

void Fl_Tree_set_scrollbar_size(Fl_Tree *self, int size);

int Fl_Tree_is_vscroll_visible(const Fl_Tree *self);

int Fl_Tree_is_hscroll_visible(const Fl_Tree *self);

void Fl_Tree_set_callback_item(Fl_Tree *self, Fl_Tree_Item *item);

Fl_Tree_Item *Fl_Tree_callback_item(Fl_Tree *self);

void Fl_Tree_set_callback_reason(Fl_Tree *self, int reason);

int Fl_Tree_callback_reason(const Fl_Tree *self);

int Fl_Tree_item_pathname(
    const Fl_Tree *self,
    char *pathname,
    int pathnamelen,
    const Fl_Tree_Item *item
);



Fl_Tree_Item *Fl_Tree_Item_new(Fl_Tree *tree, const char *txt);

void Fl_Tree_Item_draw_item_content(
    Fl_Tree_Item *item, int (*cb)(Fl_Tree_Item *self, int, void *), void *data
);

void Fl_Tree_Item_set_user_data(Fl_Tree_Item *item, void *data);

void *Fl_Tree_Item_user_data(const Fl_Tree_Item *item);

int Fl_Tree_Item_x(const Fl_Tree_Item *self);

int Fl_Tree_Item_y(const Fl_Tree_Item *self);

int Fl_Tree_Item_w(const Fl_Tree_Item *self);

int Fl_Tree_Item_h(const Fl_Tree_Item *self);

int Fl_Tree_Item_label_x(const Fl_Tree_Item *self);

int Fl_Tree_Item_label_y(const Fl_Tree_Item *self);

int Fl_Tree_Item_label_w(const Fl_Tree_Item *self);

int Fl_Tree_Item_label_h(const Fl_Tree_Item *self);

void Fl_Tree_Item_show_self(const Fl_Tree_Item *self, const char *indent);

void Fl_Tree_set_Item_label(Fl_Tree_Item *self, const char *val);

const char *Fl_Tree_Item_label(const Fl_Tree_Item *self);

void Fl_Tree_Item_set_labelfont(Fl_Tree_Item *self, int val);

int Fl_Tree_Item_labelfont(const Fl_Tree_Item *self);

void Fl_Tree_Item_set_labelsize(Fl_Tree_Item *self, int val);

int Fl_Tree_Item_labelsize(const Fl_Tree_Item *self);

void Fl_Tree_Item_set_labelfgcolor(Fl_Tree_Item *self, unsigned int val);

unsigned int Fl_Tree_Item_labelfgcolor(const Fl_Tree_Item *self);

void Fl_Tree_Item_set_labelcolor(Fl_Tree_Item *self, unsigned int val);

unsigned int Fl_Tree_Item_labelcolor(const Fl_Tree_Item *self);

void Fl_Tree_Item_set_labelbgcolor(Fl_Tree_Item *self, unsigned int val);

unsigned int Fl_Tree_Item_labelbgcolor(const Fl_Tree_Item *self);

void Fl_Tree_Item_set_widget(Fl_Tree_Item *self, Fl_Widget *val);

Fl_Widget *Fl_Tree_Item_widget(const Fl_Tree_Item *self);

int Fl_Tree_Item_children(const Fl_Tree_Item *self);

const Fl_Tree_Item *Fl_Tree_Item_child(const Fl_Tree_Item *self, int t);

int Fl_Tree_Item_has_children(const Fl_Tree_Item *self);

int Fl_Tree_Item_find_child(Fl_Tree_Item *self, const char *name);

int Fl_Tree_Item_remove_child(Fl_Tree_Item *self, const char *new_label);

void Fl_Tree_Item_clear_children(Fl_Tree_Item *self);

int Fl_Tree_Item_swap_children(
    Fl_Tree_Item *self, Fl_Tree_Item *a, Fl_Tree_Item *b
);

const Fl_Tree_Item *
Fl_Tree_Item_find_child_item(const Fl_Tree_Item *self, const char *name);

Fl_Tree_Item *Fl_Tree_Item_replace(Fl_Tree_Item *self, Fl_Tree_Item *new_item);

Fl_Tree_Item *Fl_Tree_Item_replace_child(
    Fl_Tree_Item *self, Fl_Tree_Item *olditem, Fl_Tree_Item *newitem
);

Fl_Tree_Item *Fl_Tree_Item_deparent(Fl_Tree_Item *self, int index);

int Fl_Tree_Item_reparent(
    Fl_Tree_Item *self, Fl_Tree_Item *newchild, int index
);

int Fl_Tree_Item_move(Fl_Tree_Item *self, int to, int from);

int Fl_Tree_Item_move_above(Fl_Tree_Item *self, Fl_Tree_Item *item);

int Fl_Tree_Item_move_below(Fl_Tree_Item *self, Fl_Tree_Item *item);

int Fl_Tree_Item_move_into(Fl_Tree_Item *self, Fl_Tree_Item *item, int pos);

int Fl_Tree_Item_depth(const Fl_Tree_Item *self);

Fl_Tree_Item *Fl_Tree_Item_prev(Fl_Tree_Item *self);

Fl_Tree_Item *Fl_Tree_Item_next(Fl_Tree_Item *self);

Fl_Tree_Item *Fl_Tree_Item_next_sibling(Fl_Tree_Item *self);

Fl_Tree_Item *Fl_Tree_Item_prev_sibling(Fl_Tree_Item *self);

void Fl_Tree_Item_update_prev_next(Fl_Tree_Item *self, int index);

const Fl_Tree_Item *Fl_Tree_Item_parent(const Fl_Tree_Item *self);

void Fl_Tree_Item_set_parent(Fl_Tree_Item *self, Fl_Tree_Item *val);

const Fl_Tree *Fl_Tree_Item_tree(const Fl_Tree_Item *self);

void Fl_Tree_Item_open(Fl_Tree_Item *self);

void Fl_Tree_Item_close(Fl_Tree_Item *self);

int Fl_Tree_Item_is_open(const Fl_Tree_Item *self);

int Fl_Tree_Item_is_close(const Fl_Tree_Item *self);

void Fl_Tree_Item_open_toggle(Fl_Tree_Item *self);

void Fl_Tree_Item_select(Fl_Tree_Item *self, int val);

void Fl_Tree_Item_select_toggle(Fl_Tree_Item *self);

int Fl_Tree_Item_select_all(Fl_Tree_Item *self);

void Fl_Tree_Item_deselect(Fl_Tree_Item *self);

int Fl_Tree_Item_deselect_all(Fl_Tree_Item *self);

int Fl_Tree_Item_is_root(const Fl_Tree_Item *self);

int Fl_Tree_Item_is_visible(const Fl_Tree_Item *self);

char Fl_Tree_Item_is_active(const Fl_Tree_Item *self);

char Fl_Tree_Item_is_activated(const Fl_Tree_Item *self);

void Fl_Tree_Item_deactivate(Fl_Tree_Item *self);

void Fl_Tree_Item_activate(Fl_Tree_Item *self, int val);

char Fl_Tree_Item_is_selected(const Fl_Tree_Item *self);



int Fl_Tree_Item_Array_total(const Fl_Tree_Item_Array *self);

void Fl_Tree_Item_Array_swap(Fl_Tree_Item_Array *self, int ax, int bx);

int Fl_Tree_Item_Array_move(Fl_Tree_Item_Array *self, int to, int from);

int Fl_Tree_Item_Array_deparent(Fl_Tree_Item_Array *self, int pos);

int Fl_Tree_Item_Array_reparent(
    Fl_Tree_Item_Array *self,
    Fl_Tree_Item *item,
    Fl_Tree_Item *newparent,
    int pos
);

void Fl_Tree_Item_Array_clear(Fl_Tree_Item_Array *self);

void Fl_Tree_Item_Array_add(Fl_Tree_Item_Array *self, Fl_Tree_Item *val);

void Fl_Tree_Item_Array_insert(
    Fl_Tree_Item_Array *self, int pos, Fl_Tree_Item *new_item
);

void Fl_Tree_Item_Array_replace(
    Fl_Tree_Item_Array *self, int pos, Fl_Tree_Item *new_item
);

void Fl_Tree_Item_Array_remove(Fl_Tree_Item_Array *self, int index);

int Fl_Tree_Item_Array_remove_item(
    Fl_Tree_Item_Array *self, Fl_Tree_Item *item
);

Fl_Tree_Item *Fl_Tree_Item_Array_at(Fl_Tree_Item_Array *self, int index);

void Fl_Tree_Item_Array_delete(Fl_Tree_Item_Array *self);

void *Fl_Tree_Item_usericon(const Fl_Tree_Item *self);

void Fl_Tree_Item_set_usericon(Fl_Tree_Item *self, void *val);
int Fl_filename_expand(char *out, int len, const char *in);

const char *Fl_type_name(void *w);

int Fl_open_uri(const char *uri, char *msg, int msglen);

void Fl_decode_uri(char *uri);
typedef struct Fl_Slider Fl_Slider; Fl_Slider *Fl_Slider_new( int x, int y, int width, int height, const char *title ); int Fl_Slider_x(Fl_Slider *); int Fl_Slider_y(Fl_Slider *); int Fl_Slider_width(Fl_Slider *); int Fl_Slider_height(Fl_Slider *); const char *Fl_Slider_label(Fl_Slider *); void Fl_Slider_set_label(Fl_Slider *, const char *title); void Fl_Slider_redraw(Fl_Slider *); void Fl_Slider_show(Fl_Slider *); void Fl_Slider_hide(Fl_Slider *); void Fl_Slider_activate(Fl_Slider *); void Fl_Slider_deactivate(Fl_Slider *); void Fl_Slider_redraw_label(Fl_Slider *); void Fl_Slider_resize(Fl_Slider *, int x, int y, int width, int height); void Fl_Slider_widget_resize( Fl_Slider *, int x, int y, int width, int height ); const char *Fl_Slider_tooltip(Fl_Slider *); void Fl_Slider_set_tooltip(Fl_Slider *, const char *txt); int Fl_Slider_get_type(Fl_Slider *); void Fl_Slider_set_type(Fl_Slider *, int typ); unsigned int Fl_Slider_color(Fl_Slider *); void Fl_Slider_set_color(Fl_Slider *, unsigned int color); void Fl_Slider_measure_label(const Fl_Slider *, int *, int *); unsigned int Fl_Slider_label_color(Fl_Slider *); void Fl_Slider_set_label_color(Fl_Slider *, unsigned int color); int Fl_Slider_label_font(Fl_Slider *); void Fl_Slider_set_label_font(Fl_Slider *, int font); int Fl_Slider_label_size(Fl_Slider *); void Fl_Slider_set_label_size(Fl_Slider *, int sz); int Fl_Slider_label_type(Fl_Slider *); void Fl_Slider_set_label_type(Fl_Slider *, int typ); int Fl_Slider_box(Fl_Slider *); void Fl_Slider_set_box(Fl_Slider *, int typ); int Fl_Slider_changed(Fl_Slider *); void Fl_Slider_set_changed(Fl_Slider *); void Fl_Slider_clear_changed(Fl_Slider *); int Fl_Slider_align(Fl_Slider *); void Fl_Slider_set_align(Fl_Slider *, int typ); void Fl_Slider_delete(Fl_Slider *); void Fl_Slider_set_image(Fl_Slider *, void *); void Fl_Slider_handle( Fl_Slider *self, custom_handler_callback cb, void *data ); int Fl_Slider_handle_event(Fl_Slider *self, int event); void Fl_Slider_draw(Fl_Slider *self, custom_draw_callback cb, void *data); void Fl_Slider_resize_callback( Fl_Slider *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Slider_set_when(Fl_Slider *, int); int Fl_Slider_when(const Fl_Slider *); const void *Fl_Slider_image(const Fl_Slider *); void *Fl_Slider_parent(const Fl_Slider *self); unsigned int Fl_Slider_selection_color(Fl_Slider *); void Fl_Slider_set_selection_color(Fl_Slider *, unsigned int color); void Fl_Slider_do_callback(Fl_Slider *); int Fl_Slider_inside(const Fl_Slider *self, void *); void *Fl_Slider_window(const Fl_Slider *); void *Fl_Slider_top_window(const Fl_Slider *); int Fl_Slider_takes_events(const Fl_Slider *); void *Fl_Slider_user_data(const Fl_Slider *); int Fl_Slider_take_focus(Fl_Slider *self); void Fl_Slider_set_visible_focus(Fl_Slider *self); void Fl_Slider_clear_visible_focus(Fl_Slider *self); void Fl_Slider_visible_focus(Fl_Slider *self, int v); unsigned int Fl_Slider_has_visible_focus(Fl_Slider *self); void Fl_Slider_set_user_data(Fl_Slider *, void *data); void *Fl_Slider_draw_data(const Fl_Slider *self); void *Fl_Slider_handle_data(const Fl_Slider *self); void Fl_Slider_set_draw_data(Fl_Slider *self, void *data); void Fl_Slider_set_handle_data(Fl_Slider *self, void *data); unsigned char Fl_Slider_damage(const Fl_Slider *self); void Fl_Slider_set_damage(Fl_Slider *self, unsigned char flag); void Fl_Slider_set_damage_area( Fl_Slider *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Slider_clear_damage(Fl_Slider *self); void *Fl_Slider_as_window(Fl_Slider *self); void *Fl_Slider_as_group(Fl_Slider *self); void Fl_Slider_set_deimage(Fl_Slider *, void *); const void *Fl_Slider_deimage(const Fl_Slider *); void Fl_Slider_set_callback(Fl_Slider *, Fl_Callback *, void *); int Fl_Slider_visible(const Fl_Slider *self); int Fl_Slider_visible_r(const Fl_Slider *self); unsigned int Fl_Slider_active(const Fl_Slider *self); int Fl_Slider_active_r(const Fl_Slider *self); Fl_Callback *Fl_Slider_callback(const Fl_Slider *self); void Fl_Slider_set_deletion_callback( Fl_Slider *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Slider *Fl_Slider_from_dyn_ptr(Fl_Widget *ptr); Fl_Slider *Fl_Slider_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Slider_super_draw(Fl_Widget *ptr, int flag); void Fl_Slider_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Slider_super_handle_first(Fl_Widget *ptr, int flag);

float Fl_Slider_slider_size(const Fl_Slider *self);

void Fl_Slider_set_slider_size(Fl_Slider *self, float v);

int Fl_Slider_slider_box(const Fl_Slider *self);

void Fl_Slider_set_slider_box(Fl_Slider *self, int c);

int Fl_Slider_scroll_value(Fl_Slider *self, int pos, int windowSize, int first_line, int total_lines);

void Fl_Slider_set_bounds(Fl_Slider *, double a, double b); double Fl_Slider_minimum(Fl_Slider *); void Fl_Slider_set_minimum(Fl_Slider *, double a); double Fl_Slider_maximum(Fl_Slider *); void Fl_Slider_set_maximum(Fl_Slider *, double a); void Fl_Slider_set_range(Fl_Slider *, double a, double b); void Fl_Slider_set_step(Fl_Slider *, double a, int b); double Fl_Slider_step(Fl_Slider *); void Fl_Slider_set_precision(Fl_Slider *, int digits); double Fl_Slider_value(Fl_Slider *); int Fl_Slider_set_value(Fl_Slider *, double); int Fl_Slider_format(Fl_Slider *, char *); double Fl_Slider_round(Fl_Slider *, double); double Fl_Slider_clamp(Fl_Slider *, double); double Fl_Slider_increment(Fl_Slider *, double, int);

typedef struct Fl_Nice_Slider Fl_Nice_Slider; Fl_Nice_Slider *Fl_Nice_Slider_new( int x, int y, int width, int height, const char *title ); int Fl_Nice_Slider_x(Fl_Nice_Slider *); int Fl_Nice_Slider_y(Fl_Nice_Slider *); int Fl_Nice_Slider_width(Fl_Nice_Slider *); int Fl_Nice_Slider_height(Fl_Nice_Slider *); const char *Fl_Nice_Slider_label(Fl_Nice_Slider *); void Fl_Nice_Slider_set_label(Fl_Nice_Slider *, const char *title); void Fl_Nice_Slider_redraw(Fl_Nice_Slider *); void Fl_Nice_Slider_show(Fl_Nice_Slider *); void Fl_Nice_Slider_hide(Fl_Nice_Slider *); void Fl_Nice_Slider_activate(Fl_Nice_Slider *); void Fl_Nice_Slider_deactivate(Fl_Nice_Slider *); void Fl_Nice_Slider_redraw_label(Fl_Nice_Slider *); void Fl_Nice_Slider_resize(Fl_Nice_Slider *, int x, int y, int width, int height); void Fl_Nice_Slider_widget_resize( Fl_Nice_Slider *, int x, int y, int width, int height ); const char *Fl_Nice_Slider_tooltip(Fl_Nice_Slider *); void Fl_Nice_Slider_set_tooltip(Fl_Nice_Slider *, const char *txt); int Fl_Nice_Slider_get_type(Fl_Nice_Slider *); void Fl_Nice_Slider_set_type(Fl_Nice_Slider *, int typ); unsigned int Fl_Nice_Slider_color(Fl_Nice_Slider *); void Fl_Nice_Slider_set_color(Fl_Nice_Slider *, unsigned int color); void Fl_Nice_Slider_measure_label(const Fl_Nice_Slider *, int *, int *); unsigned int Fl_Nice_Slider_label_color(Fl_Nice_Slider *); void Fl_Nice_Slider_set_label_color(Fl_Nice_Slider *, unsigned int color); int Fl_Nice_Slider_label_font(Fl_Nice_Slider *); void Fl_Nice_Slider_set_label_font(Fl_Nice_Slider *, int font); int Fl_Nice_Slider_label_size(Fl_Nice_Slider *); void Fl_Nice_Slider_set_label_size(Fl_Nice_Slider *, int sz); int Fl_Nice_Slider_label_type(Fl_Nice_Slider *); void Fl_Nice_Slider_set_label_type(Fl_Nice_Slider *, int typ); int Fl_Nice_Slider_box(Fl_Nice_Slider *); void Fl_Nice_Slider_set_box(Fl_Nice_Slider *, int typ); int Fl_Nice_Slider_changed(Fl_Nice_Slider *); void Fl_Nice_Slider_set_changed(Fl_Nice_Slider *); void Fl_Nice_Slider_clear_changed(Fl_Nice_Slider *); int Fl_Nice_Slider_align(Fl_Nice_Slider *); void Fl_Nice_Slider_set_align(Fl_Nice_Slider *, int typ); void Fl_Nice_Slider_delete(Fl_Nice_Slider *); void Fl_Nice_Slider_set_image(Fl_Nice_Slider *, void *); void Fl_Nice_Slider_handle( Fl_Nice_Slider *self, custom_handler_callback cb, void *data ); int Fl_Nice_Slider_handle_event(Fl_Nice_Slider *self, int event); void Fl_Nice_Slider_draw(Fl_Nice_Slider *self, custom_draw_callback cb, void *data); void Fl_Nice_Slider_resize_callback( Fl_Nice_Slider *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Nice_Slider_set_when(Fl_Nice_Slider *, int); int Fl_Nice_Slider_when(const Fl_Nice_Slider *); const void *Fl_Nice_Slider_image(const Fl_Nice_Slider *); void *Fl_Nice_Slider_parent(const Fl_Nice_Slider *self); unsigned int Fl_Nice_Slider_selection_color(Fl_Nice_Slider *); void Fl_Nice_Slider_set_selection_color(Fl_Nice_Slider *, unsigned int color); void Fl_Nice_Slider_do_callback(Fl_Nice_Slider *); int Fl_Nice_Slider_inside(const Fl_Nice_Slider *self, void *); void *Fl_Nice_Slider_window(const Fl_Nice_Slider *); void *Fl_Nice_Slider_top_window(const Fl_Nice_Slider *); int Fl_Nice_Slider_takes_events(const Fl_Nice_Slider *); void *Fl_Nice_Slider_user_data(const Fl_Nice_Slider *); int Fl_Nice_Slider_take_focus(Fl_Nice_Slider *self); void Fl_Nice_Slider_set_visible_focus(Fl_Nice_Slider *self); void Fl_Nice_Slider_clear_visible_focus(Fl_Nice_Slider *self); void Fl_Nice_Slider_visible_focus(Fl_Nice_Slider *self, int v); unsigned int Fl_Nice_Slider_has_visible_focus(Fl_Nice_Slider *self); void Fl_Nice_Slider_set_user_data(Fl_Nice_Slider *, void *data); void *Fl_Nice_Slider_draw_data(const Fl_Nice_Slider *self); void *Fl_Nice_Slider_handle_data(const Fl_Nice_Slider *self); void Fl_Nice_Slider_set_draw_data(Fl_Nice_Slider *self, void *data); void Fl_Nice_Slider_set_handle_data(Fl_Nice_Slider *self, void *data); unsigned char Fl_Nice_Slider_damage(const Fl_Nice_Slider *self); void Fl_Nice_Slider_set_damage(Fl_Nice_Slider *self, unsigned char flag); void Fl_Nice_Slider_set_damage_area( Fl_Nice_Slider *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Nice_Slider_clear_damage(Fl_Nice_Slider *self); void *Fl_Nice_Slider_as_window(Fl_Nice_Slider *self); void *Fl_Nice_Slider_as_group(Fl_Nice_Slider *self); void Fl_Nice_Slider_set_deimage(Fl_Nice_Slider *, void *); const void *Fl_Nice_Slider_deimage(const Fl_Nice_Slider *); void Fl_Nice_Slider_set_callback(Fl_Nice_Slider *, Fl_Callback *, void *); int Fl_Nice_Slider_visible(const Fl_Nice_Slider *self); int Fl_Nice_Slider_visible_r(const Fl_Nice_Slider *self); unsigned int Fl_Nice_Slider_active(const Fl_Nice_Slider *self); int Fl_Nice_Slider_active_r(const Fl_Nice_Slider *self); Fl_Callback *Fl_Nice_Slider_callback(const Fl_Nice_Slider *self); void Fl_Nice_Slider_set_deletion_callback( Fl_Nice_Slider *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Nice_Slider *Fl_Nice_Slider_from_dyn_ptr(Fl_Widget *ptr); Fl_Nice_Slider *Fl_Nice_Slider_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Nice_Slider_super_draw(Fl_Widget *ptr, int flag); void Fl_Nice_Slider_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Nice_Slider_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Nice_Slider_set_bounds(Fl_Nice_Slider *, double a, double b); double Fl_Nice_Slider_minimum(Fl_Nice_Slider *); void Fl_Nice_Slider_set_minimum(Fl_Nice_Slider *, double a); double Fl_Nice_Slider_maximum(Fl_Nice_Slider *); void Fl_Nice_Slider_set_maximum(Fl_Nice_Slider *, double a); void Fl_Nice_Slider_set_range(Fl_Nice_Slider *, double a, double b); void Fl_Nice_Slider_set_step(Fl_Nice_Slider *, double a, int b); double Fl_Nice_Slider_step(Fl_Nice_Slider *); void Fl_Nice_Slider_set_precision(Fl_Nice_Slider *, int digits); double Fl_Nice_Slider_value(Fl_Nice_Slider *); int Fl_Nice_Slider_set_value(Fl_Nice_Slider *, double); int Fl_Nice_Slider_format(Fl_Nice_Slider *, char *); double Fl_Nice_Slider_round(Fl_Nice_Slider *, double); double Fl_Nice_Slider_clamp(Fl_Nice_Slider *, double); double Fl_Nice_Slider_increment(Fl_Nice_Slider *, double, int);

typedef struct Fl_Counter Fl_Counter; Fl_Counter *Fl_Counter_new( int x, int y, int width, int height, const char *title ); int Fl_Counter_x(Fl_Counter *); int Fl_Counter_y(Fl_Counter *); int Fl_Counter_width(Fl_Counter *); int Fl_Counter_height(Fl_Counter *); const char *Fl_Counter_label(Fl_Counter *); void Fl_Counter_set_label(Fl_Counter *, const char *title); void Fl_Counter_redraw(Fl_Counter *); void Fl_Counter_show(Fl_Counter *); void Fl_Counter_hide(Fl_Counter *); void Fl_Counter_activate(Fl_Counter *); void Fl_Counter_deactivate(Fl_Counter *); void Fl_Counter_redraw_label(Fl_Counter *); void Fl_Counter_resize(Fl_Counter *, int x, int y, int width, int height); void Fl_Counter_widget_resize( Fl_Counter *, int x, int y, int width, int height ); const char *Fl_Counter_tooltip(Fl_Counter *); void Fl_Counter_set_tooltip(Fl_Counter *, const char *txt); int Fl_Counter_get_type(Fl_Counter *); void Fl_Counter_set_type(Fl_Counter *, int typ); unsigned int Fl_Counter_color(Fl_Counter *); void Fl_Counter_set_color(Fl_Counter *, unsigned int color); void Fl_Counter_measure_label(const Fl_Counter *, int *, int *); unsigned int Fl_Counter_label_color(Fl_Counter *); void Fl_Counter_set_label_color(Fl_Counter *, unsigned int color); int Fl_Counter_label_font(Fl_Counter *); void Fl_Counter_set_label_font(Fl_Counter *, int font); int Fl_Counter_label_size(Fl_Counter *); void Fl_Counter_set_label_size(Fl_Counter *, int sz); int Fl_Counter_label_type(Fl_Counter *); void Fl_Counter_set_label_type(Fl_Counter *, int typ); int Fl_Counter_box(Fl_Counter *); void Fl_Counter_set_box(Fl_Counter *, int typ); int Fl_Counter_changed(Fl_Counter *); void Fl_Counter_set_changed(Fl_Counter *); void Fl_Counter_clear_changed(Fl_Counter *); int Fl_Counter_align(Fl_Counter *); void Fl_Counter_set_align(Fl_Counter *, int typ); void Fl_Counter_delete(Fl_Counter *); void Fl_Counter_set_image(Fl_Counter *, void *); void Fl_Counter_handle( Fl_Counter *self, custom_handler_callback cb, void *data ); int Fl_Counter_handle_event(Fl_Counter *self, int event); void Fl_Counter_draw(Fl_Counter *self, custom_draw_callback cb, void *data); void Fl_Counter_resize_callback( Fl_Counter *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Counter_set_when(Fl_Counter *, int); int Fl_Counter_when(const Fl_Counter *); const void *Fl_Counter_image(const Fl_Counter *); void *Fl_Counter_parent(const Fl_Counter *self); unsigned int Fl_Counter_selection_color(Fl_Counter *); void Fl_Counter_set_selection_color(Fl_Counter *, unsigned int color); void Fl_Counter_do_callback(Fl_Counter *); int Fl_Counter_inside(const Fl_Counter *self, void *); void *Fl_Counter_window(const Fl_Counter *); void *Fl_Counter_top_window(const Fl_Counter *); int Fl_Counter_takes_events(const Fl_Counter *); void *Fl_Counter_user_data(const Fl_Counter *); int Fl_Counter_take_focus(Fl_Counter *self); void Fl_Counter_set_visible_focus(Fl_Counter *self); void Fl_Counter_clear_visible_focus(Fl_Counter *self); void Fl_Counter_visible_focus(Fl_Counter *self, int v); unsigned int Fl_Counter_has_visible_focus(Fl_Counter *self); void Fl_Counter_set_user_data(Fl_Counter *, void *data); void *Fl_Counter_draw_data(const Fl_Counter *self); void *Fl_Counter_handle_data(const Fl_Counter *self); void Fl_Counter_set_draw_data(Fl_Counter *self, void *data); void Fl_Counter_set_handle_data(Fl_Counter *self, void *data); unsigned char Fl_Counter_damage(const Fl_Counter *self); void Fl_Counter_set_damage(Fl_Counter *self, unsigned char flag); void Fl_Counter_set_damage_area( Fl_Counter *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Counter_clear_damage(Fl_Counter *self); void *Fl_Counter_as_window(Fl_Counter *self); void *Fl_Counter_as_group(Fl_Counter *self); void Fl_Counter_set_deimage(Fl_Counter *, void *); const void *Fl_Counter_deimage(const Fl_Counter *); void Fl_Counter_set_callback(Fl_Counter *, Fl_Callback *, void *); int Fl_Counter_visible(const Fl_Counter *self); int Fl_Counter_visible_r(const Fl_Counter *self); unsigned int Fl_Counter_active(const Fl_Counter *self); int Fl_Counter_active_r(const Fl_Counter *self); Fl_Callback *Fl_Counter_callback(const Fl_Counter *self); void Fl_Counter_set_deletion_callback( Fl_Counter *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Counter *Fl_Counter_from_dyn_ptr(Fl_Widget *ptr); Fl_Counter *Fl_Counter_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Counter_super_draw(Fl_Widget *ptr, int flag); void Fl_Counter_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Counter_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Counter_set_bounds(Fl_Counter *, double a, double b); double Fl_Counter_minimum(Fl_Counter *); void Fl_Counter_set_minimum(Fl_Counter *, double a); double Fl_Counter_maximum(Fl_Counter *); void Fl_Counter_set_maximum(Fl_Counter *, double a); void Fl_Counter_set_range(Fl_Counter *, double a, double b); void Fl_Counter_set_step(Fl_Counter *, double a, int b); double Fl_Counter_step(Fl_Counter *); void Fl_Counter_set_precision(Fl_Counter *, int digits); double Fl_Counter_value(Fl_Counter *); int Fl_Counter_set_value(Fl_Counter *, double); int Fl_Counter_format(Fl_Counter *, char *); double Fl_Counter_round(Fl_Counter *, double); double Fl_Counter_clamp(Fl_Counter *, double); double Fl_Counter_increment(Fl_Counter *, double, int);

typedef struct Fl_Dial Fl_Dial; Fl_Dial *Fl_Dial_new( int x, int y, int width, int height, const char *title ); int Fl_Dial_x(Fl_Dial *); int Fl_Dial_y(Fl_Dial *); int Fl_Dial_width(Fl_Dial *); int Fl_Dial_height(Fl_Dial *); const char *Fl_Dial_label(Fl_Dial *); void Fl_Dial_set_label(Fl_Dial *, const char *title); void Fl_Dial_redraw(Fl_Dial *); void Fl_Dial_show(Fl_Dial *); void Fl_Dial_hide(Fl_Dial *); void Fl_Dial_activate(Fl_Dial *); void Fl_Dial_deactivate(Fl_Dial *); void Fl_Dial_redraw_label(Fl_Dial *); void Fl_Dial_resize(Fl_Dial *, int x, int y, int width, int height); void Fl_Dial_widget_resize( Fl_Dial *, int x, int y, int width, int height ); const char *Fl_Dial_tooltip(Fl_Dial *); void Fl_Dial_set_tooltip(Fl_Dial *, const char *txt); int Fl_Dial_get_type(Fl_Dial *); void Fl_Dial_set_type(Fl_Dial *, int typ); unsigned int Fl_Dial_color(Fl_Dial *); void Fl_Dial_set_color(Fl_Dial *, unsigned int color); void Fl_Dial_measure_label(const Fl_Dial *, int *, int *); unsigned int Fl_Dial_label_color(Fl_Dial *); void Fl_Dial_set_label_color(Fl_Dial *, unsigned int color); int Fl_Dial_label_font(Fl_Dial *); void Fl_Dial_set_label_font(Fl_Dial *, int font); int Fl_Dial_label_size(Fl_Dial *); void Fl_Dial_set_label_size(Fl_Dial *, int sz); int Fl_Dial_label_type(Fl_Dial *); void Fl_Dial_set_label_type(Fl_Dial *, int typ); int Fl_Dial_box(Fl_Dial *); void Fl_Dial_set_box(Fl_Dial *, int typ); int Fl_Dial_changed(Fl_Dial *); void Fl_Dial_set_changed(Fl_Dial *); void Fl_Dial_clear_changed(Fl_Dial *); int Fl_Dial_align(Fl_Dial *); void Fl_Dial_set_align(Fl_Dial *, int typ); void Fl_Dial_delete(Fl_Dial *); void Fl_Dial_set_image(Fl_Dial *, void *); void Fl_Dial_handle( Fl_Dial *self, custom_handler_callback cb, void *data ); int Fl_Dial_handle_event(Fl_Dial *self, int event); void Fl_Dial_draw(Fl_Dial *self, custom_draw_callback cb, void *data); void Fl_Dial_resize_callback( Fl_Dial *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Dial_set_when(Fl_Dial *, int); int Fl_Dial_when(const Fl_Dial *); const void *Fl_Dial_image(const Fl_Dial *); void *Fl_Dial_parent(const Fl_Dial *self); unsigned int Fl_Dial_selection_color(Fl_Dial *); void Fl_Dial_set_selection_color(Fl_Dial *, unsigned int color); void Fl_Dial_do_callback(Fl_Dial *); int Fl_Dial_inside(const Fl_Dial *self, void *); void *Fl_Dial_window(const Fl_Dial *); void *Fl_Dial_top_window(const Fl_Dial *); int Fl_Dial_takes_events(const Fl_Dial *); void *Fl_Dial_user_data(const Fl_Dial *); int Fl_Dial_take_focus(Fl_Dial *self); void Fl_Dial_set_visible_focus(Fl_Dial *self); void Fl_Dial_clear_visible_focus(Fl_Dial *self); void Fl_Dial_visible_focus(Fl_Dial *self, int v); unsigned int Fl_Dial_has_visible_focus(Fl_Dial *self); void Fl_Dial_set_user_data(Fl_Dial *, void *data); void *Fl_Dial_draw_data(const Fl_Dial *self); void *Fl_Dial_handle_data(const Fl_Dial *self); void Fl_Dial_set_draw_data(Fl_Dial *self, void *data); void Fl_Dial_set_handle_data(Fl_Dial *self, void *data); unsigned char Fl_Dial_damage(const Fl_Dial *self); void Fl_Dial_set_damage(Fl_Dial *self, unsigned char flag); void Fl_Dial_set_damage_area( Fl_Dial *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Dial_clear_damage(Fl_Dial *self); void *Fl_Dial_as_window(Fl_Dial *self); void *Fl_Dial_as_group(Fl_Dial *self); void Fl_Dial_set_deimage(Fl_Dial *, void *); const void *Fl_Dial_deimage(const Fl_Dial *); void Fl_Dial_set_callback(Fl_Dial *, Fl_Callback *, void *); int Fl_Dial_visible(const Fl_Dial *self); int Fl_Dial_visible_r(const Fl_Dial *self); unsigned int Fl_Dial_active(const Fl_Dial *self); int Fl_Dial_active_r(const Fl_Dial *self); Fl_Callback *Fl_Dial_callback(const Fl_Dial *self); void Fl_Dial_set_deletion_callback( Fl_Dial *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Dial *Fl_Dial_from_dyn_ptr(Fl_Widget *ptr); Fl_Dial *Fl_Dial_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Dial_super_draw(Fl_Widget *ptr, int flag); void Fl_Dial_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Dial_super_handle_first(Fl_Widget *ptr, int flag);

short Fl_Dial_angle1(const Fl_Dial *self);

short Fl_Dial_angle2(const Fl_Dial *self);

void Fl_Dial_set_angle1(Fl_Dial *self, short val);

void Fl_Dial_set_angle2(Fl_Dial *self, short val);

void Fl_Dial_set_bounds(Fl_Dial *, double a, double b); double Fl_Dial_minimum(Fl_Dial *); void Fl_Dial_set_minimum(Fl_Dial *, double a); double Fl_Dial_maximum(Fl_Dial *); void Fl_Dial_set_maximum(Fl_Dial *, double a); void Fl_Dial_set_range(Fl_Dial *, double a, double b); void Fl_Dial_set_step(Fl_Dial *, double a, int b); double Fl_Dial_step(Fl_Dial *); void Fl_Dial_set_precision(Fl_Dial *, int digits); double Fl_Dial_value(Fl_Dial *); int Fl_Dial_set_value(Fl_Dial *, double); int Fl_Dial_format(Fl_Dial *, char *); double Fl_Dial_round(Fl_Dial *, double); double Fl_Dial_clamp(Fl_Dial *, double); double Fl_Dial_increment(Fl_Dial *, double, int);

typedef struct Fl_Line_Dial Fl_Line_Dial; Fl_Line_Dial *Fl_Line_Dial_new( int x, int y, int width, int height, const char *title ); int Fl_Line_Dial_x(Fl_Line_Dial *); int Fl_Line_Dial_y(Fl_Line_Dial *); int Fl_Line_Dial_width(Fl_Line_Dial *); int Fl_Line_Dial_height(Fl_Line_Dial *); const char *Fl_Line_Dial_label(Fl_Line_Dial *); void Fl_Line_Dial_set_label(Fl_Line_Dial *, const char *title); void Fl_Line_Dial_redraw(Fl_Line_Dial *); void Fl_Line_Dial_show(Fl_Line_Dial *); void Fl_Line_Dial_hide(Fl_Line_Dial *); void Fl_Line_Dial_activate(Fl_Line_Dial *); void Fl_Line_Dial_deactivate(Fl_Line_Dial *); void Fl_Line_Dial_redraw_label(Fl_Line_Dial *); void Fl_Line_Dial_resize(Fl_Line_Dial *, int x, int y, int width, int height); void Fl_Line_Dial_widget_resize( Fl_Line_Dial *, int x, int y, int width, int height ); const char *Fl_Line_Dial_tooltip(Fl_Line_Dial *); void Fl_Line_Dial_set_tooltip(Fl_Line_Dial *, const char *txt); int Fl_Line_Dial_get_type(Fl_Line_Dial *); void Fl_Line_Dial_set_type(Fl_Line_Dial *, int typ); unsigned int Fl_Line_Dial_color(Fl_Line_Dial *); void Fl_Line_Dial_set_color(Fl_Line_Dial *, unsigned int color); void Fl_Line_Dial_measure_label(const Fl_Line_Dial *, int *, int *); unsigned int Fl_Line_Dial_label_color(Fl_Line_Dial *); void Fl_Line_Dial_set_label_color(Fl_Line_Dial *, unsigned int color); int Fl_Line_Dial_label_font(Fl_Line_Dial *); void Fl_Line_Dial_set_label_font(Fl_Line_Dial *, int font); int Fl_Line_Dial_label_size(Fl_Line_Dial *); void Fl_Line_Dial_set_label_size(Fl_Line_Dial *, int sz); int Fl_Line_Dial_label_type(Fl_Line_Dial *); void Fl_Line_Dial_set_label_type(Fl_Line_Dial *, int typ); int Fl_Line_Dial_box(Fl_Line_Dial *); void Fl_Line_Dial_set_box(Fl_Line_Dial *, int typ); int Fl_Line_Dial_changed(Fl_Line_Dial *); void Fl_Line_Dial_set_changed(Fl_Line_Dial *); void Fl_Line_Dial_clear_changed(Fl_Line_Dial *); int Fl_Line_Dial_align(Fl_Line_Dial *); void Fl_Line_Dial_set_align(Fl_Line_Dial *, int typ); void Fl_Line_Dial_delete(Fl_Line_Dial *); void Fl_Line_Dial_set_image(Fl_Line_Dial *, void *); void Fl_Line_Dial_handle( Fl_Line_Dial *self, custom_handler_callback cb, void *data ); int Fl_Line_Dial_handle_event(Fl_Line_Dial *self, int event); void Fl_Line_Dial_draw(Fl_Line_Dial *self, custom_draw_callback cb, void *data); void Fl_Line_Dial_resize_callback( Fl_Line_Dial *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Line_Dial_set_when(Fl_Line_Dial *, int); int Fl_Line_Dial_when(const Fl_Line_Dial *); const void *Fl_Line_Dial_image(const Fl_Line_Dial *); void *Fl_Line_Dial_parent(const Fl_Line_Dial *self); unsigned int Fl_Line_Dial_selection_color(Fl_Line_Dial *); void Fl_Line_Dial_set_selection_color(Fl_Line_Dial *, unsigned int color); void Fl_Line_Dial_do_callback(Fl_Line_Dial *); int Fl_Line_Dial_inside(const Fl_Line_Dial *self, void *); void *Fl_Line_Dial_window(const Fl_Line_Dial *); void *Fl_Line_Dial_top_window(const Fl_Line_Dial *); int Fl_Line_Dial_takes_events(const Fl_Line_Dial *); void *Fl_Line_Dial_user_data(const Fl_Line_Dial *); int Fl_Line_Dial_take_focus(Fl_Line_Dial *self); void Fl_Line_Dial_set_visible_focus(Fl_Line_Dial *self); void Fl_Line_Dial_clear_visible_focus(Fl_Line_Dial *self); void Fl_Line_Dial_visible_focus(Fl_Line_Dial *self, int v); unsigned int Fl_Line_Dial_has_visible_focus(Fl_Line_Dial *self); void Fl_Line_Dial_set_user_data(Fl_Line_Dial *, void *data); void *Fl_Line_Dial_draw_data(const Fl_Line_Dial *self); void *Fl_Line_Dial_handle_data(const Fl_Line_Dial *self); void Fl_Line_Dial_set_draw_data(Fl_Line_Dial *self, void *data); void Fl_Line_Dial_set_handle_data(Fl_Line_Dial *self, void *data); unsigned char Fl_Line_Dial_damage(const Fl_Line_Dial *self); void Fl_Line_Dial_set_damage(Fl_Line_Dial *self, unsigned char flag); void Fl_Line_Dial_set_damage_area( Fl_Line_Dial *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Line_Dial_clear_damage(Fl_Line_Dial *self); void *Fl_Line_Dial_as_window(Fl_Line_Dial *self); void *Fl_Line_Dial_as_group(Fl_Line_Dial *self); void Fl_Line_Dial_set_deimage(Fl_Line_Dial *, void *); const void *Fl_Line_Dial_deimage(const Fl_Line_Dial *); void Fl_Line_Dial_set_callback(Fl_Line_Dial *, Fl_Callback *, void *); int Fl_Line_Dial_visible(const Fl_Line_Dial *self); int Fl_Line_Dial_visible_r(const Fl_Line_Dial *self); unsigned int Fl_Line_Dial_active(const Fl_Line_Dial *self); int Fl_Line_Dial_active_r(const Fl_Line_Dial *self); Fl_Callback *Fl_Line_Dial_callback(const Fl_Line_Dial *self); void Fl_Line_Dial_set_deletion_callback( Fl_Line_Dial *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Line_Dial *Fl_Line_Dial_from_dyn_ptr(Fl_Widget *ptr); Fl_Line_Dial *Fl_Line_Dial_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Line_Dial_super_draw(Fl_Widget *ptr, int flag); void Fl_Line_Dial_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Line_Dial_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Line_Dial_set_bounds(Fl_Line_Dial *, double a, double b); double Fl_Line_Dial_minimum(Fl_Line_Dial *); void Fl_Line_Dial_set_minimum(Fl_Line_Dial *, double a); double Fl_Line_Dial_maximum(Fl_Line_Dial *); void Fl_Line_Dial_set_maximum(Fl_Line_Dial *, double a); void Fl_Line_Dial_set_range(Fl_Line_Dial *, double a, double b); void Fl_Line_Dial_set_step(Fl_Line_Dial *, double a, int b); double Fl_Line_Dial_step(Fl_Line_Dial *); void Fl_Line_Dial_set_precision(Fl_Line_Dial *, int digits); double Fl_Line_Dial_value(Fl_Line_Dial *); int Fl_Line_Dial_set_value(Fl_Line_Dial *, double); int Fl_Line_Dial_format(Fl_Line_Dial *, char *); double Fl_Line_Dial_round(Fl_Line_Dial *, double); double Fl_Line_Dial_clamp(Fl_Line_Dial *, double); double Fl_Line_Dial_increment(Fl_Line_Dial *, double, int);

typedef struct Fl_Roller Fl_Roller; Fl_Roller *Fl_Roller_new( int x, int y, int width, int height, const char *title ); int Fl_Roller_x(Fl_Roller *); int Fl_Roller_y(Fl_Roller *); int Fl_Roller_width(Fl_Roller *); int Fl_Roller_height(Fl_Roller *); const char *Fl_Roller_label(Fl_Roller *); void Fl_Roller_set_label(Fl_Roller *, const char *title); void Fl_Roller_redraw(Fl_Roller *); void Fl_Roller_show(Fl_Roller *); void Fl_Roller_hide(Fl_Roller *); void Fl_Roller_activate(Fl_Roller *); void Fl_Roller_deactivate(Fl_Roller *); void Fl_Roller_redraw_label(Fl_Roller *); void Fl_Roller_resize(Fl_Roller *, int x, int y, int width, int height); void Fl_Roller_widget_resize( Fl_Roller *, int x, int y, int width, int height ); const char *Fl_Roller_tooltip(Fl_Roller *); void Fl_Roller_set_tooltip(Fl_Roller *, const char *txt); int Fl_Roller_get_type(Fl_Roller *); void Fl_Roller_set_type(Fl_Roller *, int typ); unsigned int Fl_Roller_color(Fl_Roller *); void Fl_Roller_set_color(Fl_Roller *, unsigned int color); void Fl_Roller_measure_label(const Fl_Roller *, int *, int *); unsigned int Fl_Roller_label_color(Fl_Roller *); void Fl_Roller_set_label_color(Fl_Roller *, unsigned int color); int Fl_Roller_label_font(Fl_Roller *); void Fl_Roller_set_label_font(Fl_Roller *, int font); int Fl_Roller_label_size(Fl_Roller *); void Fl_Roller_set_label_size(Fl_Roller *, int sz); int Fl_Roller_label_type(Fl_Roller *); void Fl_Roller_set_label_type(Fl_Roller *, int typ); int Fl_Roller_box(Fl_Roller *); void Fl_Roller_set_box(Fl_Roller *, int typ); int Fl_Roller_changed(Fl_Roller *); void Fl_Roller_set_changed(Fl_Roller *); void Fl_Roller_clear_changed(Fl_Roller *); int Fl_Roller_align(Fl_Roller *); void Fl_Roller_set_align(Fl_Roller *, int typ); void Fl_Roller_delete(Fl_Roller *); void Fl_Roller_set_image(Fl_Roller *, void *); void Fl_Roller_handle( Fl_Roller *self, custom_handler_callback cb, void *data ); int Fl_Roller_handle_event(Fl_Roller *self, int event); void Fl_Roller_draw(Fl_Roller *self, custom_draw_callback cb, void *data); void Fl_Roller_resize_callback( Fl_Roller *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Roller_set_when(Fl_Roller *, int); int Fl_Roller_when(const Fl_Roller *); const void *Fl_Roller_image(const Fl_Roller *); void *Fl_Roller_parent(const Fl_Roller *self); unsigned int Fl_Roller_selection_color(Fl_Roller *); void Fl_Roller_set_selection_color(Fl_Roller *, unsigned int color); void Fl_Roller_do_callback(Fl_Roller *); int Fl_Roller_inside(const Fl_Roller *self, void *); void *Fl_Roller_window(const Fl_Roller *); void *Fl_Roller_top_window(const Fl_Roller *); int Fl_Roller_takes_events(const Fl_Roller *); void *Fl_Roller_user_data(const Fl_Roller *); int Fl_Roller_take_focus(Fl_Roller *self); void Fl_Roller_set_visible_focus(Fl_Roller *self); void Fl_Roller_clear_visible_focus(Fl_Roller *self); void Fl_Roller_visible_focus(Fl_Roller *self, int v); unsigned int Fl_Roller_has_visible_focus(Fl_Roller *self); void Fl_Roller_set_user_data(Fl_Roller *, void *data); void *Fl_Roller_draw_data(const Fl_Roller *self); void *Fl_Roller_handle_data(const Fl_Roller *self); void Fl_Roller_set_draw_data(Fl_Roller *self, void *data); void Fl_Roller_set_handle_data(Fl_Roller *self, void *data); unsigned char Fl_Roller_damage(const Fl_Roller *self); void Fl_Roller_set_damage(Fl_Roller *self, unsigned char flag); void Fl_Roller_set_damage_area( Fl_Roller *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Roller_clear_damage(Fl_Roller *self); void *Fl_Roller_as_window(Fl_Roller *self); void *Fl_Roller_as_group(Fl_Roller *self); void Fl_Roller_set_deimage(Fl_Roller *, void *); const void *Fl_Roller_deimage(const Fl_Roller *); void Fl_Roller_set_callback(Fl_Roller *, Fl_Callback *, void *); int Fl_Roller_visible(const Fl_Roller *self); int Fl_Roller_visible_r(const Fl_Roller *self); unsigned int Fl_Roller_active(const Fl_Roller *self); int Fl_Roller_active_r(const Fl_Roller *self); Fl_Callback *Fl_Roller_callback(const Fl_Roller *self); void Fl_Roller_set_deletion_callback( Fl_Roller *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Roller *Fl_Roller_from_dyn_ptr(Fl_Widget *ptr); Fl_Roller *Fl_Roller_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Roller_super_draw(Fl_Widget *ptr, int flag); void Fl_Roller_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Roller_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Roller_set_bounds(Fl_Roller *, double a, double b); double Fl_Roller_minimum(Fl_Roller *); void Fl_Roller_set_minimum(Fl_Roller *, double a); double Fl_Roller_maximum(Fl_Roller *); void Fl_Roller_set_maximum(Fl_Roller *, double a); void Fl_Roller_set_range(Fl_Roller *, double a, double b); void Fl_Roller_set_step(Fl_Roller *, double a, int b); double Fl_Roller_step(Fl_Roller *); void Fl_Roller_set_precision(Fl_Roller *, int digits); double Fl_Roller_value(Fl_Roller *); int Fl_Roller_set_value(Fl_Roller *, double); int Fl_Roller_format(Fl_Roller *, char *); double Fl_Roller_round(Fl_Roller *, double); double Fl_Roller_clamp(Fl_Roller *, double); double Fl_Roller_increment(Fl_Roller *, double, int);

typedef struct Fl_Scrollbar Fl_Scrollbar; Fl_Scrollbar *Fl_Scrollbar_new( int x, int y, int width, int height, const char *title ); int Fl_Scrollbar_x(Fl_Scrollbar *); int Fl_Scrollbar_y(Fl_Scrollbar *); int Fl_Scrollbar_width(Fl_Scrollbar *); int Fl_Scrollbar_height(Fl_Scrollbar *); const char *Fl_Scrollbar_label(Fl_Scrollbar *); void Fl_Scrollbar_set_label(Fl_Scrollbar *, const char *title); void Fl_Scrollbar_redraw(Fl_Scrollbar *); void Fl_Scrollbar_show(Fl_Scrollbar *); void Fl_Scrollbar_hide(Fl_Scrollbar *); void Fl_Scrollbar_activate(Fl_Scrollbar *); void Fl_Scrollbar_deactivate(Fl_Scrollbar *); void Fl_Scrollbar_redraw_label(Fl_Scrollbar *); void Fl_Scrollbar_resize(Fl_Scrollbar *, int x, int y, int width, int height); void Fl_Scrollbar_widget_resize( Fl_Scrollbar *, int x, int y, int width, int height ); const char *Fl_Scrollbar_tooltip(Fl_Scrollbar *); void Fl_Scrollbar_set_tooltip(Fl_Scrollbar *, const char *txt); int Fl_Scrollbar_get_type(Fl_Scrollbar *); void Fl_Scrollbar_set_type(Fl_Scrollbar *, int typ); unsigned int Fl_Scrollbar_color(Fl_Scrollbar *); void Fl_Scrollbar_set_color(Fl_Scrollbar *, unsigned int color); void Fl_Scrollbar_measure_label(const Fl_Scrollbar *, int *, int *); unsigned int Fl_Scrollbar_label_color(Fl_Scrollbar *); void Fl_Scrollbar_set_label_color(Fl_Scrollbar *, unsigned int color); int Fl_Scrollbar_label_font(Fl_Scrollbar *); void Fl_Scrollbar_set_label_font(Fl_Scrollbar *, int font); int Fl_Scrollbar_label_size(Fl_Scrollbar *); void Fl_Scrollbar_set_label_size(Fl_Scrollbar *, int sz); int Fl_Scrollbar_label_type(Fl_Scrollbar *); void Fl_Scrollbar_set_label_type(Fl_Scrollbar *, int typ); int Fl_Scrollbar_box(Fl_Scrollbar *); void Fl_Scrollbar_set_box(Fl_Scrollbar *, int typ); int Fl_Scrollbar_changed(Fl_Scrollbar *); void Fl_Scrollbar_set_changed(Fl_Scrollbar *); void Fl_Scrollbar_clear_changed(Fl_Scrollbar *); int Fl_Scrollbar_align(Fl_Scrollbar *); void Fl_Scrollbar_set_align(Fl_Scrollbar *, int typ); void Fl_Scrollbar_delete(Fl_Scrollbar *); void Fl_Scrollbar_set_image(Fl_Scrollbar *, void *); void Fl_Scrollbar_handle( Fl_Scrollbar *self, custom_handler_callback cb, void *data ); int Fl_Scrollbar_handle_event(Fl_Scrollbar *self, int event); void Fl_Scrollbar_draw(Fl_Scrollbar *self, custom_draw_callback cb, void *data); void Fl_Scrollbar_resize_callback( Fl_Scrollbar *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Scrollbar_set_when(Fl_Scrollbar *, int); int Fl_Scrollbar_when(const Fl_Scrollbar *); const void *Fl_Scrollbar_image(const Fl_Scrollbar *); void *Fl_Scrollbar_parent(const Fl_Scrollbar *self); unsigned int Fl_Scrollbar_selection_color(Fl_Scrollbar *); void Fl_Scrollbar_set_selection_color(Fl_Scrollbar *, unsigned int color); void Fl_Scrollbar_do_callback(Fl_Scrollbar *); int Fl_Scrollbar_inside(const Fl_Scrollbar *self, void *); void *Fl_Scrollbar_window(const Fl_Scrollbar *); void *Fl_Scrollbar_top_window(const Fl_Scrollbar *); int Fl_Scrollbar_takes_events(const Fl_Scrollbar *); void *Fl_Scrollbar_user_data(const Fl_Scrollbar *); int Fl_Scrollbar_take_focus(Fl_Scrollbar *self); void Fl_Scrollbar_set_visible_focus(Fl_Scrollbar *self); void Fl_Scrollbar_clear_visible_focus(Fl_Scrollbar *self); void Fl_Scrollbar_visible_focus(Fl_Scrollbar *self, int v); unsigned int Fl_Scrollbar_has_visible_focus(Fl_Scrollbar *self); void Fl_Scrollbar_set_user_data(Fl_Scrollbar *, void *data); void *Fl_Scrollbar_draw_data(const Fl_Scrollbar *self); void *Fl_Scrollbar_handle_data(const Fl_Scrollbar *self); void Fl_Scrollbar_set_draw_data(Fl_Scrollbar *self, void *data); void Fl_Scrollbar_set_handle_data(Fl_Scrollbar *self, void *data); unsigned char Fl_Scrollbar_damage(const Fl_Scrollbar *self); void Fl_Scrollbar_set_damage(Fl_Scrollbar *self, unsigned char flag); void Fl_Scrollbar_set_damage_area( Fl_Scrollbar *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Scrollbar_clear_damage(Fl_Scrollbar *self); void *Fl_Scrollbar_as_window(Fl_Scrollbar *self); void *Fl_Scrollbar_as_group(Fl_Scrollbar *self); void Fl_Scrollbar_set_deimage(Fl_Scrollbar *, void *); const void *Fl_Scrollbar_deimage(const Fl_Scrollbar *); void Fl_Scrollbar_set_callback(Fl_Scrollbar *, Fl_Callback *, void *); int Fl_Scrollbar_visible(const Fl_Scrollbar *self); int Fl_Scrollbar_visible_r(const Fl_Scrollbar *self); unsigned int Fl_Scrollbar_active(const Fl_Scrollbar *self); int Fl_Scrollbar_active_r(const Fl_Scrollbar *self); Fl_Callback *Fl_Scrollbar_callback(const Fl_Scrollbar *self); void Fl_Scrollbar_set_deletion_callback( Fl_Scrollbar *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Scrollbar *Fl_Scrollbar_from_dyn_ptr(Fl_Widget *ptr); Fl_Scrollbar *Fl_Scrollbar_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Scrollbar_super_draw(Fl_Widget *ptr, int flag); void Fl_Scrollbar_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Scrollbar_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Scrollbar_set_linesize(Fl_Scrollbar *self, int sz);

int Fl_Scrollbar_linesize(const Fl_Scrollbar *self);

int Fl_Scrollbar_scroll_value(Fl_Scrollbar *self, int pos, int windowSize, int first_line, int total_lines);

void Fl_Scrollbar_set_bounds(Fl_Scrollbar *, double a, double b); double Fl_Scrollbar_minimum(Fl_Scrollbar *); void Fl_Scrollbar_set_minimum(Fl_Scrollbar *, double a); double Fl_Scrollbar_maximum(Fl_Scrollbar *); void Fl_Scrollbar_set_maximum(Fl_Scrollbar *, double a); void Fl_Scrollbar_set_range(Fl_Scrollbar *, double a, double b); void Fl_Scrollbar_set_step(Fl_Scrollbar *, double a, int b); double Fl_Scrollbar_step(Fl_Scrollbar *); void Fl_Scrollbar_set_precision(Fl_Scrollbar *, int digits); double Fl_Scrollbar_value(Fl_Scrollbar *); int Fl_Scrollbar_set_value(Fl_Scrollbar *, double); int Fl_Scrollbar_format(Fl_Scrollbar *, char *); double Fl_Scrollbar_round(Fl_Scrollbar *, double); double Fl_Scrollbar_clamp(Fl_Scrollbar *, double); double Fl_Scrollbar_increment(Fl_Scrollbar *, double, int);

typedef struct Fl_Value_Slider Fl_Value_Slider; Fl_Value_Slider *Fl_Value_Slider_new( int x, int y, int width, int height, const char *title ); int Fl_Value_Slider_x(Fl_Value_Slider *); int Fl_Value_Slider_y(Fl_Value_Slider *); int Fl_Value_Slider_width(Fl_Value_Slider *); int Fl_Value_Slider_height(Fl_Value_Slider *); const char *Fl_Value_Slider_label(Fl_Value_Slider *); void Fl_Value_Slider_set_label(Fl_Value_Slider *, const char *title); void Fl_Value_Slider_redraw(Fl_Value_Slider *); void Fl_Value_Slider_show(Fl_Value_Slider *); void Fl_Value_Slider_hide(Fl_Value_Slider *); void Fl_Value_Slider_activate(Fl_Value_Slider *); void Fl_Value_Slider_deactivate(Fl_Value_Slider *); void Fl_Value_Slider_redraw_label(Fl_Value_Slider *); void Fl_Value_Slider_resize(Fl_Value_Slider *, int x, int y, int width, int height); void Fl_Value_Slider_widget_resize( Fl_Value_Slider *, int x, int y, int width, int height ); const char *Fl_Value_Slider_tooltip(Fl_Value_Slider *); void Fl_Value_Slider_set_tooltip(Fl_Value_Slider *, const char *txt); int Fl_Value_Slider_get_type(Fl_Value_Slider *); void Fl_Value_Slider_set_type(Fl_Value_Slider *, int typ); unsigned int Fl_Value_Slider_color(Fl_Value_Slider *); void Fl_Value_Slider_set_color(Fl_Value_Slider *, unsigned int color); void Fl_Value_Slider_measure_label(const Fl_Value_Slider *, int *, int *); unsigned int Fl_Value_Slider_label_color(Fl_Value_Slider *); void Fl_Value_Slider_set_label_color(Fl_Value_Slider *, unsigned int color); int Fl_Value_Slider_label_font(Fl_Value_Slider *); void Fl_Value_Slider_set_label_font(Fl_Value_Slider *, int font); int Fl_Value_Slider_label_size(Fl_Value_Slider *); void Fl_Value_Slider_set_label_size(Fl_Value_Slider *, int sz); int Fl_Value_Slider_label_type(Fl_Value_Slider *); void Fl_Value_Slider_set_label_type(Fl_Value_Slider *, int typ); int Fl_Value_Slider_box(Fl_Value_Slider *); void Fl_Value_Slider_set_box(Fl_Value_Slider *, int typ); int Fl_Value_Slider_changed(Fl_Value_Slider *); void Fl_Value_Slider_set_changed(Fl_Value_Slider *); void Fl_Value_Slider_clear_changed(Fl_Value_Slider *); int Fl_Value_Slider_align(Fl_Value_Slider *); void Fl_Value_Slider_set_align(Fl_Value_Slider *, int typ); void Fl_Value_Slider_delete(Fl_Value_Slider *); void Fl_Value_Slider_set_image(Fl_Value_Slider *, void *); void Fl_Value_Slider_handle( Fl_Value_Slider *self, custom_handler_callback cb, void *data ); int Fl_Value_Slider_handle_event(Fl_Value_Slider *self, int event); void Fl_Value_Slider_draw(Fl_Value_Slider *self, custom_draw_callback cb, void *data); void Fl_Value_Slider_resize_callback( Fl_Value_Slider *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Value_Slider_set_when(Fl_Value_Slider *, int); int Fl_Value_Slider_when(const Fl_Value_Slider *); const void *Fl_Value_Slider_image(const Fl_Value_Slider *); void *Fl_Value_Slider_parent(const Fl_Value_Slider *self); unsigned int Fl_Value_Slider_selection_color(Fl_Value_Slider *); void Fl_Value_Slider_set_selection_color(Fl_Value_Slider *, unsigned int color); void Fl_Value_Slider_do_callback(Fl_Value_Slider *); int Fl_Value_Slider_inside(const Fl_Value_Slider *self, void *); void *Fl_Value_Slider_window(const Fl_Value_Slider *); void *Fl_Value_Slider_top_window(const Fl_Value_Slider *); int Fl_Value_Slider_takes_events(const Fl_Value_Slider *); void *Fl_Value_Slider_user_data(const Fl_Value_Slider *); int Fl_Value_Slider_take_focus(Fl_Value_Slider *self); void Fl_Value_Slider_set_visible_focus(Fl_Value_Slider *self); void Fl_Value_Slider_clear_visible_focus(Fl_Value_Slider *self); void Fl_Value_Slider_visible_focus(Fl_Value_Slider *self, int v); unsigned int Fl_Value_Slider_has_visible_focus(Fl_Value_Slider *self); void Fl_Value_Slider_set_user_data(Fl_Value_Slider *, void *data); void *Fl_Value_Slider_draw_data(const Fl_Value_Slider *self); void *Fl_Value_Slider_handle_data(const Fl_Value_Slider *self); void Fl_Value_Slider_set_draw_data(Fl_Value_Slider *self, void *data); void Fl_Value_Slider_set_handle_data(Fl_Value_Slider *self, void *data); unsigned char Fl_Value_Slider_damage(const Fl_Value_Slider *self); void Fl_Value_Slider_set_damage(Fl_Value_Slider *self, unsigned char flag); void Fl_Value_Slider_set_damage_area( Fl_Value_Slider *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Value_Slider_clear_damage(Fl_Value_Slider *self); void *Fl_Value_Slider_as_window(Fl_Value_Slider *self); void *Fl_Value_Slider_as_group(Fl_Value_Slider *self); void Fl_Value_Slider_set_deimage(Fl_Value_Slider *, void *); const void *Fl_Value_Slider_deimage(const Fl_Value_Slider *); void Fl_Value_Slider_set_callback(Fl_Value_Slider *, Fl_Callback *, void *); int Fl_Value_Slider_visible(const Fl_Value_Slider *self); int Fl_Value_Slider_visible_r(const Fl_Value_Slider *self); unsigned int Fl_Value_Slider_active(const Fl_Value_Slider *self); int Fl_Value_Slider_active_r(const Fl_Value_Slider *self); Fl_Callback *Fl_Value_Slider_callback(const Fl_Value_Slider *self); void Fl_Value_Slider_set_deletion_callback( Fl_Value_Slider *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Value_Slider *Fl_Value_Slider_from_dyn_ptr(Fl_Widget *ptr); Fl_Value_Slider *Fl_Value_Slider_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Value_Slider_super_draw(Fl_Widget *ptr, int flag); void Fl_Value_Slider_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Value_Slider_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Value_Slider_set_text_color(Fl_Value_Slider *self, unsigned int c);

unsigned int Fl_Value_Slider_text_color(Fl_Value_Slider *self);

void Fl_Value_Slider_set_text_font(Fl_Value_Slider *self, int f);

int Fl_Value_Slider_text_font(Fl_Value_Slider *self);

void Fl_Value_Slider_set_text_size(Fl_Value_Slider *self, int s);

int Fl_Value_Slider_text_size(Fl_Value_Slider *self);

void Fl_Value_Slider_set_bounds(Fl_Value_Slider *, double a, double b); double Fl_Value_Slider_minimum(Fl_Value_Slider *); void Fl_Value_Slider_set_minimum(Fl_Value_Slider *, double a); double Fl_Value_Slider_maximum(Fl_Value_Slider *); void Fl_Value_Slider_set_maximum(Fl_Value_Slider *, double a); void Fl_Value_Slider_set_range(Fl_Value_Slider *, double a, double b); void Fl_Value_Slider_set_step(Fl_Value_Slider *, double a, int b); double Fl_Value_Slider_step(Fl_Value_Slider *); void Fl_Value_Slider_set_precision(Fl_Value_Slider *, int digits); double Fl_Value_Slider_value(Fl_Value_Slider *); int Fl_Value_Slider_set_value(Fl_Value_Slider *, double); int Fl_Value_Slider_format(Fl_Value_Slider *, char *); double Fl_Value_Slider_round(Fl_Value_Slider *, double); double Fl_Value_Slider_clamp(Fl_Value_Slider *, double); double Fl_Value_Slider_increment(Fl_Value_Slider *, double, int);

typedef struct Fl_Adjuster Fl_Adjuster; Fl_Adjuster *Fl_Adjuster_new( int x, int y, int width, int height, const char *title ); int Fl_Adjuster_x(Fl_Adjuster *); int Fl_Adjuster_y(Fl_Adjuster *); int Fl_Adjuster_width(Fl_Adjuster *); int Fl_Adjuster_height(Fl_Adjuster *); const char *Fl_Adjuster_label(Fl_Adjuster *); void Fl_Adjuster_set_label(Fl_Adjuster *, const char *title); void Fl_Adjuster_redraw(Fl_Adjuster *); void Fl_Adjuster_show(Fl_Adjuster *); void Fl_Adjuster_hide(Fl_Adjuster *); void Fl_Adjuster_activate(Fl_Adjuster *); void Fl_Adjuster_deactivate(Fl_Adjuster *); void Fl_Adjuster_redraw_label(Fl_Adjuster *); void Fl_Adjuster_resize(Fl_Adjuster *, int x, int y, int width, int height); void Fl_Adjuster_widget_resize( Fl_Adjuster *, int x, int y, int width, int height ); const char *Fl_Adjuster_tooltip(Fl_Adjuster *); void Fl_Adjuster_set_tooltip(Fl_Adjuster *, const char *txt); int Fl_Adjuster_get_type(Fl_Adjuster *); void Fl_Adjuster_set_type(Fl_Adjuster *, int typ); unsigned int Fl_Adjuster_color(Fl_Adjuster *); void Fl_Adjuster_set_color(Fl_Adjuster *, unsigned int color); void Fl_Adjuster_measure_label(const Fl_Adjuster *, int *, int *); unsigned int Fl_Adjuster_label_color(Fl_Adjuster *); void Fl_Adjuster_set_label_color(Fl_Adjuster *, unsigned int color); int Fl_Adjuster_label_font(Fl_Adjuster *); void Fl_Adjuster_set_label_font(Fl_Adjuster *, int font); int Fl_Adjuster_label_size(Fl_Adjuster *); void Fl_Adjuster_set_label_size(Fl_Adjuster *, int sz); int Fl_Adjuster_label_type(Fl_Adjuster *); void Fl_Adjuster_set_label_type(Fl_Adjuster *, int typ); int Fl_Adjuster_box(Fl_Adjuster *); void Fl_Adjuster_set_box(Fl_Adjuster *, int typ); int Fl_Adjuster_changed(Fl_Adjuster *); void Fl_Adjuster_set_changed(Fl_Adjuster *); void Fl_Adjuster_clear_changed(Fl_Adjuster *); int Fl_Adjuster_align(Fl_Adjuster *); void Fl_Adjuster_set_align(Fl_Adjuster *, int typ); void Fl_Adjuster_delete(Fl_Adjuster *); void Fl_Adjuster_set_image(Fl_Adjuster *, void *); void Fl_Adjuster_handle( Fl_Adjuster *self, custom_handler_callback cb, void *data ); int Fl_Adjuster_handle_event(Fl_Adjuster *self, int event); void Fl_Adjuster_draw(Fl_Adjuster *self, custom_draw_callback cb, void *data); void Fl_Adjuster_resize_callback( Fl_Adjuster *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Adjuster_set_when(Fl_Adjuster *, int); int Fl_Adjuster_when(const Fl_Adjuster *); const void *Fl_Adjuster_image(const Fl_Adjuster *); void *Fl_Adjuster_parent(const Fl_Adjuster *self); unsigned int Fl_Adjuster_selection_color(Fl_Adjuster *); void Fl_Adjuster_set_selection_color(Fl_Adjuster *, unsigned int color); void Fl_Adjuster_do_callback(Fl_Adjuster *); int Fl_Adjuster_inside(const Fl_Adjuster *self, void *); void *Fl_Adjuster_window(const Fl_Adjuster *); void *Fl_Adjuster_top_window(const Fl_Adjuster *); int Fl_Adjuster_takes_events(const Fl_Adjuster *); void *Fl_Adjuster_user_data(const Fl_Adjuster *); int Fl_Adjuster_take_focus(Fl_Adjuster *self); void Fl_Adjuster_set_visible_focus(Fl_Adjuster *self); void Fl_Adjuster_clear_visible_focus(Fl_Adjuster *self); void Fl_Adjuster_visible_focus(Fl_Adjuster *self, int v); unsigned int Fl_Adjuster_has_visible_focus(Fl_Adjuster *self); void Fl_Adjuster_set_user_data(Fl_Adjuster *, void *data); void *Fl_Adjuster_draw_data(const Fl_Adjuster *self); void *Fl_Adjuster_handle_data(const Fl_Adjuster *self); void Fl_Adjuster_set_draw_data(Fl_Adjuster *self, void *data); void Fl_Adjuster_set_handle_data(Fl_Adjuster *self, void *data); unsigned char Fl_Adjuster_damage(const Fl_Adjuster *self); void Fl_Adjuster_set_damage(Fl_Adjuster *self, unsigned char flag); void Fl_Adjuster_set_damage_area( Fl_Adjuster *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Adjuster_clear_damage(Fl_Adjuster *self); void *Fl_Adjuster_as_window(Fl_Adjuster *self); void *Fl_Adjuster_as_group(Fl_Adjuster *self); void Fl_Adjuster_set_deimage(Fl_Adjuster *, void *); const void *Fl_Adjuster_deimage(const Fl_Adjuster *); void Fl_Adjuster_set_callback(Fl_Adjuster *, Fl_Callback *, void *); int Fl_Adjuster_visible(const Fl_Adjuster *self); int Fl_Adjuster_visible_r(const Fl_Adjuster *self); unsigned int Fl_Adjuster_active(const Fl_Adjuster *self); int Fl_Adjuster_active_r(const Fl_Adjuster *self); Fl_Callback *Fl_Adjuster_callback(const Fl_Adjuster *self); void Fl_Adjuster_set_deletion_callback( Fl_Adjuster *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Adjuster *Fl_Adjuster_from_dyn_ptr(Fl_Widget *ptr); Fl_Adjuster *Fl_Adjuster_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Adjuster_super_draw(Fl_Widget *ptr, int flag); void Fl_Adjuster_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Adjuster_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Adjuster_set_bounds(Fl_Adjuster *, double a, double b); double Fl_Adjuster_minimum(Fl_Adjuster *); void Fl_Adjuster_set_minimum(Fl_Adjuster *, double a); double Fl_Adjuster_maximum(Fl_Adjuster *); void Fl_Adjuster_set_maximum(Fl_Adjuster *, double a); void Fl_Adjuster_set_range(Fl_Adjuster *, double a, double b); void Fl_Adjuster_set_step(Fl_Adjuster *, double a, int b); double Fl_Adjuster_step(Fl_Adjuster *); void Fl_Adjuster_set_precision(Fl_Adjuster *, int digits); double Fl_Adjuster_value(Fl_Adjuster *); int Fl_Adjuster_set_value(Fl_Adjuster *, double); int Fl_Adjuster_format(Fl_Adjuster *, char *); double Fl_Adjuster_round(Fl_Adjuster *, double); double Fl_Adjuster_clamp(Fl_Adjuster *, double); double Fl_Adjuster_increment(Fl_Adjuster *, double, int);

typedef struct Fl_Value_Input Fl_Value_Input; Fl_Value_Input *Fl_Value_Input_new( int x, int y, int width, int height, const char *title ); int Fl_Value_Input_x(Fl_Value_Input *); int Fl_Value_Input_y(Fl_Value_Input *); int Fl_Value_Input_width(Fl_Value_Input *); int Fl_Value_Input_height(Fl_Value_Input *); const char *Fl_Value_Input_label(Fl_Value_Input *); void Fl_Value_Input_set_label(Fl_Value_Input *, const char *title); void Fl_Value_Input_redraw(Fl_Value_Input *); void Fl_Value_Input_show(Fl_Value_Input *); void Fl_Value_Input_hide(Fl_Value_Input *); void Fl_Value_Input_activate(Fl_Value_Input *); void Fl_Value_Input_deactivate(Fl_Value_Input *); void Fl_Value_Input_redraw_label(Fl_Value_Input *); void Fl_Value_Input_resize(Fl_Value_Input *, int x, int y, int width, int height); void Fl_Value_Input_widget_resize( Fl_Value_Input *, int x, int y, int width, int height ); const char *Fl_Value_Input_tooltip(Fl_Value_Input *); void Fl_Value_Input_set_tooltip(Fl_Value_Input *, const char *txt); int Fl_Value_Input_get_type(Fl_Value_Input *); void Fl_Value_Input_set_type(Fl_Value_Input *, int typ); unsigned int Fl_Value_Input_color(Fl_Value_Input *); void Fl_Value_Input_set_color(Fl_Value_Input *, unsigned int color); void Fl_Value_Input_measure_label(const Fl_Value_Input *, int *, int *); unsigned int Fl_Value_Input_label_color(Fl_Value_Input *); void Fl_Value_Input_set_label_color(Fl_Value_Input *, unsigned int color); int Fl_Value_Input_label_font(Fl_Value_Input *); void Fl_Value_Input_set_label_font(Fl_Value_Input *, int font); int Fl_Value_Input_label_size(Fl_Value_Input *); void Fl_Value_Input_set_label_size(Fl_Value_Input *, int sz); int Fl_Value_Input_label_type(Fl_Value_Input *); void Fl_Value_Input_set_label_type(Fl_Value_Input *, int typ); int Fl_Value_Input_box(Fl_Value_Input *); void Fl_Value_Input_set_box(Fl_Value_Input *, int typ); int Fl_Value_Input_changed(Fl_Value_Input *); void Fl_Value_Input_set_changed(Fl_Value_Input *); void Fl_Value_Input_clear_changed(Fl_Value_Input *); int Fl_Value_Input_align(Fl_Value_Input *); void Fl_Value_Input_set_align(Fl_Value_Input *, int typ); void Fl_Value_Input_delete(Fl_Value_Input *); void Fl_Value_Input_set_image(Fl_Value_Input *, void *); void Fl_Value_Input_handle( Fl_Value_Input *self, custom_handler_callback cb, void *data ); int Fl_Value_Input_handle_event(Fl_Value_Input *self, int event); void Fl_Value_Input_draw(Fl_Value_Input *self, custom_draw_callback cb, void *data); void Fl_Value_Input_resize_callback( Fl_Value_Input *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Value_Input_set_when(Fl_Value_Input *, int); int Fl_Value_Input_when(const Fl_Value_Input *); const void *Fl_Value_Input_image(const Fl_Value_Input *); void *Fl_Value_Input_parent(const Fl_Value_Input *self); unsigned int Fl_Value_Input_selection_color(Fl_Value_Input *); void Fl_Value_Input_set_selection_color(Fl_Value_Input *, unsigned int color); void Fl_Value_Input_do_callback(Fl_Value_Input *); int Fl_Value_Input_inside(const Fl_Value_Input *self, void *); void *Fl_Value_Input_window(const Fl_Value_Input *); void *Fl_Value_Input_top_window(const Fl_Value_Input *); int Fl_Value_Input_takes_events(const Fl_Value_Input *); void *Fl_Value_Input_user_data(const Fl_Value_Input *); int Fl_Value_Input_take_focus(Fl_Value_Input *self); void Fl_Value_Input_set_visible_focus(Fl_Value_Input *self); void Fl_Value_Input_clear_visible_focus(Fl_Value_Input *self); void Fl_Value_Input_visible_focus(Fl_Value_Input *self, int v); unsigned int Fl_Value_Input_has_visible_focus(Fl_Value_Input *self); void Fl_Value_Input_set_user_data(Fl_Value_Input *, void *data); void *Fl_Value_Input_draw_data(const Fl_Value_Input *self); void *Fl_Value_Input_handle_data(const Fl_Value_Input *self); void Fl_Value_Input_set_draw_data(Fl_Value_Input *self, void *data); void Fl_Value_Input_set_handle_data(Fl_Value_Input *self, void *data); unsigned char Fl_Value_Input_damage(const Fl_Value_Input *self); void Fl_Value_Input_set_damage(Fl_Value_Input *self, unsigned char flag); void Fl_Value_Input_set_damage_area( Fl_Value_Input *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Value_Input_clear_damage(Fl_Value_Input *self); void *Fl_Value_Input_as_window(Fl_Value_Input *self); void *Fl_Value_Input_as_group(Fl_Value_Input *self); void Fl_Value_Input_set_deimage(Fl_Value_Input *, void *); const void *Fl_Value_Input_deimage(const Fl_Value_Input *); void Fl_Value_Input_set_callback(Fl_Value_Input *, Fl_Callback *, void *); int Fl_Value_Input_visible(const Fl_Value_Input *self); int Fl_Value_Input_visible_r(const Fl_Value_Input *self); unsigned int Fl_Value_Input_active(const Fl_Value_Input *self); int Fl_Value_Input_active_r(const Fl_Value_Input *self); Fl_Callback *Fl_Value_Input_callback(const Fl_Value_Input *self); void Fl_Value_Input_set_deletion_callback( Fl_Value_Input *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Value_Input *Fl_Value_Input_from_dyn_ptr(Fl_Widget *ptr); Fl_Value_Input *Fl_Value_Input_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Value_Input_super_draw(Fl_Widget *ptr, int flag); void Fl_Value_Input_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Value_Input_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Value_Input_set_text_color(Fl_Value_Input *self, unsigned int c);

unsigned int Fl_Value_Input_text_color(Fl_Value_Input *self);

void Fl_Value_Input_set_text_font(Fl_Value_Input *self, int f);

int Fl_Value_Input_text_font(Fl_Value_Input *self);

void Fl_Value_Input_set_text_size(Fl_Value_Input *self, int s);

int Fl_Value_Input_text_size(Fl_Value_Input *self);

void Fl_Value_Input_set_soft(Fl_Value_Input *self, char val);

char Fl_Value_Input_soft(const Fl_Value_Input *self);

void Fl_Value_Input_set_bounds(Fl_Value_Input *, double a, double b); double Fl_Value_Input_minimum(Fl_Value_Input *); void Fl_Value_Input_set_minimum(Fl_Value_Input *, double a); double Fl_Value_Input_maximum(Fl_Value_Input *); void Fl_Value_Input_set_maximum(Fl_Value_Input *, double a); void Fl_Value_Input_set_range(Fl_Value_Input *, double a, double b); void Fl_Value_Input_set_step(Fl_Value_Input *, double a, int b); double Fl_Value_Input_step(Fl_Value_Input *); void Fl_Value_Input_set_precision(Fl_Value_Input *, int digits); double Fl_Value_Input_value(Fl_Value_Input *); int Fl_Value_Input_set_value(Fl_Value_Input *, double); int Fl_Value_Input_format(Fl_Value_Input *, char *); double Fl_Value_Input_round(Fl_Value_Input *, double); double Fl_Value_Input_clamp(Fl_Value_Input *, double); double Fl_Value_Input_increment(Fl_Value_Input *, double, int);

typedef struct Fl_Value_Output Fl_Value_Output; Fl_Value_Output *Fl_Value_Output_new( int x, int y, int width, int height, const char *title ); int Fl_Value_Output_x(Fl_Value_Output *); int Fl_Value_Output_y(Fl_Value_Output *); int Fl_Value_Output_width(Fl_Value_Output *); int Fl_Value_Output_height(Fl_Value_Output *); const char *Fl_Value_Output_label(Fl_Value_Output *); void Fl_Value_Output_set_label(Fl_Value_Output *, const char *title); void Fl_Value_Output_redraw(Fl_Value_Output *); void Fl_Value_Output_show(Fl_Value_Output *); void Fl_Value_Output_hide(Fl_Value_Output *); void Fl_Value_Output_activate(Fl_Value_Output *); void Fl_Value_Output_deactivate(Fl_Value_Output *); void Fl_Value_Output_redraw_label(Fl_Value_Output *); void Fl_Value_Output_resize(Fl_Value_Output *, int x, int y, int width, int height); void Fl_Value_Output_widget_resize( Fl_Value_Output *, int x, int y, int width, int height ); const char *Fl_Value_Output_tooltip(Fl_Value_Output *); void Fl_Value_Output_set_tooltip(Fl_Value_Output *, const char *txt); int Fl_Value_Output_get_type(Fl_Value_Output *); void Fl_Value_Output_set_type(Fl_Value_Output *, int typ); unsigned int Fl_Value_Output_color(Fl_Value_Output *); void Fl_Value_Output_set_color(Fl_Value_Output *, unsigned int color); void Fl_Value_Output_measure_label(const Fl_Value_Output *, int *, int *); unsigned int Fl_Value_Output_label_color(Fl_Value_Output *); void Fl_Value_Output_set_label_color(Fl_Value_Output *, unsigned int color); int Fl_Value_Output_label_font(Fl_Value_Output *); void Fl_Value_Output_set_label_font(Fl_Value_Output *, int font); int Fl_Value_Output_label_size(Fl_Value_Output *); void Fl_Value_Output_set_label_size(Fl_Value_Output *, int sz); int Fl_Value_Output_label_type(Fl_Value_Output *); void Fl_Value_Output_set_label_type(Fl_Value_Output *, int typ); int Fl_Value_Output_box(Fl_Value_Output *); void Fl_Value_Output_set_box(Fl_Value_Output *, int typ); int Fl_Value_Output_changed(Fl_Value_Output *); void Fl_Value_Output_set_changed(Fl_Value_Output *); void Fl_Value_Output_clear_changed(Fl_Value_Output *); int Fl_Value_Output_align(Fl_Value_Output *); void Fl_Value_Output_set_align(Fl_Value_Output *, int typ); void Fl_Value_Output_delete(Fl_Value_Output *); void Fl_Value_Output_set_image(Fl_Value_Output *, void *); void Fl_Value_Output_handle( Fl_Value_Output *self, custom_handler_callback cb, void *data ); int Fl_Value_Output_handle_event(Fl_Value_Output *self, int event); void Fl_Value_Output_draw(Fl_Value_Output *self, custom_draw_callback cb, void *data); void Fl_Value_Output_resize_callback( Fl_Value_Output *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Value_Output_set_when(Fl_Value_Output *, int); int Fl_Value_Output_when(const Fl_Value_Output *); const void *Fl_Value_Output_image(const Fl_Value_Output *); void *Fl_Value_Output_parent(const Fl_Value_Output *self); unsigned int Fl_Value_Output_selection_color(Fl_Value_Output *); void Fl_Value_Output_set_selection_color(Fl_Value_Output *, unsigned int color); void Fl_Value_Output_do_callback(Fl_Value_Output *); int Fl_Value_Output_inside(const Fl_Value_Output *self, void *); void *Fl_Value_Output_window(const Fl_Value_Output *); void *Fl_Value_Output_top_window(const Fl_Value_Output *); int Fl_Value_Output_takes_events(const Fl_Value_Output *); void *Fl_Value_Output_user_data(const Fl_Value_Output *); int Fl_Value_Output_take_focus(Fl_Value_Output *self); void Fl_Value_Output_set_visible_focus(Fl_Value_Output *self); void Fl_Value_Output_clear_visible_focus(Fl_Value_Output *self); void Fl_Value_Output_visible_focus(Fl_Value_Output *self, int v); unsigned int Fl_Value_Output_has_visible_focus(Fl_Value_Output *self); void Fl_Value_Output_set_user_data(Fl_Value_Output *, void *data); void *Fl_Value_Output_draw_data(const Fl_Value_Output *self); void *Fl_Value_Output_handle_data(const Fl_Value_Output *self); void Fl_Value_Output_set_draw_data(Fl_Value_Output *self, void *data); void Fl_Value_Output_set_handle_data(Fl_Value_Output *self, void *data); unsigned char Fl_Value_Output_damage(const Fl_Value_Output *self); void Fl_Value_Output_set_damage(Fl_Value_Output *self, unsigned char flag); void Fl_Value_Output_set_damage_area( Fl_Value_Output *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Value_Output_clear_damage(Fl_Value_Output *self); void *Fl_Value_Output_as_window(Fl_Value_Output *self); void *Fl_Value_Output_as_group(Fl_Value_Output *self); void Fl_Value_Output_set_deimage(Fl_Value_Output *, void *); const void *Fl_Value_Output_deimage(const Fl_Value_Output *); void Fl_Value_Output_set_callback(Fl_Value_Output *, Fl_Callback *, void *); int Fl_Value_Output_visible(const Fl_Value_Output *self); int Fl_Value_Output_visible_r(const Fl_Value_Output *self); unsigned int Fl_Value_Output_active(const Fl_Value_Output *self); int Fl_Value_Output_active_r(const Fl_Value_Output *self); Fl_Callback *Fl_Value_Output_callback(const Fl_Value_Output *self); void Fl_Value_Output_set_deletion_callback( Fl_Value_Output *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Value_Output *Fl_Value_Output_from_dyn_ptr(Fl_Widget *ptr); Fl_Value_Output *Fl_Value_Output_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Value_Output_super_draw(Fl_Widget *ptr, int flag); void Fl_Value_Output_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Value_Output_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Value_Output_set_text_color(Fl_Value_Output *self, unsigned int c);

unsigned int Fl_Value_Output_text_color(Fl_Value_Output *self);

void Fl_Value_Output_set_text_font(Fl_Value_Output *self, int f);

int Fl_Value_Output_text_font(Fl_Value_Output *self);

void Fl_Value_Output_set_text_size(Fl_Value_Output *self, int s);

int Fl_Value_Output_text_size(Fl_Value_Output *self);

void Fl_Value_Output_set_bounds(Fl_Value_Output *, double a, double b); double Fl_Value_Output_minimum(Fl_Value_Output *); void Fl_Value_Output_set_minimum(Fl_Value_Output *, double a); double Fl_Value_Output_maximum(Fl_Value_Output *); void Fl_Value_Output_set_maximum(Fl_Value_Output *, double a); void Fl_Value_Output_set_range(Fl_Value_Output *, double a, double b); void Fl_Value_Output_set_step(Fl_Value_Output *, double a, int b); double Fl_Value_Output_step(Fl_Value_Output *); void Fl_Value_Output_set_precision(Fl_Value_Output *, int digits); double Fl_Value_Output_value(Fl_Value_Output *); int Fl_Value_Output_set_value(Fl_Value_Output *, double); int Fl_Value_Output_format(Fl_Value_Output *, char *); double Fl_Value_Output_round(Fl_Value_Output *, double); double Fl_Value_Output_clamp(Fl_Value_Output *, double); double Fl_Value_Output_increment(Fl_Value_Output *, double, int);

typedef struct Fl_Fill_Slider Fl_Fill_Slider; Fl_Fill_Slider *Fl_Fill_Slider_new( int x, int y, int width, int height, const char *title ); int Fl_Fill_Slider_x(Fl_Fill_Slider *); int Fl_Fill_Slider_y(Fl_Fill_Slider *); int Fl_Fill_Slider_width(Fl_Fill_Slider *); int Fl_Fill_Slider_height(Fl_Fill_Slider *); const char *Fl_Fill_Slider_label(Fl_Fill_Slider *); void Fl_Fill_Slider_set_label(Fl_Fill_Slider *, const char *title); void Fl_Fill_Slider_redraw(Fl_Fill_Slider *); void Fl_Fill_Slider_show(Fl_Fill_Slider *); void Fl_Fill_Slider_hide(Fl_Fill_Slider *); void Fl_Fill_Slider_activate(Fl_Fill_Slider *); void Fl_Fill_Slider_deactivate(Fl_Fill_Slider *); void Fl_Fill_Slider_redraw_label(Fl_Fill_Slider *); void Fl_Fill_Slider_resize(Fl_Fill_Slider *, int x, int y, int width, int height); void Fl_Fill_Slider_widget_resize( Fl_Fill_Slider *, int x, int y, int width, int height ); const char *Fl_Fill_Slider_tooltip(Fl_Fill_Slider *); void Fl_Fill_Slider_set_tooltip(Fl_Fill_Slider *, const char *txt); int Fl_Fill_Slider_get_type(Fl_Fill_Slider *); void Fl_Fill_Slider_set_type(Fl_Fill_Slider *, int typ); unsigned int Fl_Fill_Slider_color(Fl_Fill_Slider *); void Fl_Fill_Slider_set_color(Fl_Fill_Slider *, unsigned int color); void Fl_Fill_Slider_measure_label(const Fl_Fill_Slider *, int *, int *); unsigned int Fl_Fill_Slider_label_color(Fl_Fill_Slider *); void Fl_Fill_Slider_set_label_color(Fl_Fill_Slider *, unsigned int color); int Fl_Fill_Slider_label_font(Fl_Fill_Slider *); void Fl_Fill_Slider_set_label_font(Fl_Fill_Slider *, int font); int Fl_Fill_Slider_label_size(Fl_Fill_Slider *); void Fl_Fill_Slider_set_label_size(Fl_Fill_Slider *, int sz); int Fl_Fill_Slider_label_type(Fl_Fill_Slider *); void Fl_Fill_Slider_set_label_type(Fl_Fill_Slider *, int typ); int Fl_Fill_Slider_box(Fl_Fill_Slider *); void Fl_Fill_Slider_set_box(Fl_Fill_Slider *, int typ); int Fl_Fill_Slider_changed(Fl_Fill_Slider *); void Fl_Fill_Slider_set_changed(Fl_Fill_Slider *); void Fl_Fill_Slider_clear_changed(Fl_Fill_Slider *); int Fl_Fill_Slider_align(Fl_Fill_Slider *); void Fl_Fill_Slider_set_align(Fl_Fill_Slider *, int typ); void Fl_Fill_Slider_delete(Fl_Fill_Slider *); void Fl_Fill_Slider_set_image(Fl_Fill_Slider *, void *); void Fl_Fill_Slider_handle( Fl_Fill_Slider *self, custom_handler_callback cb, void *data ); int Fl_Fill_Slider_handle_event(Fl_Fill_Slider *self, int event); void Fl_Fill_Slider_draw(Fl_Fill_Slider *self, custom_draw_callback cb, void *data); void Fl_Fill_Slider_resize_callback( Fl_Fill_Slider *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Fill_Slider_set_when(Fl_Fill_Slider *, int); int Fl_Fill_Slider_when(const Fl_Fill_Slider *); const void *Fl_Fill_Slider_image(const Fl_Fill_Slider *); void *Fl_Fill_Slider_parent(const Fl_Fill_Slider *self); unsigned int Fl_Fill_Slider_selection_color(Fl_Fill_Slider *); void Fl_Fill_Slider_set_selection_color(Fl_Fill_Slider *, unsigned int color); void Fl_Fill_Slider_do_callback(Fl_Fill_Slider *); int Fl_Fill_Slider_inside(const Fl_Fill_Slider *self, void *); void *Fl_Fill_Slider_window(const Fl_Fill_Slider *); void *Fl_Fill_Slider_top_window(const Fl_Fill_Slider *); int Fl_Fill_Slider_takes_events(const Fl_Fill_Slider *); void *Fl_Fill_Slider_user_data(const Fl_Fill_Slider *); int Fl_Fill_Slider_take_focus(Fl_Fill_Slider *self); void Fl_Fill_Slider_set_visible_focus(Fl_Fill_Slider *self); void Fl_Fill_Slider_clear_visible_focus(Fl_Fill_Slider *self); void Fl_Fill_Slider_visible_focus(Fl_Fill_Slider *self, int v); unsigned int Fl_Fill_Slider_has_visible_focus(Fl_Fill_Slider *self); void Fl_Fill_Slider_set_user_data(Fl_Fill_Slider *, void *data); void *Fl_Fill_Slider_draw_data(const Fl_Fill_Slider *self); void *Fl_Fill_Slider_handle_data(const Fl_Fill_Slider *self); void Fl_Fill_Slider_set_draw_data(Fl_Fill_Slider *self, void *data); void Fl_Fill_Slider_set_handle_data(Fl_Fill_Slider *self, void *data); unsigned char Fl_Fill_Slider_damage(const Fl_Fill_Slider *self); void Fl_Fill_Slider_set_damage(Fl_Fill_Slider *self, unsigned char flag); void Fl_Fill_Slider_set_damage_area( Fl_Fill_Slider *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Fill_Slider_clear_damage(Fl_Fill_Slider *self); void *Fl_Fill_Slider_as_window(Fl_Fill_Slider *self); void *Fl_Fill_Slider_as_group(Fl_Fill_Slider *self); void Fl_Fill_Slider_set_deimage(Fl_Fill_Slider *, void *); const void *Fl_Fill_Slider_deimage(const Fl_Fill_Slider *); void Fl_Fill_Slider_set_callback(Fl_Fill_Slider *, Fl_Callback *, void *); int Fl_Fill_Slider_visible(const Fl_Fill_Slider *self); int Fl_Fill_Slider_visible_r(const Fl_Fill_Slider *self); unsigned int Fl_Fill_Slider_active(const Fl_Fill_Slider *self); int Fl_Fill_Slider_active_r(const Fl_Fill_Slider *self); Fl_Callback *Fl_Fill_Slider_callback(const Fl_Fill_Slider *self); void Fl_Fill_Slider_set_deletion_callback( Fl_Fill_Slider *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Fill_Slider *Fl_Fill_Slider_from_dyn_ptr(Fl_Widget *ptr); Fl_Fill_Slider *Fl_Fill_Slider_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Fill_Slider_super_draw(Fl_Widget *ptr, int flag); void Fl_Fill_Slider_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Fill_Slider_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Fill_Slider_set_bounds(Fl_Fill_Slider *, double a, double b); double Fl_Fill_Slider_minimum(Fl_Fill_Slider *); void Fl_Fill_Slider_set_minimum(Fl_Fill_Slider *, double a); double Fl_Fill_Slider_maximum(Fl_Fill_Slider *); void Fl_Fill_Slider_set_maximum(Fl_Fill_Slider *, double a); void Fl_Fill_Slider_set_range(Fl_Fill_Slider *, double a, double b); void Fl_Fill_Slider_set_step(Fl_Fill_Slider *, double a, int b); double Fl_Fill_Slider_step(Fl_Fill_Slider *); void Fl_Fill_Slider_set_precision(Fl_Fill_Slider *, int digits); double Fl_Fill_Slider_value(Fl_Fill_Slider *); int Fl_Fill_Slider_set_value(Fl_Fill_Slider *, double); int Fl_Fill_Slider_format(Fl_Fill_Slider *, char *); double Fl_Fill_Slider_round(Fl_Fill_Slider *, double); double Fl_Fill_Slider_clamp(Fl_Fill_Slider *, double); double Fl_Fill_Slider_increment(Fl_Fill_Slider *, double, int);

typedef struct Fl_Fill_Dial Fl_Fill_Dial; Fl_Fill_Dial *Fl_Fill_Dial_new( int x, int y, int width, int height, const char *title ); int Fl_Fill_Dial_x(Fl_Fill_Dial *); int Fl_Fill_Dial_y(Fl_Fill_Dial *); int Fl_Fill_Dial_width(Fl_Fill_Dial *); int Fl_Fill_Dial_height(Fl_Fill_Dial *); const char *Fl_Fill_Dial_label(Fl_Fill_Dial *); void Fl_Fill_Dial_set_label(Fl_Fill_Dial *, const char *title); void Fl_Fill_Dial_redraw(Fl_Fill_Dial *); void Fl_Fill_Dial_show(Fl_Fill_Dial *); void Fl_Fill_Dial_hide(Fl_Fill_Dial *); void Fl_Fill_Dial_activate(Fl_Fill_Dial *); void Fl_Fill_Dial_deactivate(Fl_Fill_Dial *); void Fl_Fill_Dial_redraw_label(Fl_Fill_Dial *); void Fl_Fill_Dial_resize(Fl_Fill_Dial *, int x, int y, int width, int height); void Fl_Fill_Dial_widget_resize( Fl_Fill_Dial *, int x, int y, int width, int height ); const char *Fl_Fill_Dial_tooltip(Fl_Fill_Dial *); void Fl_Fill_Dial_set_tooltip(Fl_Fill_Dial *, const char *txt); int Fl_Fill_Dial_get_type(Fl_Fill_Dial *); void Fl_Fill_Dial_set_type(Fl_Fill_Dial *, int typ); unsigned int Fl_Fill_Dial_color(Fl_Fill_Dial *); void Fl_Fill_Dial_set_color(Fl_Fill_Dial *, unsigned int color); void Fl_Fill_Dial_measure_label(const Fl_Fill_Dial *, int *, int *); unsigned int Fl_Fill_Dial_label_color(Fl_Fill_Dial *); void Fl_Fill_Dial_set_label_color(Fl_Fill_Dial *, unsigned int color); int Fl_Fill_Dial_label_font(Fl_Fill_Dial *); void Fl_Fill_Dial_set_label_font(Fl_Fill_Dial *, int font); int Fl_Fill_Dial_label_size(Fl_Fill_Dial *); void Fl_Fill_Dial_set_label_size(Fl_Fill_Dial *, int sz); int Fl_Fill_Dial_label_type(Fl_Fill_Dial *); void Fl_Fill_Dial_set_label_type(Fl_Fill_Dial *, int typ); int Fl_Fill_Dial_box(Fl_Fill_Dial *); void Fl_Fill_Dial_set_box(Fl_Fill_Dial *, int typ); int Fl_Fill_Dial_changed(Fl_Fill_Dial *); void Fl_Fill_Dial_set_changed(Fl_Fill_Dial *); void Fl_Fill_Dial_clear_changed(Fl_Fill_Dial *); int Fl_Fill_Dial_align(Fl_Fill_Dial *); void Fl_Fill_Dial_set_align(Fl_Fill_Dial *, int typ); void Fl_Fill_Dial_delete(Fl_Fill_Dial *); void Fl_Fill_Dial_set_image(Fl_Fill_Dial *, void *); void Fl_Fill_Dial_handle( Fl_Fill_Dial *self, custom_handler_callback cb, void *data ); int Fl_Fill_Dial_handle_event(Fl_Fill_Dial *self, int event); void Fl_Fill_Dial_draw(Fl_Fill_Dial *self, custom_draw_callback cb, void *data); void Fl_Fill_Dial_resize_callback( Fl_Fill_Dial *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Fill_Dial_set_when(Fl_Fill_Dial *, int); int Fl_Fill_Dial_when(const Fl_Fill_Dial *); const void *Fl_Fill_Dial_image(const Fl_Fill_Dial *); void *Fl_Fill_Dial_parent(const Fl_Fill_Dial *self); unsigned int Fl_Fill_Dial_selection_color(Fl_Fill_Dial *); void Fl_Fill_Dial_set_selection_color(Fl_Fill_Dial *, unsigned int color); void Fl_Fill_Dial_do_callback(Fl_Fill_Dial *); int Fl_Fill_Dial_inside(const Fl_Fill_Dial *self, void *); void *Fl_Fill_Dial_window(const Fl_Fill_Dial *); void *Fl_Fill_Dial_top_window(const Fl_Fill_Dial *); int Fl_Fill_Dial_takes_events(const Fl_Fill_Dial *); void *Fl_Fill_Dial_user_data(const Fl_Fill_Dial *); int Fl_Fill_Dial_take_focus(Fl_Fill_Dial *self); void Fl_Fill_Dial_set_visible_focus(Fl_Fill_Dial *self); void Fl_Fill_Dial_clear_visible_focus(Fl_Fill_Dial *self); void Fl_Fill_Dial_visible_focus(Fl_Fill_Dial *self, int v); unsigned int Fl_Fill_Dial_has_visible_focus(Fl_Fill_Dial *self); void Fl_Fill_Dial_set_user_data(Fl_Fill_Dial *, void *data); void *Fl_Fill_Dial_draw_data(const Fl_Fill_Dial *self); void *Fl_Fill_Dial_handle_data(const Fl_Fill_Dial *self); void Fl_Fill_Dial_set_draw_data(Fl_Fill_Dial *self, void *data); void Fl_Fill_Dial_set_handle_data(Fl_Fill_Dial *self, void *data); unsigned char Fl_Fill_Dial_damage(const Fl_Fill_Dial *self); void Fl_Fill_Dial_set_damage(Fl_Fill_Dial *self, unsigned char flag); void Fl_Fill_Dial_set_damage_area( Fl_Fill_Dial *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Fill_Dial_clear_damage(Fl_Fill_Dial *self); void *Fl_Fill_Dial_as_window(Fl_Fill_Dial *self); void *Fl_Fill_Dial_as_group(Fl_Fill_Dial *self); void Fl_Fill_Dial_set_deimage(Fl_Fill_Dial *, void *); const void *Fl_Fill_Dial_deimage(const Fl_Fill_Dial *); void Fl_Fill_Dial_set_callback(Fl_Fill_Dial *, Fl_Callback *, void *); int Fl_Fill_Dial_visible(const Fl_Fill_Dial *self); int Fl_Fill_Dial_visible_r(const Fl_Fill_Dial *self); unsigned int Fl_Fill_Dial_active(const Fl_Fill_Dial *self); int Fl_Fill_Dial_active_r(const Fl_Fill_Dial *self); Fl_Callback *Fl_Fill_Dial_callback(const Fl_Fill_Dial *self); void Fl_Fill_Dial_set_deletion_callback( Fl_Fill_Dial *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Fill_Dial *Fl_Fill_Dial_from_dyn_ptr(Fl_Widget *ptr); Fl_Fill_Dial *Fl_Fill_Dial_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Fill_Dial_super_draw(Fl_Widget *ptr, int flag); void Fl_Fill_Dial_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Fill_Dial_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Fill_Dial_set_bounds(Fl_Fill_Dial *, double a, double b); double Fl_Fill_Dial_minimum(Fl_Fill_Dial *); void Fl_Fill_Dial_set_minimum(Fl_Fill_Dial *, double a); double Fl_Fill_Dial_maximum(Fl_Fill_Dial *); void Fl_Fill_Dial_set_maximum(Fl_Fill_Dial *, double a); void Fl_Fill_Dial_set_range(Fl_Fill_Dial *, double a, double b); void Fl_Fill_Dial_set_step(Fl_Fill_Dial *, double a, int b); double Fl_Fill_Dial_step(Fl_Fill_Dial *); void Fl_Fill_Dial_set_precision(Fl_Fill_Dial *, int digits); double Fl_Fill_Dial_value(Fl_Fill_Dial *); int Fl_Fill_Dial_set_value(Fl_Fill_Dial *, double); int Fl_Fill_Dial_format(Fl_Fill_Dial *, char *); double Fl_Fill_Dial_round(Fl_Fill_Dial *, double); double Fl_Fill_Dial_clamp(Fl_Fill_Dial *, double); double Fl_Fill_Dial_increment(Fl_Fill_Dial *, double, int);

typedef struct Fl_Hor_Slider Fl_Hor_Slider; Fl_Hor_Slider *Fl_Hor_Slider_new( int x, int y, int width, int height, const char *title ); int Fl_Hor_Slider_x(Fl_Hor_Slider *); int Fl_Hor_Slider_y(Fl_Hor_Slider *); int Fl_Hor_Slider_width(Fl_Hor_Slider *); int Fl_Hor_Slider_height(Fl_Hor_Slider *); const char *Fl_Hor_Slider_label(Fl_Hor_Slider *); void Fl_Hor_Slider_set_label(Fl_Hor_Slider *, const char *title); void Fl_Hor_Slider_redraw(Fl_Hor_Slider *); void Fl_Hor_Slider_show(Fl_Hor_Slider *); void Fl_Hor_Slider_hide(Fl_Hor_Slider *); void Fl_Hor_Slider_activate(Fl_Hor_Slider *); void Fl_Hor_Slider_deactivate(Fl_Hor_Slider *); void Fl_Hor_Slider_redraw_label(Fl_Hor_Slider *); void Fl_Hor_Slider_resize(Fl_Hor_Slider *, int x, int y, int width, int height); void Fl_Hor_Slider_widget_resize( Fl_Hor_Slider *, int x, int y, int width, int height ); const char *Fl_Hor_Slider_tooltip(Fl_Hor_Slider *); void Fl_Hor_Slider_set_tooltip(Fl_Hor_Slider *, const char *txt); int Fl_Hor_Slider_get_type(Fl_Hor_Slider *); void Fl_Hor_Slider_set_type(Fl_Hor_Slider *, int typ); unsigned int Fl_Hor_Slider_color(Fl_Hor_Slider *); void Fl_Hor_Slider_set_color(Fl_Hor_Slider *, unsigned int color); void Fl_Hor_Slider_measure_label(const Fl_Hor_Slider *, int *, int *); unsigned int Fl_Hor_Slider_label_color(Fl_Hor_Slider *); void Fl_Hor_Slider_set_label_color(Fl_Hor_Slider *, unsigned int color); int Fl_Hor_Slider_label_font(Fl_Hor_Slider *); void Fl_Hor_Slider_set_label_font(Fl_Hor_Slider *, int font); int Fl_Hor_Slider_label_size(Fl_Hor_Slider *); void Fl_Hor_Slider_set_label_size(Fl_Hor_Slider *, int sz); int Fl_Hor_Slider_label_type(Fl_Hor_Slider *); void Fl_Hor_Slider_set_label_type(Fl_Hor_Slider *, int typ); int Fl_Hor_Slider_box(Fl_Hor_Slider *); void Fl_Hor_Slider_set_box(Fl_Hor_Slider *, int typ); int Fl_Hor_Slider_changed(Fl_Hor_Slider *); void Fl_Hor_Slider_set_changed(Fl_Hor_Slider *); void Fl_Hor_Slider_clear_changed(Fl_Hor_Slider *); int Fl_Hor_Slider_align(Fl_Hor_Slider *); void Fl_Hor_Slider_set_align(Fl_Hor_Slider *, int typ); void Fl_Hor_Slider_delete(Fl_Hor_Slider *); void Fl_Hor_Slider_set_image(Fl_Hor_Slider *, void *); void Fl_Hor_Slider_handle( Fl_Hor_Slider *self, custom_handler_callback cb, void *data ); int Fl_Hor_Slider_handle_event(Fl_Hor_Slider *self, int event); void Fl_Hor_Slider_draw(Fl_Hor_Slider *self, custom_draw_callback cb, void *data); void Fl_Hor_Slider_resize_callback( Fl_Hor_Slider *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Hor_Slider_set_when(Fl_Hor_Slider *, int); int Fl_Hor_Slider_when(const Fl_Hor_Slider *); const void *Fl_Hor_Slider_image(const Fl_Hor_Slider *); void *Fl_Hor_Slider_parent(const Fl_Hor_Slider *self); unsigned int Fl_Hor_Slider_selection_color(Fl_Hor_Slider *); void Fl_Hor_Slider_set_selection_color(Fl_Hor_Slider *, unsigned int color); void Fl_Hor_Slider_do_callback(Fl_Hor_Slider *); int Fl_Hor_Slider_inside(const Fl_Hor_Slider *self, void *); void *Fl_Hor_Slider_window(const Fl_Hor_Slider *); void *Fl_Hor_Slider_top_window(const Fl_Hor_Slider *); int Fl_Hor_Slider_takes_events(const Fl_Hor_Slider *); void *Fl_Hor_Slider_user_data(const Fl_Hor_Slider *); int Fl_Hor_Slider_take_focus(Fl_Hor_Slider *self); void Fl_Hor_Slider_set_visible_focus(Fl_Hor_Slider *self); void Fl_Hor_Slider_clear_visible_focus(Fl_Hor_Slider *self); void Fl_Hor_Slider_visible_focus(Fl_Hor_Slider *self, int v); unsigned int Fl_Hor_Slider_has_visible_focus(Fl_Hor_Slider *self); void Fl_Hor_Slider_set_user_data(Fl_Hor_Slider *, void *data); void *Fl_Hor_Slider_draw_data(const Fl_Hor_Slider *self); void *Fl_Hor_Slider_handle_data(const Fl_Hor_Slider *self); void Fl_Hor_Slider_set_draw_data(Fl_Hor_Slider *self, void *data); void Fl_Hor_Slider_set_handle_data(Fl_Hor_Slider *self, void *data); unsigned char Fl_Hor_Slider_damage(const Fl_Hor_Slider *self); void Fl_Hor_Slider_set_damage(Fl_Hor_Slider *self, unsigned char flag); void Fl_Hor_Slider_set_damage_area( Fl_Hor_Slider *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Hor_Slider_clear_damage(Fl_Hor_Slider *self); void *Fl_Hor_Slider_as_window(Fl_Hor_Slider *self); void *Fl_Hor_Slider_as_group(Fl_Hor_Slider *self); void Fl_Hor_Slider_set_deimage(Fl_Hor_Slider *, void *); const void *Fl_Hor_Slider_deimage(const Fl_Hor_Slider *); void Fl_Hor_Slider_set_callback(Fl_Hor_Slider *, Fl_Callback *, void *); int Fl_Hor_Slider_visible(const Fl_Hor_Slider *self); int Fl_Hor_Slider_visible_r(const Fl_Hor_Slider *self); unsigned int Fl_Hor_Slider_active(const Fl_Hor_Slider *self); int Fl_Hor_Slider_active_r(const Fl_Hor_Slider *self); Fl_Callback *Fl_Hor_Slider_callback(const Fl_Hor_Slider *self); void Fl_Hor_Slider_set_deletion_callback( Fl_Hor_Slider *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Hor_Slider *Fl_Hor_Slider_from_dyn_ptr(Fl_Widget *ptr); Fl_Hor_Slider *Fl_Hor_Slider_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Hor_Slider_super_draw(Fl_Widget *ptr, int flag); void Fl_Hor_Slider_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Hor_Slider_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Hor_Slider_set_bounds(Fl_Hor_Slider *, double a, double b); double Fl_Hor_Slider_minimum(Fl_Hor_Slider *); void Fl_Hor_Slider_set_minimum(Fl_Hor_Slider *, double a); double Fl_Hor_Slider_maximum(Fl_Hor_Slider *); void Fl_Hor_Slider_set_maximum(Fl_Hor_Slider *, double a); void Fl_Hor_Slider_set_range(Fl_Hor_Slider *, double a, double b); void Fl_Hor_Slider_set_step(Fl_Hor_Slider *, double a, int b); double Fl_Hor_Slider_step(Fl_Hor_Slider *); void Fl_Hor_Slider_set_precision(Fl_Hor_Slider *, int digits); double Fl_Hor_Slider_value(Fl_Hor_Slider *); int Fl_Hor_Slider_set_value(Fl_Hor_Slider *, double); int Fl_Hor_Slider_format(Fl_Hor_Slider *, char *); double Fl_Hor_Slider_round(Fl_Hor_Slider *, double); double Fl_Hor_Slider_clamp(Fl_Hor_Slider *, double); double Fl_Hor_Slider_increment(Fl_Hor_Slider *, double, int);

typedef struct Fl_Hor_Fill_Slider Fl_Hor_Fill_Slider; Fl_Hor_Fill_Slider *Fl_Hor_Fill_Slider_new( int x, int y, int width, int height, const char *title ); int Fl_Hor_Fill_Slider_x(Fl_Hor_Fill_Slider *); int Fl_Hor_Fill_Slider_y(Fl_Hor_Fill_Slider *); int Fl_Hor_Fill_Slider_width(Fl_Hor_Fill_Slider *); int Fl_Hor_Fill_Slider_height(Fl_Hor_Fill_Slider *); const char *Fl_Hor_Fill_Slider_label(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_label(Fl_Hor_Fill_Slider *, const char *title); void Fl_Hor_Fill_Slider_redraw(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_show(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_hide(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_activate(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_deactivate(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_redraw_label(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_resize(Fl_Hor_Fill_Slider *, int x, int y, int width, int height); void Fl_Hor_Fill_Slider_widget_resize( Fl_Hor_Fill_Slider *, int x, int y, int width, int height ); const char *Fl_Hor_Fill_Slider_tooltip(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_tooltip(Fl_Hor_Fill_Slider *, const char *txt); int Fl_Hor_Fill_Slider_get_type(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_type(Fl_Hor_Fill_Slider *, int typ); unsigned int Fl_Hor_Fill_Slider_color(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_color(Fl_Hor_Fill_Slider *, unsigned int color); void Fl_Hor_Fill_Slider_measure_label(const Fl_Hor_Fill_Slider *, int *, int *); unsigned int Fl_Hor_Fill_Slider_label_color(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_label_color(Fl_Hor_Fill_Slider *, unsigned int color); int Fl_Hor_Fill_Slider_label_font(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_label_font(Fl_Hor_Fill_Slider *, int font); int Fl_Hor_Fill_Slider_label_size(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_label_size(Fl_Hor_Fill_Slider *, int sz); int Fl_Hor_Fill_Slider_label_type(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_label_type(Fl_Hor_Fill_Slider *, int typ); int Fl_Hor_Fill_Slider_box(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_box(Fl_Hor_Fill_Slider *, int typ); int Fl_Hor_Fill_Slider_changed(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_changed(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_clear_changed(Fl_Hor_Fill_Slider *); int Fl_Hor_Fill_Slider_align(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_align(Fl_Hor_Fill_Slider *, int typ); void Fl_Hor_Fill_Slider_delete(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_image(Fl_Hor_Fill_Slider *, void *); void Fl_Hor_Fill_Slider_handle( Fl_Hor_Fill_Slider *self, custom_handler_callback cb, void *data ); int Fl_Hor_Fill_Slider_handle_event(Fl_Hor_Fill_Slider *self, int event); void Fl_Hor_Fill_Slider_draw(Fl_Hor_Fill_Slider *self, custom_draw_callback cb, void *data); void Fl_Hor_Fill_Slider_resize_callback( Fl_Hor_Fill_Slider *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Hor_Fill_Slider_set_when(Fl_Hor_Fill_Slider *, int); int Fl_Hor_Fill_Slider_when(const Fl_Hor_Fill_Slider *); const void *Fl_Hor_Fill_Slider_image(const Fl_Hor_Fill_Slider *); void *Fl_Hor_Fill_Slider_parent(const Fl_Hor_Fill_Slider *self); unsigned int Fl_Hor_Fill_Slider_selection_color(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_selection_color(Fl_Hor_Fill_Slider *, unsigned int color); void Fl_Hor_Fill_Slider_do_callback(Fl_Hor_Fill_Slider *); int Fl_Hor_Fill_Slider_inside(const Fl_Hor_Fill_Slider *self, void *); void *Fl_Hor_Fill_Slider_window(const Fl_Hor_Fill_Slider *); void *Fl_Hor_Fill_Slider_top_window(const Fl_Hor_Fill_Slider *); int Fl_Hor_Fill_Slider_takes_events(const Fl_Hor_Fill_Slider *); void *Fl_Hor_Fill_Slider_user_data(const Fl_Hor_Fill_Slider *); int Fl_Hor_Fill_Slider_take_focus(Fl_Hor_Fill_Slider *self); void Fl_Hor_Fill_Slider_set_visible_focus(Fl_Hor_Fill_Slider *self); void Fl_Hor_Fill_Slider_clear_visible_focus(Fl_Hor_Fill_Slider *self); void Fl_Hor_Fill_Slider_visible_focus(Fl_Hor_Fill_Slider *self, int v); unsigned int Fl_Hor_Fill_Slider_has_visible_focus(Fl_Hor_Fill_Slider *self); void Fl_Hor_Fill_Slider_set_user_data(Fl_Hor_Fill_Slider *, void *data); void *Fl_Hor_Fill_Slider_draw_data(const Fl_Hor_Fill_Slider *self); void *Fl_Hor_Fill_Slider_handle_data(const Fl_Hor_Fill_Slider *self); void Fl_Hor_Fill_Slider_set_draw_data(Fl_Hor_Fill_Slider *self, void *data); void Fl_Hor_Fill_Slider_set_handle_data(Fl_Hor_Fill_Slider *self, void *data); unsigned char Fl_Hor_Fill_Slider_damage(const Fl_Hor_Fill_Slider *self); void Fl_Hor_Fill_Slider_set_damage(Fl_Hor_Fill_Slider *self, unsigned char flag); void Fl_Hor_Fill_Slider_set_damage_area( Fl_Hor_Fill_Slider *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Hor_Fill_Slider_clear_damage(Fl_Hor_Fill_Slider *self); void *Fl_Hor_Fill_Slider_as_window(Fl_Hor_Fill_Slider *self); void *Fl_Hor_Fill_Slider_as_group(Fl_Hor_Fill_Slider *self); void Fl_Hor_Fill_Slider_set_deimage(Fl_Hor_Fill_Slider *, void *); const void *Fl_Hor_Fill_Slider_deimage(const Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_callback(Fl_Hor_Fill_Slider *, Fl_Callback *, void *); int Fl_Hor_Fill_Slider_visible(const Fl_Hor_Fill_Slider *self); int Fl_Hor_Fill_Slider_visible_r(const Fl_Hor_Fill_Slider *self); unsigned int Fl_Hor_Fill_Slider_active(const Fl_Hor_Fill_Slider *self); int Fl_Hor_Fill_Slider_active_r(const Fl_Hor_Fill_Slider *self); Fl_Callback *Fl_Hor_Fill_Slider_callback(const Fl_Hor_Fill_Slider *self); void Fl_Hor_Fill_Slider_set_deletion_callback( Fl_Hor_Fill_Slider *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Hor_Fill_Slider *Fl_Hor_Fill_Slider_from_dyn_ptr(Fl_Widget *ptr); Fl_Hor_Fill_Slider *Fl_Hor_Fill_Slider_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Hor_Fill_Slider_super_draw(Fl_Widget *ptr, int flag); void Fl_Hor_Fill_Slider_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Hor_Fill_Slider_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Hor_Fill_Slider_set_bounds(Fl_Hor_Fill_Slider *, double a, double b); double Fl_Hor_Fill_Slider_minimum(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_minimum(Fl_Hor_Fill_Slider *, double a); double Fl_Hor_Fill_Slider_maximum(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_maximum(Fl_Hor_Fill_Slider *, double a); void Fl_Hor_Fill_Slider_set_range(Fl_Hor_Fill_Slider *, double a, double b); void Fl_Hor_Fill_Slider_set_step(Fl_Hor_Fill_Slider *, double a, int b); double Fl_Hor_Fill_Slider_step(Fl_Hor_Fill_Slider *); void Fl_Hor_Fill_Slider_set_precision(Fl_Hor_Fill_Slider *, int digits); double Fl_Hor_Fill_Slider_value(Fl_Hor_Fill_Slider *); int Fl_Hor_Fill_Slider_set_value(Fl_Hor_Fill_Slider *, double); int Fl_Hor_Fill_Slider_format(Fl_Hor_Fill_Slider *, char *); double Fl_Hor_Fill_Slider_round(Fl_Hor_Fill_Slider *, double); double Fl_Hor_Fill_Slider_clamp(Fl_Hor_Fill_Slider *, double); double Fl_Hor_Fill_Slider_increment(Fl_Hor_Fill_Slider *, double, int);

typedef struct Fl_Hor_Nice_Slider Fl_Hor_Nice_Slider; Fl_Hor_Nice_Slider *Fl_Hor_Nice_Slider_new( int x, int y, int width, int height, const char *title ); int Fl_Hor_Nice_Slider_x(Fl_Hor_Nice_Slider *); int Fl_Hor_Nice_Slider_y(Fl_Hor_Nice_Slider *); int Fl_Hor_Nice_Slider_width(Fl_Hor_Nice_Slider *); int Fl_Hor_Nice_Slider_height(Fl_Hor_Nice_Slider *); const char *Fl_Hor_Nice_Slider_label(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_label(Fl_Hor_Nice_Slider *, const char *title); void Fl_Hor_Nice_Slider_redraw(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_show(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_hide(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_activate(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_deactivate(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_redraw_label(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_resize(Fl_Hor_Nice_Slider *, int x, int y, int width, int height); void Fl_Hor_Nice_Slider_widget_resize( Fl_Hor_Nice_Slider *, int x, int y, int width, int height ); const char *Fl_Hor_Nice_Slider_tooltip(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_tooltip(Fl_Hor_Nice_Slider *, const char *txt); int Fl_Hor_Nice_Slider_get_type(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_type(Fl_Hor_Nice_Slider *, int typ); unsigned int Fl_Hor_Nice_Slider_color(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_color(Fl_Hor_Nice_Slider *, unsigned int color); void Fl_Hor_Nice_Slider_measure_label(const Fl_Hor_Nice_Slider *, int *, int *); unsigned int Fl_Hor_Nice_Slider_label_color(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_label_color(Fl_Hor_Nice_Slider *, unsigned int color); int Fl_Hor_Nice_Slider_label_font(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_label_font(Fl_Hor_Nice_Slider *, int font); int Fl_Hor_Nice_Slider_label_size(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_label_size(Fl_Hor_Nice_Slider *, int sz); int Fl_Hor_Nice_Slider_label_type(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_label_type(Fl_Hor_Nice_Slider *, int typ); int Fl_Hor_Nice_Slider_box(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_box(Fl_Hor_Nice_Slider *, int typ); int Fl_Hor_Nice_Slider_changed(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_changed(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_clear_changed(Fl_Hor_Nice_Slider *); int Fl_Hor_Nice_Slider_align(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_align(Fl_Hor_Nice_Slider *, int typ); void Fl_Hor_Nice_Slider_delete(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_image(Fl_Hor_Nice_Slider *, void *); void Fl_Hor_Nice_Slider_handle( Fl_Hor_Nice_Slider *self, custom_handler_callback cb, void *data ); int Fl_Hor_Nice_Slider_handle_event(Fl_Hor_Nice_Slider *self, int event); void Fl_Hor_Nice_Slider_draw(Fl_Hor_Nice_Slider *self, custom_draw_callback cb, void *data); void Fl_Hor_Nice_Slider_resize_callback( Fl_Hor_Nice_Slider *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Hor_Nice_Slider_set_when(Fl_Hor_Nice_Slider *, int); int Fl_Hor_Nice_Slider_when(const Fl_Hor_Nice_Slider *); const void *Fl_Hor_Nice_Slider_image(const Fl_Hor_Nice_Slider *); void *Fl_Hor_Nice_Slider_parent(const Fl_Hor_Nice_Slider *self); unsigned int Fl_Hor_Nice_Slider_selection_color(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_selection_color(Fl_Hor_Nice_Slider *, unsigned int color); void Fl_Hor_Nice_Slider_do_callback(Fl_Hor_Nice_Slider *); int Fl_Hor_Nice_Slider_inside(const Fl_Hor_Nice_Slider *self, void *); void *Fl_Hor_Nice_Slider_window(const Fl_Hor_Nice_Slider *); void *Fl_Hor_Nice_Slider_top_window(const Fl_Hor_Nice_Slider *); int Fl_Hor_Nice_Slider_takes_events(const Fl_Hor_Nice_Slider *); void *Fl_Hor_Nice_Slider_user_data(const Fl_Hor_Nice_Slider *); int Fl_Hor_Nice_Slider_take_focus(Fl_Hor_Nice_Slider *self); void Fl_Hor_Nice_Slider_set_visible_focus(Fl_Hor_Nice_Slider *self); void Fl_Hor_Nice_Slider_clear_visible_focus(Fl_Hor_Nice_Slider *self); void Fl_Hor_Nice_Slider_visible_focus(Fl_Hor_Nice_Slider *self, int v); unsigned int Fl_Hor_Nice_Slider_has_visible_focus(Fl_Hor_Nice_Slider *self); void Fl_Hor_Nice_Slider_set_user_data(Fl_Hor_Nice_Slider *, void *data); void *Fl_Hor_Nice_Slider_draw_data(const Fl_Hor_Nice_Slider *self); void *Fl_Hor_Nice_Slider_handle_data(const Fl_Hor_Nice_Slider *self); void Fl_Hor_Nice_Slider_set_draw_data(Fl_Hor_Nice_Slider *self, void *data); void Fl_Hor_Nice_Slider_set_handle_data(Fl_Hor_Nice_Slider *self, void *data); unsigned char Fl_Hor_Nice_Slider_damage(const Fl_Hor_Nice_Slider *self); void Fl_Hor_Nice_Slider_set_damage(Fl_Hor_Nice_Slider *self, unsigned char flag); void Fl_Hor_Nice_Slider_set_damage_area( Fl_Hor_Nice_Slider *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Hor_Nice_Slider_clear_damage(Fl_Hor_Nice_Slider *self); void *Fl_Hor_Nice_Slider_as_window(Fl_Hor_Nice_Slider *self); void *Fl_Hor_Nice_Slider_as_group(Fl_Hor_Nice_Slider *self); void Fl_Hor_Nice_Slider_set_deimage(Fl_Hor_Nice_Slider *, void *); const void *Fl_Hor_Nice_Slider_deimage(const Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_callback(Fl_Hor_Nice_Slider *, Fl_Callback *, void *); int Fl_Hor_Nice_Slider_visible(const Fl_Hor_Nice_Slider *self); int Fl_Hor_Nice_Slider_visible_r(const Fl_Hor_Nice_Slider *self); unsigned int Fl_Hor_Nice_Slider_active(const Fl_Hor_Nice_Slider *self); int Fl_Hor_Nice_Slider_active_r(const Fl_Hor_Nice_Slider *self); Fl_Callback *Fl_Hor_Nice_Slider_callback(const Fl_Hor_Nice_Slider *self); void Fl_Hor_Nice_Slider_set_deletion_callback( Fl_Hor_Nice_Slider *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Hor_Nice_Slider *Fl_Hor_Nice_Slider_from_dyn_ptr(Fl_Widget *ptr); Fl_Hor_Nice_Slider *Fl_Hor_Nice_Slider_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Hor_Nice_Slider_super_draw(Fl_Widget *ptr, int flag); void Fl_Hor_Nice_Slider_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Hor_Nice_Slider_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Hor_Nice_Slider_set_bounds(Fl_Hor_Nice_Slider *, double a, double b); double Fl_Hor_Nice_Slider_minimum(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_minimum(Fl_Hor_Nice_Slider *, double a); double Fl_Hor_Nice_Slider_maximum(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_maximum(Fl_Hor_Nice_Slider *, double a); void Fl_Hor_Nice_Slider_set_range(Fl_Hor_Nice_Slider *, double a, double b); void Fl_Hor_Nice_Slider_set_step(Fl_Hor_Nice_Slider *, double a, int b); double Fl_Hor_Nice_Slider_step(Fl_Hor_Nice_Slider *); void Fl_Hor_Nice_Slider_set_precision(Fl_Hor_Nice_Slider *, int digits); double Fl_Hor_Nice_Slider_value(Fl_Hor_Nice_Slider *); int Fl_Hor_Nice_Slider_set_value(Fl_Hor_Nice_Slider *, double); int Fl_Hor_Nice_Slider_format(Fl_Hor_Nice_Slider *, char *); double Fl_Hor_Nice_Slider_round(Fl_Hor_Nice_Slider *, double); double Fl_Hor_Nice_Slider_clamp(Fl_Hor_Nice_Slider *, double); double Fl_Hor_Nice_Slider_increment(Fl_Hor_Nice_Slider *, double, int);

typedef struct Fl_Hor_Value_Slider Fl_Hor_Value_Slider; Fl_Hor_Value_Slider *Fl_Hor_Value_Slider_new( int x, int y, int width, int height, const char *title ); int Fl_Hor_Value_Slider_x(Fl_Hor_Value_Slider *); int Fl_Hor_Value_Slider_y(Fl_Hor_Value_Slider *); int Fl_Hor_Value_Slider_width(Fl_Hor_Value_Slider *); int Fl_Hor_Value_Slider_height(Fl_Hor_Value_Slider *); const char *Fl_Hor_Value_Slider_label(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_label(Fl_Hor_Value_Slider *, const char *title); void Fl_Hor_Value_Slider_redraw(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_show(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_hide(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_activate(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_deactivate(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_redraw_label(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_resize(Fl_Hor_Value_Slider *, int x, int y, int width, int height); void Fl_Hor_Value_Slider_widget_resize( Fl_Hor_Value_Slider *, int x, int y, int width, int height ); const char *Fl_Hor_Value_Slider_tooltip(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_tooltip(Fl_Hor_Value_Slider *, const char *txt); int Fl_Hor_Value_Slider_get_type(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_type(Fl_Hor_Value_Slider *, int typ); unsigned int Fl_Hor_Value_Slider_color(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_color(Fl_Hor_Value_Slider *, unsigned int color); void Fl_Hor_Value_Slider_measure_label(const Fl_Hor_Value_Slider *, int *, int *); unsigned int Fl_Hor_Value_Slider_label_color(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_label_color(Fl_Hor_Value_Slider *, unsigned int color); int Fl_Hor_Value_Slider_label_font(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_label_font(Fl_Hor_Value_Slider *, int font); int Fl_Hor_Value_Slider_label_size(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_label_size(Fl_Hor_Value_Slider *, int sz); int Fl_Hor_Value_Slider_label_type(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_label_type(Fl_Hor_Value_Slider *, int typ); int Fl_Hor_Value_Slider_box(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_box(Fl_Hor_Value_Slider *, int typ); int Fl_Hor_Value_Slider_changed(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_changed(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_clear_changed(Fl_Hor_Value_Slider *); int Fl_Hor_Value_Slider_align(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_align(Fl_Hor_Value_Slider *, int typ); void Fl_Hor_Value_Slider_delete(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_image(Fl_Hor_Value_Slider *, void *); void Fl_Hor_Value_Slider_handle( Fl_Hor_Value_Slider *self, custom_handler_callback cb, void *data ); int Fl_Hor_Value_Slider_handle_event(Fl_Hor_Value_Slider *self, int event); void Fl_Hor_Value_Slider_draw(Fl_Hor_Value_Slider *self, custom_draw_callback cb, void *data); void Fl_Hor_Value_Slider_resize_callback( Fl_Hor_Value_Slider *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Hor_Value_Slider_set_when(Fl_Hor_Value_Slider *, int); int Fl_Hor_Value_Slider_when(const Fl_Hor_Value_Slider *); const void *Fl_Hor_Value_Slider_image(const Fl_Hor_Value_Slider *); void *Fl_Hor_Value_Slider_parent(const Fl_Hor_Value_Slider *self); unsigned int Fl_Hor_Value_Slider_selection_color(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_selection_color(Fl_Hor_Value_Slider *, unsigned int color); void Fl_Hor_Value_Slider_do_callback(Fl_Hor_Value_Slider *); int Fl_Hor_Value_Slider_inside(const Fl_Hor_Value_Slider *self, void *); void *Fl_Hor_Value_Slider_window(const Fl_Hor_Value_Slider *); void *Fl_Hor_Value_Slider_top_window(const Fl_Hor_Value_Slider *); int Fl_Hor_Value_Slider_takes_events(const Fl_Hor_Value_Slider *); void *Fl_Hor_Value_Slider_user_data(const Fl_Hor_Value_Slider *); int Fl_Hor_Value_Slider_take_focus(Fl_Hor_Value_Slider *self); void Fl_Hor_Value_Slider_set_visible_focus(Fl_Hor_Value_Slider *self); void Fl_Hor_Value_Slider_clear_visible_focus(Fl_Hor_Value_Slider *self); void Fl_Hor_Value_Slider_visible_focus(Fl_Hor_Value_Slider *self, int v); unsigned int Fl_Hor_Value_Slider_has_visible_focus(Fl_Hor_Value_Slider *self); void Fl_Hor_Value_Slider_set_user_data(Fl_Hor_Value_Slider *, void *data); void *Fl_Hor_Value_Slider_draw_data(const Fl_Hor_Value_Slider *self); void *Fl_Hor_Value_Slider_handle_data(const Fl_Hor_Value_Slider *self); void Fl_Hor_Value_Slider_set_draw_data(Fl_Hor_Value_Slider *self, void *data); void Fl_Hor_Value_Slider_set_handle_data(Fl_Hor_Value_Slider *self, void *data); unsigned char Fl_Hor_Value_Slider_damage(const Fl_Hor_Value_Slider *self); void Fl_Hor_Value_Slider_set_damage(Fl_Hor_Value_Slider *self, unsigned char flag); void Fl_Hor_Value_Slider_set_damage_area( Fl_Hor_Value_Slider *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Hor_Value_Slider_clear_damage(Fl_Hor_Value_Slider *self); void *Fl_Hor_Value_Slider_as_window(Fl_Hor_Value_Slider *self); void *Fl_Hor_Value_Slider_as_group(Fl_Hor_Value_Slider *self); void Fl_Hor_Value_Slider_set_deimage(Fl_Hor_Value_Slider *, void *); const void *Fl_Hor_Value_Slider_deimage(const Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_callback(Fl_Hor_Value_Slider *, Fl_Callback *, void *); int Fl_Hor_Value_Slider_visible(const Fl_Hor_Value_Slider *self); int Fl_Hor_Value_Slider_visible_r(const Fl_Hor_Value_Slider *self); unsigned int Fl_Hor_Value_Slider_active(const Fl_Hor_Value_Slider *self); int Fl_Hor_Value_Slider_active_r(const Fl_Hor_Value_Slider *self); Fl_Callback *Fl_Hor_Value_Slider_callback(const Fl_Hor_Value_Slider *self); void Fl_Hor_Value_Slider_set_deletion_callback( Fl_Hor_Value_Slider *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Hor_Value_Slider *Fl_Hor_Value_Slider_from_dyn_ptr(Fl_Widget *ptr); Fl_Hor_Value_Slider *Fl_Hor_Value_Slider_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Hor_Value_Slider_super_draw(Fl_Widget *ptr, int flag); void Fl_Hor_Value_Slider_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Hor_Value_Slider_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Hor_Value_Slider_set_text_color(
    Fl_Hor_Value_Slider *self, unsigned int c
);

unsigned int Fl_Hor_Value_Slider_text_color(Fl_Hor_Value_Slider *self);

void Fl_Hor_Value_Slider_set_text_font(Fl_Hor_Value_Slider *self, int f);

int Fl_Hor_Value_Slider_text_font(Fl_Hor_Value_Slider *self);

void Fl_Hor_Value_Slider_set_text_size(Fl_Hor_Value_Slider *self, int s);

int Fl_Hor_Value_Slider_text_size(Fl_Hor_Value_Slider *self);

void Fl_Hor_Value_Slider_set_bounds(Fl_Hor_Value_Slider *, double a, double b); double Fl_Hor_Value_Slider_minimum(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_minimum(Fl_Hor_Value_Slider *, double a); double Fl_Hor_Value_Slider_maximum(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_maximum(Fl_Hor_Value_Slider *, double a); void Fl_Hor_Value_Slider_set_range(Fl_Hor_Value_Slider *, double a, double b); void Fl_Hor_Value_Slider_set_step(Fl_Hor_Value_Slider *, double a, int b); double Fl_Hor_Value_Slider_step(Fl_Hor_Value_Slider *); void Fl_Hor_Value_Slider_set_precision(Fl_Hor_Value_Slider *, int digits); double Fl_Hor_Value_Slider_value(Fl_Hor_Value_Slider *); int Fl_Hor_Value_Slider_set_value(Fl_Hor_Value_Slider *, double); int Fl_Hor_Value_Slider_format(Fl_Hor_Value_Slider *, char *); double Fl_Hor_Value_Slider_round(Fl_Hor_Value_Slider *, double); double Fl_Hor_Value_Slider_clamp(Fl_Hor_Value_Slider *, double); double Fl_Hor_Value_Slider_increment(Fl_Hor_Value_Slider *, double, int);
typedef struct Fl_Widget Fl_Widget;

void Fl_Widget_resize(Fl_Widget *, int x, int y, int width, int height);
void Fl_Widget_widget_resize( Fl_Widget *, int x, int y, int width, int height );
void Fl_Widget_measure_label(const Fl_Widget *, int *, int *);
int Fl_Widget_label_size(Fl_Widget *);
void Fl_Widget_set_label_size(Fl_Widget *, int sz);
int Fl_Widget_label_type(Fl_Widget *);
void Fl_Widget_set_label_type(Fl_Widget *, int typ);
int Fl_Widget_align(Fl_Widget *);
void Fl_Widget_set_align(Fl_Widget *, int typ);
void Fl_Widget_set_image(Fl_Widget *, void *);
void Fl_Widget_handle( Fl_Widget *self, custom_handler_callback cb, void *data );
int Fl_Widget_handle_event(Fl_Widget *self, int event);
void Fl_Widget_draw(Fl_Widget *self, custom_draw_callback cb, void *data);
void Fl_Widget_resize_callback( Fl_Widget *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data );
void Fl_Widget_do_callback(Fl_Widget *);
int Fl_Widget_takes_events(const Fl_Widget *);
int Fl_Widget_take_focus(Fl_Widget *self);
void Fl_Widget_set_visible_focus(Fl_Widget *self);
void Fl_Widget_clear_visible_focus(Fl_Widget *self);
void Fl_Widget_visible_focus(Fl_Widget *self, int v);
unsigned int Fl_Widget_has_visible_focus(Fl_Widget *self);
void *Fl_Widget_draw_data(const Fl_Widget *self);
void *Fl_Widget_handle_data(const Fl_Widget *self);
void Fl_Widget_set_draw_data(Fl_Widget *self, void *data);
void Fl_Widget_set_handle_data(Fl_Widget *self, void *data);
void Fl_Widget_clear_damage(Fl_Widget *self);
Fl_Callback *Fl_Widget_callback(const Fl_Widget *self);
void Fl_Widget_set_deletion_callback( Fl_Widget *self, void (*)(Fl_Widget *, void *), void *data );
Fl_Widget *Fl_Widget_from_dyn_ptr(Fl_Widget *ptr);
Fl_Widget *Fl_Widget_from_derived_dyn_ptr(Fl_Widget *ptr);
void Fl_Widget_super_draw(Fl_Widget *ptr, int flag);
void Fl_Widget_super_draw_first(Fl_Widget *ptr, int flag);
void Fl_Widget_super_handle_first(Fl_Widget *ptr, int flag);
typedef struct Fl_Window Fl_Window;
Fl_Window *Fl_Window_new( int x, int y, int width, int height, const char *title );
int Fl_Window_x(Fl_Window *);
int Fl_Window_y(Fl_Window *);
int Fl_Window_width(Fl_Window *);
int Fl_Window_height(Fl_Window *); const char *Fl_Window_label(Fl_Window *); void Fl_Window_set_label(Fl_Window *, const char *title); void Fl_Window_redraw(Fl_Window *); void Fl_Window_show(Fl_Window *); void Fl_Window_hide(Fl_Window *); void Fl_Window_activate(Fl_Window *); void Fl_Window_deactivate(Fl_Window *); void Fl_Window_redraw_label(Fl_Window *); void Fl_Window_resize(Fl_Window *, int x, int y, int width, int height); void Fl_Window_widget_resize( Fl_Window *, int x, int y, int width, int height ); const char *Fl_Window_tooltip(Fl_Window *); void Fl_Window_set_tooltip(Fl_Window *, const char *txt); int Fl_Window_get_type(Fl_Window *); void Fl_Window_set_type(Fl_Window *, int typ); unsigned int Fl_Window_color(Fl_Window *); void Fl_Window_set_color(Fl_Window *, unsigned int color); void Fl_Window_measure_label(const Fl_Window *, int *, int *); unsigned int Fl_Window_label_color(Fl_Window *); void Fl_Window_set_label_color(Fl_Window *, unsigned int color); int Fl_Window_label_font(Fl_Window *); void Fl_Window_set_label_font(Fl_Window *, int font); int Fl_Window_label_size(Fl_Window *); void Fl_Window_set_label_size(Fl_Window *, int sz); int Fl_Window_label_type(Fl_Window *); void Fl_Window_set_label_type(Fl_Window *, int typ); int Fl_Window_box(Fl_Window *); void Fl_Window_set_box(Fl_Window *, int typ); int Fl_Window_changed(Fl_Window *); void Fl_Window_set_changed(Fl_Window *); void Fl_Window_clear_changed(Fl_Window *); int Fl_Window_align(Fl_Window *); void Fl_Window_set_align(Fl_Window *, int typ); void Fl_Window_delete(Fl_Window *); void Fl_Window_set_image(Fl_Window *, void *); void Fl_Window_handle( Fl_Window *self, custom_handler_callback cb, void *data ); int Fl_Window_handle_event(Fl_Window *self, int event); void Fl_Window_draw(Fl_Window *self, custom_draw_callback cb, void *data); void Fl_Window_resize_callback( Fl_Window *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Window_set_when(Fl_Window *, int); int Fl_Window_when(const Fl_Window *); const void *Fl_Window_image(const Fl_Window *); void *Fl_Window_parent(const Fl_Window *self); unsigned int Fl_Window_selection_color(Fl_Window *); void Fl_Window_set_selection_color(Fl_Window *, unsigned int color); void Fl_Window_do_callback(Fl_Window *); int Fl_Window_inside(const Fl_Window *self, void *); void *Fl_Window_window(const Fl_Window *); void *Fl_Window_top_window(const Fl_Window *); int Fl_Window_takes_events(const Fl_Window *); void *Fl_Window_user_data(const Fl_Window *); int Fl_Window_take_focus(Fl_Window *self); void Fl_Window_set_visible_focus(Fl_Window *self); void Fl_Window_clear_visible_focus(Fl_Window *self); void Fl_Window_visible_focus(Fl_Window *self, int v); unsigned int Fl_Window_has_visible_focus(Fl_Window *self); void Fl_Window_set_user_data(Fl_Window *, void *data); void *Fl_Window_draw_data(const Fl_Window *self); void *Fl_Window_handle_data(const Fl_Window *self); void Fl_Window_set_draw_data(Fl_Window *self, void *data); void Fl_Window_set_handle_data(Fl_Window *self, void *data); unsigned char Fl_Window_damage(const Fl_Window *self); void Fl_Window_set_damage(Fl_Window *self, unsigned char flag); void Fl_Window_set_damage_area( Fl_Window *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Window_clear_damage(Fl_Window *self); void *Fl_Window_as_window(Fl_Window *self); void *Fl_Window_as_group(Fl_Window *self); void Fl_Window_set_deimage(Fl_Window *, void *); const void *Fl_Window_deimage(const Fl_Window *); void Fl_Window_set_callback(Fl_Window *, Fl_Callback *, void *); int Fl_Window_visible(const Fl_Window *self); int Fl_Window_visible_r(const Fl_Window *self); unsigned int Fl_Window_active(const Fl_Window *self); int Fl_Window_active_r(const Fl_Window *self); Fl_Callback *Fl_Window_callback(const Fl_Window *self); void Fl_Window_set_deletion_callback( Fl_Window *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Window *Fl_Window_from_dyn_ptr(Fl_Widget *ptr); Fl_Window *Fl_Window_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Window_super_draw(Fl_Widget *ptr, int flag); void Fl_Window_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Window_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Window_begin(Fl_Window *self); void Fl_Window_end(Fl_Window *self); int Fl_Window_find(Fl_Window *self, const void *); void Fl_Window_add(Fl_Window *self, void *); void Fl_Window_insert(Fl_Window *self, void *, int pos); void Fl_Window_remove(Fl_Window *self, void *wid); void Fl_Window_remove_by_index(Fl_Window *self, int idx); void Fl_Window_clear(Fl_Window *self); int Fl_Window_children(Fl_Window *self); Fl_Widget *Fl_Window_child(Fl_Window *, int index); void Fl_Window_resizable(Fl_Window *self, void *); void Fl_Window_set_clip_children(Fl_Window *self, int c); int Fl_Window_clip_children(Fl_Window *self); void Fl_Window_init_sizes(Fl_Window *self); void Fl_Window_draw_child(const Fl_Window *self, Fl_Widget *w); void Fl_Window_update_child(const Fl_Window *self, Fl_Widget *w); void Fl_Window_draw_outside_label(const Fl_Window *self, const Fl_Widget *w); void Fl_Window_draw_children(Fl_Window *self);

void Fl_Window_make_modal(Fl_Window *, unsigned int boolean); void Fl_Window_fullscreen(Fl_Window *, unsigned int boolean); void Fl_Window_make_current(Fl_Window *); void Fl_Window_set_icon(Fl_Window *, const void *); void *Fl_Window_icon(const Fl_Window *); void Fl_Window_set_cursor(Fl_Window *self, int cursor); int Fl_Window_shown(Fl_Window *self); void *Fl_Window_raw_handle(const Fl_Window *w); void Fl_Window_set_border(Fl_Window *, int flag); int Fl_Window_border(const Fl_Window *); void *Fl_Window_region(const Fl_Window *self); void Fl_Window_set_region(Fl_Window *self, void *r); void Fl_Window_iconize(Fl_Window *self); unsigned int Fl_Window_fullscreen_active(const Fl_Window *self); void Fl_Window_free_position(Fl_Window *self); int Fl_Window_decorated_w(const Fl_Window *self); int Fl_Window_decorated_h(const Fl_Window *self); void Fl_Window_size_range(Fl_Window *self, int, int, int, int); void Fl_Window_hotspot(Fl_Window *self, Fl_Widget *wid); void Fl_Window_set_shape(Fl_Window *self, const void *image); const void *Fl_Window_shape(Fl_Window *self); int Fl_Window_x_root(const Fl_Window *self); int Fl_Window_y_root(const Fl_Window *self); void Fl_Window_set_cursor_image( Fl_Window *self, const void *image, int hot_x, int hot_y ); void Fl_Window_default_cursor(Fl_Window *self, int cursor); int Fl_Window_screen_num(Fl_Window *); void Fl_Window_set_screen_num(Fl_Window *, int screen_num); void Fl_Window_wait_for_expose(Fl_Window *); void Fl_Window_set_alpha(Fl_Window *self, unsigned char val); unsigned char Fl_Window_alpha(const Fl_Window *self); void Fl_Window_force_position(Fl_Window *self, int flag); const char *Fl_Window_default_xclass(void); const char *Fl_Window_xclass(const Fl_Window *self); void Fl_Window_set_default_xclass(const char *s); void Fl_Window_set_xclass(Fl_Window *self, const char *s); void Fl_Window_clear_modal_states(Fl_Window *self); void Fl_Window_set_override(Fl_Window *); int Fl_Window_override(const Fl_Window *); const char *Fl_Window_icon_label(const Fl_Window *); void Fl_Window_set_icon_label(Fl_Window *, const char *); void Fl_Window_set_icons(Fl_Window *w, const void *images[], int length); void Fl_Window_maximize(Fl_Window *w); void Fl_Window_un_maximize(Fl_Window *w); unsigned int Fl_Window_maximize_active(const Fl_Window *w);

Fl_Window *Fl_Window_new_wh(int width, int height, const char *title);

Fl_Window *Fl_Window_find_by_handle(void *handle);

void *resolve_raw_handle(void *handle);

void *Fl_display(void);

void *Fl_gc(void);

void *Fl_cairo_gc(void);

void Fl_Window_show_with_args(Fl_Window *w, int argc, char **argv);

typedef struct Fl_Single_Window Fl_Single_Window; Fl_Single_Window *Fl_Single_Window_new( int x, int y, int width, int height, const char *title ); int Fl_Single_Window_x(Fl_Single_Window *); int Fl_Single_Window_y(Fl_Single_Window *); int Fl_Single_Window_width(Fl_Single_Window *); int Fl_Single_Window_height(Fl_Single_Window *); const char *Fl_Single_Window_label(Fl_Single_Window *); void Fl_Single_Window_set_label(Fl_Single_Window *, const char *title); void Fl_Single_Window_redraw(Fl_Single_Window *); void Fl_Single_Window_show(Fl_Single_Window *); void Fl_Single_Window_hide(Fl_Single_Window *); void Fl_Single_Window_activate(Fl_Single_Window *); void Fl_Single_Window_deactivate(Fl_Single_Window *); void Fl_Single_Window_redraw_label(Fl_Single_Window *); void Fl_Single_Window_resize(Fl_Single_Window *, int x, int y, int width, int height); void Fl_Single_Window_widget_resize( Fl_Single_Window *, int x, int y, int width, int height ); const char *Fl_Single_Window_tooltip(Fl_Single_Window *); void Fl_Single_Window_set_tooltip(Fl_Single_Window *, const char *txt); int Fl_Single_Window_get_type(Fl_Single_Window *); void Fl_Single_Window_set_type(Fl_Single_Window *, int typ); unsigned int Fl_Single_Window_color(Fl_Single_Window *); void Fl_Single_Window_set_color(Fl_Single_Window *, unsigned int color); void Fl_Single_Window_measure_label(const Fl_Single_Window *, int *, int *); unsigned int Fl_Single_Window_label_color(Fl_Single_Window *); void Fl_Single_Window_set_label_color(Fl_Single_Window *, unsigned int color); int Fl_Single_Window_label_font(Fl_Single_Window *); void Fl_Single_Window_set_label_font(Fl_Single_Window *, int font); int Fl_Single_Window_label_size(Fl_Single_Window *); void Fl_Single_Window_set_label_size(Fl_Single_Window *, int sz); int Fl_Single_Window_label_type(Fl_Single_Window *); void Fl_Single_Window_set_label_type(Fl_Single_Window *, int typ); int Fl_Single_Window_box(Fl_Single_Window *); void Fl_Single_Window_set_box(Fl_Single_Window *, int typ); int Fl_Single_Window_changed(Fl_Single_Window *); void Fl_Single_Window_set_changed(Fl_Single_Window *); void Fl_Single_Window_clear_changed(Fl_Single_Window *); int Fl_Single_Window_align(Fl_Single_Window *); void Fl_Single_Window_set_align(Fl_Single_Window *, int typ); void Fl_Single_Window_delete(Fl_Single_Window *); void Fl_Single_Window_set_image(Fl_Single_Window *, void *); void Fl_Single_Window_handle( Fl_Single_Window *self, custom_handler_callback cb, void *data ); int Fl_Single_Window_handle_event(Fl_Single_Window *self, int event); void Fl_Single_Window_draw(Fl_Single_Window *self, custom_draw_callback cb, void *data); void Fl_Single_Window_resize_callback( Fl_Single_Window *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Single_Window_set_when(Fl_Single_Window *, int); int Fl_Single_Window_when(const Fl_Single_Window *); const void *Fl_Single_Window_image(const Fl_Single_Window *); void *Fl_Single_Window_parent(const Fl_Single_Window *self); unsigned int Fl_Single_Window_selection_color(Fl_Single_Window *); void Fl_Single_Window_set_selection_color(Fl_Single_Window *, unsigned int color); void Fl_Single_Window_do_callback(Fl_Single_Window *); int Fl_Single_Window_inside(const Fl_Single_Window *self, void *); void *Fl_Single_Window_window(const Fl_Single_Window *); void *Fl_Single_Window_top_window(const Fl_Single_Window *); int Fl_Single_Window_takes_events(const Fl_Single_Window *); void *Fl_Single_Window_user_data(const Fl_Single_Window *); int Fl_Single_Window_take_focus(Fl_Single_Window *self); void Fl_Single_Window_set_visible_focus(Fl_Single_Window *self); void Fl_Single_Window_clear_visible_focus(Fl_Single_Window *self); void Fl_Single_Window_visible_focus(Fl_Single_Window *self, int v); unsigned int Fl_Single_Window_has_visible_focus(Fl_Single_Window *self); void Fl_Single_Window_set_user_data(Fl_Single_Window *, void *data); void *Fl_Single_Window_draw_data(const Fl_Single_Window *self); void *Fl_Single_Window_handle_data(const Fl_Single_Window *self); void Fl_Single_Window_set_draw_data(Fl_Single_Window *self, void *data); void Fl_Single_Window_set_handle_data(Fl_Single_Window *self, void *data); unsigned char Fl_Single_Window_damage(const Fl_Single_Window *self); void Fl_Single_Window_set_damage(Fl_Single_Window *self, unsigned char flag); void Fl_Single_Window_set_damage_area( Fl_Single_Window *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Single_Window_clear_damage(Fl_Single_Window *self); void *Fl_Single_Window_as_window(Fl_Single_Window *self); void *Fl_Single_Window_as_group(Fl_Single_Window *self); void Fl_Single_Window_set_deimage(Fl_Single_Window *, void *); const void *Fl_Single_Window_deimage(const Fl_Single_Window *); void Fl_Single_Window_set_callback(Fl_Single_Window *, Fl_Callback *, void *); int Fl_Single_Window_visible(const Fl_Single_Window *self); int Fl_Single_Window_visible_r(const Fl_Single_Window *self); unsigned int Fl_Single_Window_active(const Fl_Single_Window *self); int Fl_Single_Window_active_r(const Fl_Single_Window *self); Fl_Callback *Fl_Single_Window_callback(const Fl_Single_Window *self); void Fl_Single_Window_set_deletion_callback( Fl_Single_Window *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Single_Window *Fl_Single_Window_from_dyn_ptr(Fl_Widget *ptr); Fl_Single_Window *Fl_Single_Window_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Single_Window_super_draw(Fl_Widget *ptr, int flag); void Fl_Single_Window_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Single_Window_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Single_Window_begin(Fl_Single_Window *self); void Fl_Single_Window_end(Fl_Single_Window *self); int Fl_Single_Window_find(Fl_Single_Window *self, const void *); void Fl_Single_Window_add(Fl_Single_Window *self, void *); void Fl_Single_Window_insert(Fl_Single_Window *self, void *, int pos); void Fl_Single_Window_remove(Fl_Single_Window *self, void *wid); void Fl_Single_Window_remove_by_index(Fl_Single_Window *self, int idx); void Fl_Single_Window_clear(Fl_Single_Window *self); int Fl_Single_Window_children(Fl_Single_Window *self); Fl_Widget *Fl_Single_Window_child(Fl_Single_Window *, int index); void Fl_Single_Window_resizable(Fl_Single_Window *self, void *); void Fl_Single_Window_set_clip_children(Fl_Single_Window *self, int c); int Fl_Single_Window_clip_children(Fl_Single_Window *self); void Fl_Single_Window_init_sizes(Fl_Single_Window *self); void Fl_Single_Window_draw_child(const Fl_Single_Window *self, Fl_Widget *w); void Fl_Single_Window_update_child(const Fl_Single_Window *self, Fl_Widget *w); void Fl_Single_Window_draw_outside_label(const Fl_Single_Window *self, const Fl_Widget *w); void Fl_Single_Window_draw_children(Fl_Single_Window *self);

void Fl_Single_Window_make_modal(Fl_Single_Window *, unsigned int boolean); void Fl_Single_Window_fullscreen(Fl_Single_Window *, unsigned int boolean); void Fl_Single_Window_make_current(Fl_Single_Window *); void Fl_Single_Window_set_icon(Fl_Single_Window *, const void *); void *Fl_Single_Window_icon(const Fl_Single_Window *); void Fl_Single_Window_set_cursor(Fl_Single_Window *self, int cursor); int Fl_Single_Window_shown(Fl_Single_Window *self); void *Fl_Single_Window_raw_handle(const Fl_Single_Window *w); void Fl_Single_Window_set_border(Fl_Single_Window *, int flag); int Fl_Single_Window_border(const Fl_Single_Window *); void *Fl_Single_Window_region(const Fl_Single_Window *self); void Fl_Single_Window_set_region(Fl_Single_Window *self, void *r); void Fl_Single_Window_iconize(Fl_Single_Window *self); unsigned int Fl_Single_Window_fullscreen_active(const Fl_Single_Window *self); void Fl_Single_Window_free_position(Fl_Single_Window *self); int Fl_Single_Window_decorated_w(const Fl_Single_Window *self); int Fl_Single_Window_decorated_h(const Fl_Single_Window *self); void Fl_Single_Window_size_range(Fl_Single_Window *self, int, int, int, int); void Fl_Single_Window_hotspot(Fl_Single_Window *self, Fl_Widget *wid); void Fl_Single_Window_set_shape(Fl_Single_Window *self, const void *image); const void *Fl_Single_Window_shape(Fl_Single_Window *self); int Fl_Single_Window_x_root(const Fl_Single_Window *self); int Fl_Single_Window_y_root(const Fl_Single_Window *self); void Fl_Single_Window_set_cursor_image( Fl_Single_Window *self, const void *image, int hot_x, int hot_y ); void Fl_Single_Window_default_cursor(Fl_Single_Window *self, int cursor); int Fl_Single_Window_screen_num(Fl_Single_Window *); void Fl_Single_Window_set_screen_num(Fl_Single_Window *, int screen_num); void Fl_Single_Window_wait_for_expose(Fl_Single_Window *); void Fl_Single_Window_set_alpha(Fl_Single_Window *self, unsigned char val); unsigned char Fl_Single_Window_alpha(const Fl_Single_Window *self); void Fl_Single_Window_force_position(Fl_Single_Window *self, int flag); const char *Fl_Single_Window_default_xclass(void); const char *Fl_Single_Window_xclass(const Fl_Single_Window *self); void Fl_Single_Window_set_default_xclass(const char *s); void Fl_Single_Window_set_xclass(Fl_Single_Window *self, const char *s); void Fl_Single_Window_clear_modal_states(Fl_Single_Window *self); void Fl_Single_Window_set_override(Fl_Single_Window *); int Fl_Single_Window_override(const Fl_Single_Window *); const char *Fl_Single_Window_icon_label(const Fl_Single_Window *); void Fl_Single_Window_set_icon_label(Fl_Single_Window *, const char *); void Fl_Single_Window_set_icons(Fl_Single_Window *w, const void *images[], int length); void Fl_Single_Window_maximize(Fl_Single_Window *w); void Fl_Single_Window_un_maximize(Fl_Single_Window *w); unsigned int Fl_Single_Window_maximize_active(const Fl_Single_Window *w);

typedef struct Fl_Double_Window Fl_Double_Window; Fl_Double_Window *Fl_Double_Window_new( int x, int y, int width, int height, const char *title ); int Fl_Double_Window_x(Fl_Double_Window *); int Fl_Double_Window_y(Fl_Double_Window *); int Fl_Double_Window_width(Fl_Double_Window *); int Fl_Double_Window_height(Fl_Double_Window *); const char *Fl_Double_Window_label(Fl_Double_Window *); void Fl_Double_Window_set_label(Fl_Double_Window *, const char *title); void Fl_Double_Window_redraw(Fl_Double_Window *); void Fl_Double_Window_show(Fl_Double_Window *); void Fl_Double_Window_hide(Fl_Double_Window *); void Fl_Double_Window_activate(Fl_Double_Window *); void Fl_Double_Window_deactivate(Fl_Double_Window *); void Fl_Double_Window_redraw_label(Fl_Double_Window *); void Fl_Double_Window_resize(Fl_Double_Window *, int x, int y, int width, int height); void Fl_Double_Window_widget_resize( Fl_Double_Window *, int x, int y, int width, int height ); const char *Fl_Double_Window_tooltip(Fl_Double_Window *); void Fl_Double_Window_set_tooltip(Fl_Double_Window *, const char *txt); int Fl_Double_Window_get_type(Fl_Double_Window *); void Fl_Double_Window_set_type(Fl_Double_Window *, int typ); unsigned int Fl_Double_Window_color(Fl_Double_Window *); void Fl_Double_Window_set_color(Fl_Double_Window *, unsigned int color); void Fl_Double_Window_measure_label(const Fl_Double_Window *, int *, int *); unsigned int Fl_Double_Window_label_color(Fl_Double_Window *); void Fl_Double_Window_set_label_color(Fl_Double_Window *, unsigned int color); int Fl_Double_Window_label_font(Fl_Double_Window *); void Fl_Double_Window_set_label_font(Fl_Double_Window *, int font); int Fl_Double_Window_label_size(Fl_Double_Window *); void Fl_Double_Window_set_label_size(Fl_Double_Window *, int sz); int Fl_Double_Window_label_type(Fl_Double_Window *); void Fl_Double_Window_set_label_type(Fl_Double_Window *, int typ); int Fl_Double_Window_box(Fl_Double_Window *); void Fl_Double_Window_set_box(Fl_Double_Window *, int typ); int Fl_Double_Window_changed(Fl_Double_Window *); void Fl_Double_Window_set_changed(Fl_Double_Window *); void Fl_Double_Window_clear_changed(Fl_Double_Window *); int Fl_Double_Window_align(Fl_Double_Window *); void Fl_Double_Window_set_align(Fl_Double_Window *, int typ); void Fl_Double_Window_delete(Fl_Double_Window *); void Fl_Double_Window_set_image(Fl_Double_Window *, void *); void Fl_Double_Window_handle( Fl_Double_Window *self, custom_handler_callback cb, void *data ); int Fl_Double_Window_handle_event(Fl_Double_Window *self, int event); void Fl_Double_Window_draw(Fl_Double_Window *self, custom_draw_callback cb, void *data); void Fl_Double_Window_resize_callback( Fl_Double_Window *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Double_Window_set_when(Fl_Double_Window *, int); int Fl_Double_Window_when(const Fl_Double_Window *); const void *Fl_Double_Window_image(const Fl_Double_Window *); void *Fl_Double_Window_parent(const Fl_Double_Window *self); unsigned int Fl_Double_Window_selection_color(Fl_Double_Window *); void Fl_Double_Window_set_selection_color(Fl_Double_Window *, unsigned int color); void Fl_Double_Window_do_callback(Fl_Double_Window *); int Fl_Double_Window_inside(const Fl_Double_Window *self, void *); void *Fl_Double_Window_window(const Fl_Double_Window *); void *Fl_Double_Window_top_window(const Fl_Double_Window *); int Fl_Double_Window_takes_events(const Fl_Double_Window *); void *Fl_Double_Window_user_data(const Fl_Double_Window *); int Fl_Double_Window_take_focus(Fl_Double_Window *self); void Fl_Double_Window_set_visible_focus(Fl_Double_Window *self); void Fl_Double_Window_clear_visible_focus(Fl_Double_Window *self); void Fl_Double_Window_visible_focus(Fl_Double_Window *self, int v); unsigned int Fl_Double_Window_has_visible_focus(Fl_Double_Window *self); void Fl_Double_Window_set_user_data(Fl_Double_Window *, void *data); void *Fl_Double_Window_draw_data(const Fl_Double_Window *self); void *Fl_Double_Window_handle_data(const Fl_Double_Window *self); void Fl_Double_Window_set_draw_data(Fl_Double_Window *self, void *data); void Fl_Double_Window_set_handle_data(Fl_Double_Window *self, void *data); unsigned char Fl_Double_Window_damage(const Fl_Double_Window *self); void Fl_Double_Window_set_damage(Fl_Double_Window *self, unsigned char flag); void Fl_Double_Window_set_damage_area( Fl_Double_Window *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Double_Window_clear_damage(Fl_Double_Window *self); void *Fl_Double_Window_as_window(Fl_Double_Window *self); void *Fl_Double_Window_as_group(Fl_Double_Window *self); void Fl_Double_Window_set_deimage(Fl_Double_Window *, void *); const void *Fl_Double_Window_deimage(const Fl_Double_Window *); void Fl_Double_Window_set_callback(Fl_Double_Window *, Fl_Callback *, void *); int Fl_Double_Window_visible(const Fl_Double_Window *self); int Fl_Double_Window_visible_r(const Fl_Double_Window *self); unsigned int Fl_Double_Window_active(const Fl_Double_Window *self); int Fl_Double_Window_active_r(const Fl_Double_Window *self); Fl_Callback *Fl_Double_Window_callback(const Fl_Double_Window *self); void Fl_Double_Window_set_deletion_callback( Fl_Double_Window *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Double_Window *Fl_Double_Window_from_dyn_ptr(Fl_Widget *ptr); Fl_Double_Window *Fl_Double_Window_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Double_Window_super_draw(Fl_Widget *ptr, int flag); void Fl_Double_Window_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Double_Window_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Double_Window_flush(Fl_Double_Window *w);

void Fl_Double_Window_begin(Fl_Double_Window *self); void Fl_Double_Window_end(Fl_Double_Window *self); int Fl_Double_Window_find(Fl_Double_Window *self, const void *); void Fl_Double_Window_add(Fl_Double_Window *self, void *); void Fl_Double_Window_insert(Fl_Double_Window *self, void *, int pos); void Fl_Double_Window_remove(Fl_Double_Window *self, void *wid); void Fl_Double_Window_remove_by_index(Fl_Double_Window *self, int idx); void Fl_Double_Window_clear(Fl_Double_Window *self); int Fl_Double_Window_children(Fl_Double_Window *self); Fl_Widget *Fl_Double_Window_child(Fl_Double_Window *, int index); void Fl_Double_Window_resizable(Fl_Double_Window *self, void *); void Fl_Double_Window_set_clip_children(Fl_Double_Window *self, int c); int Fl_Double_Window_clip_children(Fl_Double_Window *self); void Fl_Double_Window_init_sizes(Fl_Double_Window *self); void Fl_Double_Window_draw_child(const Fl_Double_Window *self, Fl_Widget *w); void Fl_Double_Window_update_child(const Fl_Double_Window *self, Fl_Widget *w); void Fl_Double_Window_draw_outside_label(const Fl_Double_Window *self, const Fl_Widget *w); void Fl_Double_Window_draw_children(Fl_Double_Window *self);

void Fl_Double_Window_make_modal(Fl_Double_Window *, unsigned int boolean); void Fl_Double_Window_fullscreen(Fl_Double_Window *, unsigned int boolean); void Fl_Double_Window_make_current(Fl_Double_Window *); void Fl_Double_Window_set_icon(Fl_Double_Window *, const void *); void *Fl_Double_Window_icon(const Fl_Double_Window *); void Fl_Double_Window_set_cursor(Fl_Double_Window *self, int cursor); int Fl_Double_Window_shown(Fl_Double_Window *self); void *Fl_Double_Window_raw_handle(const Fl_Double_Window *w); void Fl_Double_Window_set_border(Fl_Double_Window *, int flag); int Fl_Double_Window_border(const Fl_Double_Window *); void *Fl_Double_Window_region(const Fl_Double_Window *self); void Fl_Double_Window_set_region(Fl_Double_Window *self, void *r); void Fl_Double_Window_iconize(Fl_Double_Window *self); unsigned int Fl_Double_Window_fullscreen_active(const Fl_Double_Window *self); void Fl_Double_Window_free_position(Fl_Double_Window *self); int Fl_Double_Window_decorated_w(const Fl_Double_Window *self); int Fl_Double_Window_decorated_h(const Fl_Double_Window *self); void Fl_Double_Window_size_range(Fl_Double_Window *self, int, int, int, int); void Fl_Double_Window_hotspot(Fl_Double_Window *self, Fl_Widget *wid); void Fl_Double_Window_set_shape(Fl_Double_Window *self, const void *image); const void *Fl_Double_Window_shape(Fl_Double_Window *self); int Fl_Double_Window_x_root(const Fl_Double_Window *self); int Fl_Double_Window_y_root(const Fl_Double_Window *self); void Fl_Double_Window_set_cursor_image( Fl_Double_Window *self, const void *image, int hot_x, int hot_y ); void Fl_Double_Window_default_cursor(Fl_Double_Window *self, int cursor); int Fl_Double_Window_screen_num(Fl_Double_Window *); void Fl_Double_Window_set_screen_num(Fl_Double_Window *, int screen_num); void Fl_Double_Window_wait_for_expose(Fl_Double_Window *); void Fl_Double_Window_set_alpha(Fl_Double_Window *self, unsigned char val); unsigned char Fl_Double_Window_alpha(const Fl_Double_Window *self); void Fl_Double_Window_force_position(Fl_Double_Window *self, int flag); const char *Fl_Double_Window_default_xclass(void); const char *Fl_Double_Window_xclass(const Fl_Double_Window *self); void Fl_Double_Window_set_default_xclass(const char *s); void Fl_Double_Window_set_xclass(Fl_Double_Window *self, const char *s); void Fl_Double_Window_clear_modal_states(Fl_Double_Window *self); void Fl_Double_Window_set_override(Fl_Double_Window *); int Fl_Double_Window_override(const Fl_Double_Window *); const char *Fl_Double_Window_icon_label(const Fl_Double_Window *); void Fl_Double_Window_set_icon_label(Fl_Double_Window *, const char *); void Fl_Double_Window_set_icons(Fl_Double_Window *w, const void *images[], int length); void Fl_Double_Window_maximize(Fl_Double_Window *w); void Fl_Double_Window_un_maximize(Fl_Double_Window *w); unsigned int Fl_Double_Window_maximize_active(const Fl_Double_Window *w);

typedef struct Fl_Menu_Window Fl_Menu_Window; Fl_Menu_Window *Fl_Menu_Window_new( int x, int y, int width, int height, const char *title ); int Fl_Menu_Window_x(Fl_Menu_Window *); int Fl_Menu_Window_y(Fl_Menu_Window *); int Fl_Menu_Window_width(Fl_Menu_Window *); int Fl_Menu_Window_height(Fl_Menu_Window *); const char *Fl_Menu_Window_label(Fl_Menu_Window *); void Fl_Menu_Window_set_label(Fl_Menu_Window *, const char *title); void Fl_Menu_Window_redraw(Fl_Menu_Window *); void Fl_Menu_Window_show(Fl_Menu_Window *); void Fl_Menu_Window_hide(Fl_Menu_Window *); void Fl_Menu_Window_activate(Fl_Menu_Window *); void Fl_Menu_Window_deactivate(Fl_Menu_Window *); void Fl_Menu_Window_redraw_label(Fl_Menu_Window *); void Fl_Menu_Window_resize(Fl_Menu_Window *, int x, int y, int width, int height); void Fl_Menu_Window_widget_resize( Fl_Menu_Window *, int x, int y, int width, int height ); const char *Fl_Menu_Window_tooltip(Fl_Menu_Window *); void Fl_Menu_Window_set_tooltip(Fl_Menu_Window *, const char *txt); int Fl_Menu_Window_get_type(Fl_Menu_Window *); void Fl_Menu_Window_set_type(Fl_Menu_Window *, int typ); unsigned int Fl_Menu_Window_color(Fl_Menu_Window *); void Fl_Menu_Window_set_color(Fl_Menu_Window *, unsigned int color); void Fl_Menu_Window_measure_label(const Fl_Menu_Window *, int *, int *); unsigned int Fl_Menu_Window_label_color(Fl_Menu_Window *); void Fl_Menu_Window_set_label_color(Fl_Menu_Window *, unsigned int color); int Fl_Menu_Window_label_font(Fl_Menu_Window *); void Fl_Menu_Window_set_label_font(Fl_Menu_Window *, int font); int Fl_Menu_Window_label_size(Fl_Menu_Window *); void Fl_Menu_Window_set_label_size(Fl_Menu_Window *, int sz); int Fl_Menu_Window_label_type(Fl_Menu_Window *); void Fl_Menu_Window_set_label_type(Fl_Menu_Window *, int typ); int Fl_Menu_Window_box(Fl_Menu_Window *); void Fl_Menu_Window_set_box(Fl_Menu_Window *, int typ); int Fl_Menu_Window_changed(Fl_Menu_Window *); void Fl_Menu_Window_set_changed(Fl_Menu_Window *); void Fl_Menu_Window_clear_changed(Fl_Menu_Window *); int Fl_Menu_Window_align(Fl_Menu_Window *); void Fl_Menu_Window_set_align(Fl_Menu_Window *, int typ); void Fl_Menu_Window_delete(Fl_Menu_Window *); void Fl_Menu_Window_set_image(Fl_Menu_Window *, void *); void Fl_Menu_Window_handle( Fl_Menu_Window *self, custom_handler_callback cb, void *data ); int Fl_Menu_Window_handle_event(Fl_Menu_Window *self, int event); void Fl_Menu_Window_draw(Fl_Menu_Window *self, custom_draw_callback cb, void *data); void Fl_Menu_Window_resize_callback( Fl_Menu_Window *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Menu_Window_set_when(Fl_Menu_Window *, int); int Fl_Menu_Window_when(const Fl_Menu_Window *); const void *Fl_Menu_Window_image(const Fl_Menu_Window *); void *Fl_Menu_Window_parent(const Fl_Menu_Window *self); unsigned int Fl_Menu_Window_selection_color(Fl_Menu_Window *); void Fl_Menu_Window_set_selection_color(Fl_Menu_Window *, unsigned int color); void Fl_Menu_Window_do_callback(Fl_Menu_Window *); int Fl_Menu_Window_inside(const Fl_Menu_Window *self, void *); void *Fl_Menu_Window_window(const Fl_Menu_Window *); void *Fl_Menu_Window_top_window(const Fl_Menu_Window *); int Fl_Menu_Window_takes_events(const Fl_Menu_Window *); void *Fl_Menu_Window_user_data(const Fl_Menu_Window *); int Fl_Menu_Window_take_focus(Fl_Menu_Window *self); void Fl_Menu_Window_set_visible_focus(Fl_Menu_Window *self); void Fl_Menu_Window_clear_visible_focus(Fl_Menu_Window *self); void Fl_Menu_Window_visible_focus(Fl_Menu_Window *self, int v); unsigned int Fl_Menu_Window_has_visible_focus(Fl_Menu_Window *self); void Fl_Menu_Window_set_user_data(Fl_Menu_Window *, void *data); void *Fl_Menu_Window_draw_data(const Fl_Menu_Window *self); void *Fl_Menu_Window_handle_data(const Fl_Menu_Window *self); void Fl_Menu_Window_set_draw_data(Fl_Menu_Window *self, void *data); void Fl_Menu_Window_set_handle_data(Fl_Menu_Window *self, void *data); unsigned char Fl_Menu_Window_damage(const Fl_Menu_Window *self); void Fl_Menu_Window_set_damage(Fl_Menu_Window *self, unsigned char flag); void Fl_Menu_Window_set_damage_area( Fl_Menu_Window *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Menu_Window_clear_damage(Fl_Menu_Window *self); void *Fl_Menu_Window_as_window(Fl_Menu_Window *self); void *Fl_Menu_Window_as_group(Fl_Menu_Window *self); void Fl_Menu_Window_set_deimage(Fl_Menu_Window *, void *); const void *Fl_Menu_Window_deimage(const Fl_Menu_Window *); void Fl_Menu_Window_set_callback(Fl_Menu_Window *, Fl_Callback *, void *); int Fl_Menu_Window_visible(const Fl_Menu_Window *self); int Fl_Menu_Window_visible_r(const Fl_Menu_Window *self); unsigned int Fl_Menu_Window_active(const Fl_Menu_Window *self); int Fl_Menu_Window_active_r(const Fl_Menu_Window *self); Fl_Callback *Fl_Menu_Window_callback(const Fl_Menu_Window *self); void Fl_Menu_Window_set_deletion_callback( Fl_Menu_Window *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Menu_Window *Fl_Menu_Window_from_dyn_ptr(Fl_Widget *ptr); Fl_Menu_Window *Fl_Menu_Window_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Menu_Window_super_draw(Fl_Widget *ptr, int flag); void Fl_Menu_Window_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Menu_Window_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Menu_Window_begin(Fl_Menu_Window *self); void Fl_Menu_Window_end(Fl_Menu_Window *self); int Fl_Menu_Window_find(Fl_Menu_Window *self, const void *); void Fl_Menu_Window_add(Fl_Menu_Window *self, void *); void Fl_Menu_Window_insert(Fl_Menu_Window *self, void *, int pos); void Fl_Menu_Window_remove(Fl_Menu_Window *self, void *wid); void Fl_Menu_Window_remove_by_index(Fl_Menu_Window *self, int idx); void Fl_Menu_Window_clear(Fl_Menu_Window *self); int Fl_Menu_Window_children(Fl_Menu_Window *self); Fl_Widget *Fl_Menu_Window_child(Fl_Menu_Window *, int index); void Fl_Menu_Window_resizable(Fl_Menu_Window *self, void *); void Fl_Menu_Window_set_clip_children(Fl_Menu_Window *self, int c); int Fl_Menu_Window_clip_children(Fl_Menu_Window *self); void Fl_Menu_Window_init_sizes(Fl_Menu_Window *self); void Fl_Menu_Window_draw_child(const Fl_Menu_Window *self, Fl_Widget *w); void Fl_Menu_Window_update_child(const Fl_Menu_Window *self, Fl_Widget *w); void Fl_Menu_Window_draw_outside_label(const Fl_Menu_Window *self, const Fl_Widget *w); void Fl_Menu_Window_draw_children(Fl_Menu_Window *self);

void Fl_Menu_Window_make_modal(Fl_Menu_Window *, unsigned int boolean); void Fl_Menu_Window_fullscreen(Fl_Menu_Window *, unsigned int boolean); void Fl_Menu_Window_make_current(Fl_Menu_Window *); void Fl_Menu_Window_set_icon(Fl_Menu_Window *, const void *); void *Fl_Menu_Window_icon(const Fl_Menu_Window *); void Fl_Menu_Window_set_cursor(Fl_Menu_Window *self, int cursor); int Fl_Menu_Window_shown(Fl_Menu_Window *self); void *Fl_Menu_Window_raw_handle(const Fl_Menu_Window *w); void Fl_Menu_Window_set_border(Fl_Menu_Window *, int flag); int Fl_Menu_Window_border(const Fl_Menu_Window *); void *Fl_Menu_Window_region(const Fl_Menu_Window *self); void Fl_Menu_Window_set_region(Fl_Menu_Window *self, void *r); void Fl_Menu_Window_iconize(Fl_Menu_Window *self); unsigned int Fl_Menu_Window_fullscreen_active(const Fl_Menu_Window *self); void Fl_Menu_Window_free_position(Fl_Menu_Window *self); int Fl_Menu_Window_decorated_w(const Fl_Menu_Window *self); int Fl_Menu_Window_decorated_h(const Fl_Menu_Window *self); void Fl_Menu_Window_size_range(Fl_Menu_Window *self, int, int, int, int); void Fl_Menu_Window_hotspot(Fl_Menu_Window *self, Fl_Widget *wid); void Fl_Menu_Window_set_shape(Fl_Menu_Window *self, const void *image); const void *Fl_Menu_Window_shape(Fl_Menu_Window *self); int Fl_Menu_Window_x_root(const Fl_Menu_Window *self); int Fl_Menu_Window_y_root(const Fl_Menu_Window *self); void Fl_Menu_Window_set_cursor_image( Fl_Menu_Window *self, const void *image, int hot_x, int hot_y ); void Fl_Menu_Window_default_cursor(Fl_Menu_Window *self, int cursor); int Fl_Menu_Window_screen_num(Fl_Menu_Window *); void Fl_Menu_Window_set_screen_num(Fl_Menu_Window *, int screen_num); void Fl_Menu_Window_wait_for_expose(Fl_Menu_Window *); void Fl_Menu_Window_set_alpha(Fl_Menu_Window *self, unsigned char val); unsigned char Fl_Menu_Window_alpha(const Fl_Menu_Window *self); void Fl_Menu_Window_force_position(Fl_Menu_Window *self, int flag); const char *Fl_Menu_Window_default_xclass(void); const char *Fl_Menu_Window_xclass(const Fl_Menu_Window *self); void Fl_Menu_Window_set_default_xclass(const char *s); void Fl_Menu_Window_set_xclass(Fl_Menu_Window *self, const char *s); void Fl_Menu_Window_clear_modal_states(Fl_Menu_Window *self); void Fl_Menu_Window_set_override(Fl_Menu_Window *); int Fl_Menu_Window_override(const Fl_Menu_Window *); const char *Fl_Menu_Window_icon_label(const Fl_Menu_Window *); void Fl_Menu_Window_set_icon_label(Fl_Menu_Window *, const char *); void Fl_Menu_Window_set_icons(Fl_Menu_Window *w, const void *images[], int length); void Fl_Menu_Window_maximize(Fl_Menu_Window *w); void Fl_Menu_Window_un_maximize(Fl_Menu_Window *w); unsigned int Fl_Menu_Window_maximize_active(const Fl_Menu_Window *w);

typedef struct Fl_Overlay_Window Fl_Overlay_Window; Fl_Overlay_Window *Fl_Overlay_Window_new( int x, int y, int width, int height, const char *title ); int Fl_Overlay_Window_x(Fl_Overlay_Window *); int Fl_Overlay_Window_y(Fl_Overlay_Window *); int Fl_Overlay_Window_width(Fl_Overlay_Window *); int Fl_Overlay_Window_height(Fl_Overlay_Window *); const char *Fl_Overlay_Window_label(Fl_Overlay_Window *); void Fl_Overlay_Window_set_label(Fl_Overlay_Window *, const char *title); void Fl_Overlay_Window_redraw(Fl_Overlay_Window *); void Fl_Overlay_Window_show(Fl_Overlay_Window *); void Fl_Overlay_Window_hide(Fl_Overlay_Window *); void Fl_Overlay_Window_activate(Fl_Overlay_Window *); void Fl_Overlay_Window_deactivate(Fl_Overlay_Window *); void Fl_Overlay_Window_redraw_label(Fl_Overlay_Window *); void Fl_Overlay_Window_resize(Fl_Overlay_Window *, int x, int y, int width, int height); void Fl_Overlay_Window_widget_resize( Fl_Overlay_Window *, int x, int y, int width, int height ); const char *Fl_Overlay_Window_tooltip(Fl_Overlay_Window *); void Fl_Overlay_Window_set_tooltip(Fl_Overlay_Window *, const char *txt); int Fl_Overlay_Window_get_type(Fl_Overlay_Window *); void Fl_Overlay_Window_set_type(Fl_Overlay_Window *, int typ); unsigned int Fl_Overlay_Window_color(Fl_Overlay_Window *); void Fl_Overlay_Window_set_color(Fl_Overlay_Window *, unsigned int color); void Fl_Overlay_Window_measure_label(const Fl_Overlay_Window *, int *, int *); unsigned int Fl_Overlay_Window_label_color(Fl_Overlay_Window *); void Fl_Overlay_Window_set_label_color(Fl_Overlay_Window *, unsigned int color); int Fl_Overlay_Window_label_font(Fl_Overlay_Window *); void Fl_Overlay_Window_set_label_font(Fl_Overlay_Window *, int font); int Fl_Overlay_Window_label_size(Fl_Overlay_Window *); void Fl_Overlay_Window_set_label_size(Fl_Overlay_Window *, int sz); int Fl_Overlay_Window_label_type(Fl_Overlay_Window *); void Fl_Overlay_Window_set_label_type(Fl_Overlay_Window *, int typ); int Fl_Overlay_Window_box(Fl_Overlay_Window *); void Fl_Overlay_Window_set_box(Fl_Overlay_Window *, int typ); int Fl_Overlay_Window_changed(Fl_Overlay_Window *); void Fl_Overlay_Window_set_changed(Fl_Overlay_Window *); void Fl_Overlay_Window_clear_changed(Fl_Overlay_Window *); int Fl_Overlay_Window_align(Fl_Overlay_Window *); void Fl_Overlay_Window_set_align(Fl_Overlay_Window *, int typ); void Fl_Overlay_Window_delete(Fl_Overlay_Window *); void Fl_Overlay_Window_set_image(Fl_Overlay_Window *, void *); void Fl_Overlay_Window_handle( Fl_Overlay_Window *self, custom_handler_callback cb, void *data ); int Fl_Overlay_Window_handle_event(Fl_Overlay_Window *self, int event); void Fl_Overlay_Window_draw(Fl_Overlay_Window *self, custom_draw_callback cb, void *data); void Fl_Overlay_Window_resize_callback( Fl_Overlay_Window *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Overlay_Window_set_when(Fl_Overlay_Window *, int); int Fl_Overlay_Window_when(const Fl_Overlay_Window *); const void *Fl_Overlay_Window_image(const Fl_Overlay_Window *); void *Fl_Overlay_Window_parent(const Fl_Overlay_Window *self); unsigned int Fl_Overlay_Window_selection_color(Fl_Overlay_Window *); void Fl_Overlay_Window_set_selection_color(Fl_Overlay_Window *, unsigned int color); void Fl_Overlay_Window_do_callback(Fl_Overlay_Window *); int Fl_Overlay_Window_inside(const Fl_Overlay_Window *self, void *); void *Fl_Overlay_Window_window(const Fl_Overlay_Window *); void *Fl_Overlay_Window_top_window(const Fl_Overlay_Window *); int Fl_Overlay_Window_takes_events(const Fl_Overlay_Window *); void *Fl_Overlay_Window_user_data(const Fl_Overlay_Window *); int Fl_Overlay_Window_take_focus(Fl_Overlay_Window *self); void Fl_Overlay_Window_set_visible_focus(Fl_Overlay_Window *self); void Fl_Overlay_Window_clear_visible_focus(Fl_Overlay_Window *self); void Fl_Overlay_Window_visible_focus(Fl_Overlay_Window *self, int v); unsigned int Fl_Overlay_Window_has_visible_focus(Fl_Overlay_Window *self); void Fl_Overlay_Window_set_user_data(Fl_Overlay_Window *, void *data); void *Fl_Overlay_Window_draw_data(const Fl_Overlay_Window *self); void *Fl_Overlay_Window_handle_data(const Fl_Overlay_Window *self); void Fl_Overlay_Window_set_draw_data(Fl_Overlay_Window *self, void *data); void Fl_Overlay_Window_set_handle_data(Fl_Overlay_Window *self, void *data); unsigned char Fl_Overlay_Window_damage(const Fl_Overlay_Window *self); void Fl_Overlay_Window_set_damage(Fl_Overlay_Window *self, unsigned char flag); void Fl_Overlay_Window_set_damage_area( Fl_Overlay_Window *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Overlay_Window_clear_damage(Fl_Overlay_Window *self); void *Fl_Overlay_Window_as_window(Fl_Overlay_Window *self); void *Fl_Overlay_Window_as_group(Fl_Overlay_Window *self); void Fl_Overlay_Window_set_deimage(Fl_Overlay_Window *, void *); const void *Fl_Overlay_Window_deimage(const Fl_Overlay_Window *); void Fl_Overlay_Window_set_callback(Fl_Overlay_Window *, Fl_Callback *, void *); int Fl_Overlay_Window_visible(const Fl_Overlay_Window *self); int Fl_Overlay_Window_visible_r(const Fl_Overlay_Window *self); unsigned int Fl_Overlay_Window_active(const Fl_Overlay_Window *self); int Fl_Overlay_Window_active_r(const Fl_Overlay_Window *self); Fl_Callback *Fl_Overlay_Window_callback(const Fl_Overlay_Window *self); void Fl_Overlay_Window_set_deletion_callback( Fl_Overlay_Window *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Overlay_Window *Fl_Overlay_Window_from_dyn_ptr(Fl_Widget *ptr); Fl_Overlay_Window *Fl_Overlay_Window_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Overlay_Window_super_draw(Fl_Widget *ptr, int flag); void Fl_Overlay_Window_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Overlay_Window_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Overlay_Window_begin(Fl_Overlay_Window *self); void Fl_Overlay_Window_end(Fl_Overlay_Window *self); int Fl_Overlay_Window_find(Fl_Overlay_Window *self, const void *); void Fl_Overlay_Window_add(Fl_Overlay_Window *self, void *); void Fl_Overlay_Window_insert(Fl_Overlay_Window *self, void *, int pos); void Fl_Overlay_Window_remove(Fl_Overlay_Window *self, void *wid); void Fl_Overlay_Window_remove_by_index(Fl_Overlay_Window *self, int idx); void Fl_Overlay_Window_clear(Fl_Overlay_Window *self); int Fl_Overlay_Window_children(Fl_Overlay_Window *self); Fl_Widget *Fl_Overlay_Window_child(Fl_Overlay_Window *, int index); void Fl_Overlay_Window_resizable(Fl_Overlay_Window *self, void *); void Fl_Overlay_Window_set_clip_children(Fl_Overlay_Window *self, int c); int Fl_Overlay_Window_clip_children(Fl_Overlay_Window *self); void Fl_Overlay_Window_init_sizes(Fl_Overlay_Window *self); void Fl_Overlay_Window_draw_child(const Fl_Overlay_Window *self, Fl_Widget *w); void Fl_Overlay_Window_update_child(const Fl_Overlay_Window *self, Fl_Widget *w); void Fl_Overlay_Window_draw_outside_label(const Fl_Overlay_Window *self, const Fl_Widget *w); void Fl_Overlay_Window_draw_children(Fl_Overlay_Window *self);

void Fl_Overlay_Window_draw_overlay(
    Fl_Overlay_Window *self, custom_draw_callback cb, void *data
);

void Fl_Overlay_Window_redraw_overlay(Fl_Overlay_Window *self);

int Fl_Overlay_Window_can_do_overlay(Fl_Overlay_Window *self);

void Fl_Overlay_Window_make_modal(Fl_Overlay_Window *, unsigned int boolean); void Fl_Overlay_Window_fullscreen(Fl_Overlay_Window *, unsigned int boolean); void Fl_Overlay_Window_make_current(Fl_Overlay_Window *); void Fl_Overlay_Window_set_icon(Fl_Overlay_Window *, const void *); void *Fl_Overlay_Window_icon(const Fl_Overlay_Window *); void Fl_Overlay_Window_set_cursor(Fl_Overlay_Window *self, int cursor); int Fl_Overlay_Window_shown(Fl_Overlay_Window *self); void *Fl_Overlay_Window_raw_handle(const Fl_Overlay_Window *w); void Fl_Overlay_Window_set_border(Fl_Overlay_Window *, int flag); int Fl_Overlay_Window_border(const Fl_Overlay_Window *); void *Fl_Overlay_Window_region(const Fl_Overlay_Window *self); void Fl_Overlay_Window_set_region(Fl_Overlay_Window *self, void *r); void Fl_Overlay_Window_iconize(Fl_Overlay_Window *self); unsigned int Fl_Overlay_Window_fullscreen_active(const Fl_Overlay_Window *self); void Fl_Overlay_Window_free_position(Fl_Overlay_Window *self); int Fl_Overlay_Window_decorated_w(const Fl_Overlay_Window *self); int Fl_Overlay_Window_decorated_h(const Fl_Overlay_Window *self); void Fl_Overlay_Window_size_range(Fl_Overlay_Window *self, int, int, int, int); void Fl_Overlay_Window_hotspot(Fl_Overlay_Window *self, Fl_Widget *wid); void Fl_Overlay_Window_set_shape(Fl_Overlay_Window *self, const void *image); const void *Fl_Overlay_Window_shape(Fl_Overlay_Window *self); int Fl_Overlay_Window_x_root(const Fl_Overlay_Window *self); int Fl_Overlay_Window_y_root(const Fl_Overlay_Window *self); void Fl_Overlay_Window_set_cursor_image( Fl_Overlay_Window *self, const void *image, int hot_x, int hot_y ); void Fl_Overlay_Window_default_cursor(Fl_Overlay_Window *self, int cursor); int Fl_Overlay_Window_screen_num(Fl_Overlay_Window *); void Fl_Overlay_Window_set_screen_num(Fl_Overlay_Window *, int screen_num); void Fl_Overlay_Window_wait_for_expose(Fl_Overlay_Window *); void Fl_Overlay_Window_set_alpha(Fl_Overlay_Window *self, unsigned char val); unsigned char Fl_Overlay_Window_alpha(const Fl_Overlay_Window *self); void Fl_Overlay_Window_force_position(Fl_Overlay_Window *self, int flag); const char *Fl_Overlay_Window_default_xclass(void); const char *Fl_Overlay_Window_xclass(const Fl_Overlay_Window *self); void Fl_Overlay_Window_set_default_xclass(const char *s); void Fl_Overlay_Window_set_xclass(Fl_Overlay_Window *self, const char *s); void Fl_Overlay_Window_clear_modal_states(Fl_Overlay_Window *self); void Fl_Overlay_Window_set_override(Fl_Overlay_Window *); int Fl_Overlay_Window_override(const Fl_Overlay_Window *); const char *Fl_Overlay_Window_icon_label(const Fl_Overlay_Window *); void Fl_Overlay_Window_set_icon_label(Fl_Overlay_Window *, const char *); void Fl_Overlay_Window_set_icons(Fl_Overlay_Window *w, const void *images[], int length); void Fl_Overlay_Window_maximize(Fl_Overlay_Window *w); void Fl_Overlay_Window_un_maximize(Fl_Overlay_Window *w); unsigned int Fl_Overlay_Window_maximize_active(const Fl_Overlay_Window *w);

void Fl_gl_start(void);

void Fl_gl_finish(void);

typedef struct Fl_Gl_Window Fl_Gl_Window; Fl_Gl_Window *Fl_Gl_Window_new( int x, int y, int width, int height, const char *title ); int Fl_Gl_Window_x(Fl_Gl_Window *); int Fl_Gl_Window_y(Fl_Gl_Window *); int Fl_Gl_Window_width(Fl_Gl_Window *); int Fl_Gl_Window_height(Fl_Gl_Window *); const char *Fl_Gl_Window_label(Fl_Gl_Window *); void Fl_Gl_Window_set_label(Fl_Gl_Window *, const char *title); void Fl_Gl_Window_redraw(Fl_Gl_Window *); void Fl_Gl_Window_show(Fl_Gl_Window *); void Fl_Gl_Window_hide(Fl_Gl_Window *); void Fl_Gl_Window_activate(Fl_Gl_Window *); void Fl_Gl_Window_deactivate(Fl_Gl_Window *); void Fl_Gl_Window_redraw_label(Fl_Gl_Window *); void Fl_Gl_Window_resize(Fl_Gl_Window *, int x, int y, int width, int height); void Fl_Gl_Window_widget_resize( Fl_Gl_Window *, int x, int y, int width, int height ); const char *Fl_Gl_Window_tooltip(Fl_Gl_Window *); void Fl_Gl_Window_set_tooltip(Fl_Gl_Window *, const char *txt); int Fl_Gl_Window_get_type(Fl_Gl_Window *); void Fl_Gl_Window_set_type(Fl_Gl_Window *, int typ); unsigned int Fl_Gl_Window_color(Fl_Gl_Window *); void Fl_Gl_Window_set_color(Fl_Gl_Window *, unsigned int color); void Fl_Gl_Window_measure_label(const Fl_Gl_Window *, int *, int *); unsigned int Fl_Gl_Window_label_color(Fl_Gl_Window *); void Fl_Gl_Window_set_label_color(Fl_Gl_Window *, unsigned int color); int Fl_Gl_Window_label_font(Fl_Gl_Window *); void Fl_Gl_Window_set_label_font(Fl_Gl_Window *, int font); int Fl_Gl_Window_label_size(Fl_Gl_Window *); void Fl_Gl_Window_set_label_size(Fl_Gl_Window *, int sz); int Fl_Gl_Window_label_type(Fl_Gl_Window *); void Fl_Gl_Window_set_label_type(Fl_Gl_Window *, int typ); int Fl_Gl_Window_box(Fl_Gl_Window *); void Fl_Gl_Window_set_box(Fl_Gl_Window *, int typ); int Fl_Gl_Window_changed(Fl_Gl_Window *); void Fl_Gl_Window_set_changed(Fl_Gl_Window *); void Fl_Gl_Window_clear_changed(Fl_Gl_Window *); int Fl_Gl_Window_align(Fl_Gl_Window *); void Fl_Gl_Window_set_align(Fl_Gl_Window *, int typ); void Fl_Gl_Window_delete(Fl_Gl_Window *); void Fl_Gl_Window_set_image(Fl_Gl_Window *, void *); void Fl_Gl_Window_handle( Fl_Gl_Window *self, custom_handler_callback cb, void *data ); int Fl_Gl_Window_handle_event(Fl_Gl_Window *self, int event); void Fl_Gl_Window_draw(Fl_Gl_Window *self, custom_draw_callback cb, void *data); void Fl_Gl_Window_resize_callback( Fl_Gl_Window *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Gl_Window_set_when(Fl_Gl_Window *, int); int Fl_Gl_Window_when(const Fl_Gl_Window *); const void *Fl_Gl_Window_image(const Fl_Gl_Window *); void *Fl_Gl_Window_parent(const Fl_Gl_Window *self); unsigned int Fl_Gl_Window_selection_color(Fl_Gl_Window *); void Fl_Gl_Window_set_selection_color(Fl_Gl_Window *, unsigned int color); void Fl_Gl_Window_do_callback(Fl_Gl_Window *); int Fl_Gl_Window_inside(const Fl_Gl_Window *self, void *); void *Fl_Gl_Window_window(const Fl_Gl_Window *); void *Fl_Gl_Window_top_window(const Fl_Gl_Window *); int Fl_Gl_Window_takes_events(const Fl_Gl_Window *); void *Fl_Gl_Window_user_data(const Fl_Gl_Window *); int Fl_Gl_Window_take_focus(Fl_Gl_Window *self); void Fl_Gl_Window_set_visible_focus(Fl_Gl_Window *self); void Fl_Gl_Window_clear_visible_focus(Fl_Gl_Window *self); void Fl_Gl_Window_visible_focus(Fl_Gl_Window *self, int v); unsigned int Fl_Gl_Window_has_visible_focus(Fl_Gl_Window *self); void Fl_Gl_Window_set_user_data(Fl_Gl_Window *, void *data); void *Fl_Gl_Window_draw_data(const Fl_Gl_Window *self); void *Fl_Gl_Window_handle_data(const Fl_Gl_Window *self); void Fl_Gl_Window_set_draw_data(Fl_Gl_Window *self, void *data); void Fl_Gl_Window_set_handle_data(Fl_Gl_Window *self, void *data); unsigned char Fl_Gl_Window_damage(const Fl_Gl_Window *self); void Fl_Gl_Window_set_damage(Fl_Gl_Window *self, unsigned char flag); void Fl_Gl_Window_set_damage_area( Fl_Gl_Window *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Gl_Window_clear_damage(Fl_Gl_Window *self); void *Fl_Gl_Window_as_window(Fl_Gl_Window *self); void *Fl_Gl_Window_as_group(Fl_Gl_Window *self); void Fl_Gl_Window_set_deimage(Fl_Gl_Window *, void *); const void *Fl_Gl_Window_deimage(const Fl_Gl_Window *); void Fl_Gl_Window_set_callback(Fl_Gl_Window *, Fl_Callback *, void *); int Fl_Gl_Window_visible(const Fl_Gl_Window *self); int Fl_Gl_Window_visible_r(const Fl_Gl_Window *self); unsigned int Fl_Gl_Window_active(const Fl_Gl_Window *self); int Fl_Gl_Window_active_r(const Fl_Gl_Window *self); Fl_Callback *Fl_Gl_Window_callback(const Fl_Gl_Window *self); void Fl_Gl_Window_set_deletion_callback( Fl_Gl_Window *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Gl_Window *Fl_Gl_Window_from_dyn_ptr(Fl_Widget *ptr); Fl_Gl_Window *Fl_Gl_Window_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Gl_Window_super_draw(Fl_Widget *ptr, int flag); void Fl_Gl_Window_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Gl_Window_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Gl_Window_begin(Fl_Gl_Window *self); void Fl_Gl_Window_end(Fl_Gl_Window *self); int Fl_Gl_Window_find(Fl_Gl_Window *self, const void *); void Fl_Gl_Window_add(Fl_Gl_Window *self, void *); void Fl_Gl_Window_insert(Fl_Gl_Window *self, void *, int pos); void Fl_Gl_Window_remove(Fl_Gl_Window *self, void *wid); void Fl_Gl_Window_remove_by_index(Fl_Gl_Window *self, int idx); void Fl_Gl_Window_clear(Fl_Gl_Window *self); int Fl_Gl_Window_children(Fl_Gl_Window *self); Fl_Widget *Fl_Gl_Window_child(Fl_Gl_Window *, int index); void Fl_Gl_Window_resizable(Fl_Gl_Window *self, void *); void Fl_Gl_Window_set_clip_children(Fl_Gl_Window *self, int c); int Fl_Gl_Window_clip_children(Fl_Gl_Window *self); void Fl_Gl_Window_init_sizes(Fl_Gl_Window *self); void Fl_Gl_Window_draw_child(const Fl_Gl_Window *self, Fl_Widget *w); void Fl_Gl_Window_update_child(const Fl_Gl_Window *self, Fl_Widget *w); void Fl_Gl_Window_draw_outside_label(const Fl_Gl_Window *self, const Fl_Widget *w); void Fl_Gl_Window_draw_children(Fl_Gl_Window *self);

void Fl_Gl_Window_make_modal(Fl_Gl_Window *, unsigned int boolean); void Fl_Gl_Window_fullscreen(Fl_Gl_Window *, unsigned int boolean); void Fl_Gl_Window_make_current(Fl_Gl_Window *); void Fl_Gl_Window_set_icon(Fl_Gl_Window *, const void *); void *Fl_Gl_Window_icon(const Fl_Gl_Window *); void Fl_Gl_Window_set_cursor(Fl_Gl_Window *self, int cursor); int Fl_Gl_Window_shown(Fl_Gl_Window *self); void *Fl_Gl_Window_raw_handle(const Fl_Gl_Window *w); void Fl_Gl_Window_set_border(Fl_Gl_Window *, int flag); int Fl_Gl_Window_border(const Fl_Gl_Window *); void *Fl_Gl_Window_region(const Fl_Gl_Window *self); void Fl_Gl_Window_set_region(Fl_Gl_Window *self, void *r); void Fl_Gl_Window_iconize(Fl_Gl_Window *self); unsigned int Fl_Gl_Window_fullscreen_active(const Fl_Gl_Window *self); void Fl_Gl_Window_free_position(Fl_Gl_Window *self); int Fl_Gl_Window_decorated_w(const Fl_Gl_Window *self); int Fl_Gl_Window_decorated_h(const Fl_Gl_Window *self); void Fl_Gl_Window_size_range(Fl_Gl_Window *self, int, int, int, int); void Fl_Gl_Window_hotspot(Fl_Gl_Window *self, Fl_Widget *wid); void Fl_Gl_Window_set_shape(Fl_Gl_Window *self, const void *image); const void *Fl_Gl_Window_shape(Fl_Gl_Window *self); int Fl_Gl_Window_x_root(const Fl_Gl_Window *self); int Fl_Gl_Window_y_root(const Fl_Gl_Window *self); void Fl_Gl_Window_set_cursor_image( Fl_Gl_Window *self, const void *image, int hot_x, int hot_y ); void Fl_Gl_Window_default_cursor(Fl_Gl_Window *self, int cursor); int Fl_Gl_Window_screen_num(Fl_Gl_Window *); void Fl_Gl_Window_set_screen_num(Fl_Gl_Window *, int screen_num); void Fl_Gl_Window_wait_for_expose(Fl_Gl_Window *); void Fl_Gl_Window_set_alpha(Fl_Gl_Window *self, unsigned char val); unsigned char Fl_Gl_Window_alpha(const Fl_Gl_Window *self); void Fl_Gl_Window_force_position(Fl_Gl_Window *self, int flag); const char *Fl_Gl_Window_default_xclass(void); const char *Fl_Gl_Window_xclass(const Fl_Gl_Window *self); void Fl_Gl_Window_set_default_xclass(const char *s); void Fl_Gl_Window_set_xclass(Fl_Gl_Window *self, const char *s); void Fl_Gl_Window_clear_modal_states(Fl_Gl_Window *self); void Fl_Gl_Window_set_override(Fl_Gl_Window *); int Fl_Gl_Window_override(const Fl_Gl_Window *); const char *Fl_Gl_Window_icon_label(const Fl_Gl_Window *); void Fl_Gl_Window_set_icon_label(Fl_Gl_Window *, const char *); void Fl_Gl_Window_set_icons(Fl_Gl_Window *w, const void *images[], int length); void Fl_Gl_Window_maximize(Fl_Gl_Window *w); void Fl_Gl_Window_un_maximize(Fl_Gl_Window *w); unsigned int Fl_Gl_Window_maximize_active(const Fl_Gl_Window *w);

void Fl_Gl_Window_flush(Fl_Gl_Window *self);

char Fl_Gl_Window_valid(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_valid(Fl_Gl_Window *self, char v);

char Fl_Gl_Window_context_valid(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_context_valid(Fl_Gl_Window *self, char v);

int Fl_Gl_Window_can_do(Fl_Gl_Window *self);

void *Fl_Gl_Window_context(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_context(Fl_Gl_Window *self, void *ctx, int destroy_flag);

void Fl_Gl_Window_swap_buffers(Fl_Gl_Window *self);

void Fl_Gl_Window_set_swap_interval(Fl_Gl_Window *self, int frames);

int Fl_Gl_Window_swap_interval(const Fl_Gl_Window *self);

void Fl_Gl_Window_ortho(Fl_Gl_Window *self);

int Fl_Gl_Window_can_do_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_redraw_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_hide_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_make_overlay_current(Fl_Gl_Window *self);

float Fl_Gl_Window_pixels_per_unit(Fl_Gl_Window *self);

int Fl_Gl_Window_pixel_w(Fl_Gl_Window *self);

int Fl_Gl_Window_pixel_h(Fl_Gl_Window *self);

int Fl_Gl_Window_mode(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_mode(Fl_Gl_Window *self, int mode);

void *Fl_Gl_Window_get_proc_address(Fl_Gl_Window *self, const char *s);

typedef struct Fl_Glut_Window Fl_Glut_Window; Fl_Glut_Window *Fl_Glut_Window_new( int x, int y, int width, int height, const char *title ); int Fl_Glut_Window_x(Fl_Glut_Window *); int Fl_Glut_Window_y(Fl_Glut_Window *); int Fl_Glut_Window_width(Fl_Glut_Window *); int Fl_Glut_Window_height(Fl_Glut_Window *); const char *Fl_Glut_Window_label(Fl_Glut_Window *); void Fl_Glut_Window_set_label(Fl_Glut_Window *, const char *title); void Fl_Glut_Window_redraw(Fl_Glut_Window *); void Fl_Glut_Window_show(Fl_Glut_Window *); void Fl_Glut_Window_hide(Fl_Glut_Window *); void Fl_Glut_Window_activate(Fl_Glut_Window *); void Fl_Glut_Window_deactivate(Fl_Glut_Window *); void Fl_Glut_Window_redraw_label(Fl_Glut_Window *); void Fl_Glut_Window_resize(Fl_Glut_Window *, int x, int y, int width, int height); void Fl_Glut_Window_widget_resize( Fl_Glut_Window *, int x, int y, int width, int height ); const char *Fl_Glut_Window_tooltip(Fl_Glut_Window *); void Fl_Glut_Window_set_tooltip(Fl_Glut_Window *, const char *txt); int Fl_Glut_Window_get_type(Fl_Glut_Window *); void Fl_Glut_Window_set_type(Fl_Glut_Window *, int typ); unsigned int Fl_Glut_Window_color(Fl_Glut_Window *); void Fl_Glut_Window_set_color(Fl_Glut_Window *, unsigned int color); void Fl_Glut_Window_measure_label(const Fl_Glut_Window *, int *, int *); unsigned int Fl_Glut_Window_label_color(Fl_Glut_Window *); void Fl_Glut_Window_set_label_color(Fl_Glut_Window *, unsigned int color); int Fl_Glut_Window_label_font(Fl_Glut_Window *); void Fl_Glut_Window_set_label_font(Fl_Glut_Window *, int font); int Fl_Glut_Window_label_size(Fl_Glut_Window *); void Fl_Glut_Window_set_label_size(Fl_Glut_Window *, int sz); int Fl_Glut_Window_label_type(Fl_Glut_Window *); void Fl_Glut_Window_set_label_type(Fl_Glut_Window *, int typ); int Fl_Glut_Window_box(Fl_Glut_Window *); void Fl_Glut_Window_set_box(Fl_Glut_Window *, int typ); int Fl_Glut_Window_changed(Fl_Glut_Window *); void Fl_Glut_Window_set_changed(Fl_Glut_Window *); void Fl_Glut_Window_clear_changed(Fl_Glut_Window *); int Fl_Glut_Window_align(Fl_Glut_Window *); void Fl_Glut_Window_set_align(Fl_Glut_Window *, int typ); void Fl_Glut_Window_delete(Fl_Glut_Window *); void Fl_Glut_Window_set_image(Fl_Glut_Window *, void *); void Fl_Glut_Window_handle( Fl_Glut_Window *self, custom_handler_callback cb, void *data ); int Fl_Glut_Window_handle_event(Fl_Glut_Window *self, int event); void Fl_Glut_Window_draw(Fl_Glut_Window *self, custom_draw_callback cb, void *data); void Fl_Glut_Window_resize_callback( Fl_Glut_Window *self, void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *), void *data ); void Fl_Glut_Window_set_when(Fl_Glut_Window *, int); int Fl_Glut_Window_when(const Fl_Glut_Window *); const void *Fl_Glut_Window_image(const Fl_Glut_Window *); void *Fl_Glut_Window_parent(const Fl_Glut_Window *self); unsigned int Fl_Glut_Window_selection_color(Fl_Glut_Window *); void Fl_Glut_Window_set_selection_color(Fl_Glut_Window *, unsigned int color); void Fl_Glut_Window_do_callback(Fl_Glut_Window *); int Fl_Glut_Window_inside(const Fl_Glut_Window *self, void *); void *Fl_Glut_Window_window(const Fl_Glut_Window *); void *Fl_Glut_Window_top_window(const Fl_Glut_Window *); int Fl_Glut_Window_takes_events(const Fl_Glut_Window *); void *Fl_Glut_Window_user_data(const Fl_Glut_Window *); int Fl_Glut_Window_take_focus(Fl_Glut_Window *self); void Fl_Glut_Window_set_visible_focus(Fl_Glut_Window *self); void Fl_Glut_Window_clear_visible_focus(Fl_Glut_Window *self); void Fl_Glut_Window_visible_focus(Fl_Glut_Window *self, int v); unsigned int Fl_Glut_Window_has_visible_focus(Fl_Glut_Window *self); void Fl_Glut_Window_set_user_data(Fl_Glut_Window *, void *data); void *Fl_Glut_Window_draw_data(const Fl_Glut_Window *self); void *Fl_Glut_Window_handle_data(const Fl_Glut_Window *self); void Fl_Glut_Window_set_draw_data(Fl_Glut_Window *self, void *data); void Fl_Glut_Window_set_handle_data(Fl_Glut_Window *self, void *data); unsigned char Fl_Glut_Window_damage(const Fl_Glut_Window *self); void Fl_Glut_Window_set_damage(Fl_Glut_Window *self, unsigned char flag); void Fl_Glut_Window_set_damage_area( Fl_Glut_Window *self, unsigned char flag, int x, int y, int w, int h ); void Fl_Glut_Window_clear_damage(Fl_Glut_Window *self); void *Fl_Glut_Window_as_window(Fl_Glut_Window *self); void *Fl_Glut_Window_as_group(Fl_Glut_Window *self); void Fl_Glut_Window_set_deimage(Fl_Glut_Window *, void *); const void *Fl_Glut_Window_deimage(const Fl_Glut_Window *); void Fl_Glut_Window_set_callback(Fl_Glut_Window *, Fl_Callback *, void *); int Fl_Glut_Window_visible(const Fl_Glut_Window *self); int Fl_Glut_Window_visible_r(const Fl_Glut_Window *self); unsigned int Fl_Glut_Window_active(const Fl_Glut_Window *self); int Fl_Glut_Window_active_r(const Fl_Glut_Window *self); Fl_Callback *Fl_Glut_Window_callback(const Fl_Glut_Window *self); void Fl_Glut_Window_set_deletion_callback( Fl_Glut_Window *self, void (*)(Fl_Widget *, void *), void *data ); Fl_Glut_Window *Fl_Glut_Window_from_dyn_ptr(Fl_Widget *ptr); Fl_Glut_Window *Fl_Glut_Window_from_derived_dyn_ptr(Fl_Widget *ptr); void Fl_Glut_Window_super_draw(Fl_Widget *ptr, int flag); void Fl_Glut_Window_super_draw_first(Fl_Widget *ptr, int flag); void Fl_Glut_Window_super_handle_first(Fl_Widget *ptr, int flag);

void Fl_Glut_Window_begin(Fl_Glut_Window *self); void Fl_Glut_Window_end(Fl_Glut_Window *self); int Fl_Glut_Window_find(Fl_Glut_Window *self, const void *); void Fl_Glut_Window_add(Fl_Glut_Window *self, void *); void Fl_Glut_Window_insert(Fl_Glut_Window *self, void *, int pos); void Fl_Glut_Window_remove(Fl_Glut_Window *self, void *wid); void Fl_Glut_Window_remove_by_index(Fl_Glut_Window *self, int idx); void Fl_Glut_Window_clear(Fl_Glut_Window *self); int Fl_Glut_Window_children(Fl_Glut_Window *self); Fl_Widget *Fl_Glut_Window_child(Fl_Glut_Window *, int index); void Fl_Glut_Window_resizable(Fl_Glut_Window *self, void *); void Fl_Glut_Window_set_clip_children(Fl_Glut_Window *self, int c); int Fl_Glut_Window_clip_children(Fl_Glut_Window *self); void Fl_Glut_Window_init_sizes(Fl_Glut_Window *self); void Fl_Glut_Window_draw_child(const Fl_Glut_Window *self, Fl_Widget *w); void Fl_Glut_Window_update_child(const Fl_Glut_Window *self, Fl_Widget *w); void Fl_Glut_Window_draw_outside_label(const Fl_Glut_Window *self, const Fl_Widget *w); void Fl_Glut_Window_draw_children(Fl_Glut_Window *self);

void Fl_Glut_Window_make_modal(Fl_Glut_Window *, unsigned int boolean); void Fl_Glut_Window_fullscreen(Fl_Glut_Window *, unsigned int boolean); void Fl_Glut_Window_make_current(Fl_Glut_Window *); void Fl_Glut_Window_set_icon(Fl_Glut_Window *, const void *); void *Fl_Glut_Window_icon(const Fl_Glut_Window *); void Fl_Glut_Window_set_cursor(Fl_Glut_Window *self, int cursor); int Fl_Glut_Window_shown(Fl_Glut_Window *self); void *Fl_Glut_Window_raw_handle(const Fl_Glut_Window *w); void Fl_Glut_Window_set_border(Fl_Glut_Window *, int flag); int Fl_Glut_Window_border(const Fl_Glut_Window *); void *Fl_Glut_Window_region(const Fl_Glut_Window *self); void Fl_Glut_Window_set_region(Fl_Glut_Window *self, void *r); void Fl_Glut_Window_iconize(Fl_Glut_Window *self); unsigned int Fl_Glut_Window_fullscreen_active(const Fl_Glut_Window *self); void Fl_Glut_Window_free_position(Fl_Glut_Window *self); int Fl_Glut_Window_decorated_w(const Fl_Glut_Window *self); int Fl_Glut_Window_decorated_h(const Fl_Glut_Window *self); void Fl_Glut_Window_size_range(Fl_Glut_Window *self, int, int, int, int); void Fl_Glut_Window_hotspot(Fl_Glut_Window *self, Fl_Widget *wid); void Fl_Glut_Window_set_shape(Fl_Glut_Window *self, const void *image); const void *Fl_Glut_Window_shape(Fl_Glut_Window *self); int Fl_Glut_Window_x_root(const Fl_Glut_Window *self); int Fl_Glut_Window_y_root(const Fl_Glut_Window *self); void Fl_Glut_Window_set_cursor_image( Fl_Glut_Window *self, const void *image, int hot_x, int hot_y ); void Fl_Glut_Window_default_cursor(Fl_Glut_Window *self, int cursor); int Fl_Glut_Window_screen_num(Fl_Glut_Window *); void Fl_Glut_Window_set_screen_num(Fl_Glut_Window *, int screen_num); void Fl_Glut_Window_wait_for_expose(Fl_Glut_Window *); void Fl_Glut_Window_set_alpha(Fl_Glut_Window *self, unsigned char val); unsigned char Fl_Glut_Window_alpha(const Fl_Glut_Window *self); void Fl_Glut_Window_force_position(Fl_Glut_Window *self, int flag); const char *Fl_Glut_Window_default_xclass(void); const char *Fl_Glut_Window_xclass(const Fl_Glut_Window *self); void Fl_Glut_Window_set_default_xclass(const char *s); void Fl_Glut_Window_set_xclass(Fl_Glut_Window *self, const char *s); void Fl_Glut_Window_clear_modal_states(Fl_Glut_Window *self); void Fl_Glut_Window_set_override(Fl_Glut_Window *); int Fl_Glut_Window_override(const Fl_Glut_Window *); const char *Fl_Glut_Window_icon_label(const Fl_Glut_Window *); void Fl_Glut_Window_set_icon_label(Fl_Glut_Window *, const char *); void Fl_Glut_Window_set_icons(Fl_Glut_Window *w, const void *images[], int length); void Fl_Glut_Window_maximize(Fl_Glut_Window *w); void Fl_Glut_Window_un_maximize(Fl_Glut_Window *w); unsigned int Fl_Glut_Window_maximize_active(const Fl_Glut_Window *w);

void Fl_Glut_Window_flush(Fl_Glut_Window *self);

char Fl_Glut_Window_valid(const Fl_Glut_Window *self);

void Fl_Glut_Window_set_valid(Fl_Glut_Window *self, char v);

char Fl_Glut_Window_context_valid(const Fl_Glut_Window *self);

void Fl_Glut_Window_set_context_valid(Fl_Glut_Window *self, char v);

int Fl_Glut_Window_can_do(Fl_Glut_Window *self);

void *Fl_Glut_Window_context(const Fl_Glut_Window *self);

void Fl_Glut_Window_set_context(
    Fl_Glut_Window *self, void *ctx, int destroy_flag
);

void Fl_Glut_Window_swap_buffers(Fl_Glut_Window *self);

void Fl_Glut_Window_set_swap_interval(Fl_Glut_Window *self, int frames);

int Fl_Glut_Window_swap_interval(const Fl_Glut_Window *self);

void Fl_Glut_Window_ortho(Fl_Glut_Window *self);

int Fl_Glut_Window_can_do_overlay(Fl_Glut_Window *self);

void Fl_Glut_Window_redraw_overlay(Fl_Glut_Window *self);

void Fl_Glut_Window_hide_overlay(Fl_Glut_Window *self);

void Fl_Glut_Window_make_overlay_current(Fl_Glut_Window *self);

float Fl_Glut_Window_pixels_per_unit(Fl_Glut_Window *self);

int Fl_Glut_Window_pixel_w(Fl_Glut_Window *self);

int Fl_Glut_Window_pixel_h(Fl_Glut_Window *self);

int Fl_Glut_Window_mode(const Fl_Glut_Window *self);

void Fl_Glut_Window_set_mode(Fl_Glut_Window *self, int mode);

void *Fl_Glut_Window_get_proc_address(Fl_Glut_Window *self, const char *s);
