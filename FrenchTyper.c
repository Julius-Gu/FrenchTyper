/* Small GTK Programm that allows users to copy french symbols
 * to the clipboard by clicking on them.
 * Using GTK+ 3.0
 * can be compiled with 
 * gcc FrenchTyper.c -o FrenchTyper `pkg-config --libs --cflags gtk+-3.0`
 * 
 * Made by Julius Guthunz
 */


#include <gtk/gtk.h>

static void on_window_closed (GtkWidget *widget, gpointer data)
{
	gtk_main_quit ();
}

static void copy_to_clipboard(const gchar *text)
{
	GtkClipboard* clipboard = gtk_clipboard_get(GDK_SELECTION_CLIPBOARD);
	gtk_clipboard_set_text(clipboard, text, -1);
}

static void button_clicked (GtkWidget *widget, gpointer *data)
{	
	copy_to_clipboard(gtk_widget_get_name(widget));	
}

int main (int argc, char *argv[])
{
	int amount_of_buttons = 18;
	GtkWidget *window, *buttons[amount_of_buttons], *grid;

	gtk_init (&argc, &argv);
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	g_signal_connect (window, "destroy", G_CALLBACK(on_window_closed), NULL);
	/* Vertical Layout */
	grid = gtk_grid_new();

	/* Add buttons */
	buttons[0] = gtk_button_new_with_label("ù");
	gtk_widget_set_name(buttons[0], "ù");
	buttons[1] = gtk_button_new_with_label("û");
	gtk_widget_set_name(buttons[1], "û");
	buttons[2] = gtk_button_new_with_label("ü");
	gtk_widget_set_name(buttons[2], "ü");
	buttons[3] = gtk_button_new_with_label("ÿ");
	gtk_widget_set_name(buttons[3], "ÿ");
	buttons[4] = gtk_button_new_with_label("«");
	gtk_widget_set_name(buttons[4], "«");
	buttons[5] = gtk_button_new_with_label("»");
	gtk_widget_set_name(buttons[5], "»");
	buttons[6] = gtk_button_new_with_label("à");
	gtk_widget_set_name(buttons[6], "à");
	buttons[7] = gtk_button_new_with_label("â");
	gtk_widget_set_name(buttons[7], "â");
	buttons[8] = gtk_button_new_with_label("æ");
	gtk_widget_set_name(buttons[8], "æ");
	buttons[9] = gtk_button_new_with_label("ç");
	gtk_widget_set_name(buttons[9], "ç");
	buttons[10] = gtk_button_new_with_label("é");
	gtk_widget_set_name(buttons[10], "é");
	buttons[11] = gtk_button_new_with_label("è");
	gtk_widget_set_name(buttons[11], "è");
	buttons[12] = gtk_button_new_with_label("ê");
	gtk_widget_set_name(buttons[12], "ê");
	buttons[13] = gtk_button_new_with_label("ë");
	gtk_widget_set_name(buttons[13], "ë");
	buttons[14] = gtk_button_new_with_label("ï");
	gtk_widget_set_name(buttons[14], "ï");
	buttons[15] = gtk_button_new_with_label("î");
	gtk_widget_set_name(buttons[15], "î");
	buttons[16] = gtk_button_new_with_label("ô");
	gtk_widget_set_name(buttons[16], "ô");
	buttons[17] = gtk_button_new_with_label("œ");
	gtk_widget_set_name(buttons[17], "œ");
	
	/* connect signals and add to grid */
	for(int i=0;i<amount_of_buttons;i++) {
		gtk_grid_attach (GTK_GRID(grid), buttons[i], (i%3), (i/3), 1,1);
		g_signal_connect(buttons[i], "clicked", G_CALLBACK(button_clicked), NULL);
		gtk_widget_set_hexpand (buttons[i], TRUE);
		gtk_widget_set_vexpand (buttons[i], TRUE);
		gtk_widget_set_halign (buttons[i], GTK_ALIGN_FILL);
		gtk_widget_set_valign (buttons[i], GTK_ALIGN_FILL);
	}

	gtk_container_add (GTK_CONTAINER(window), grid);
	gtk_window_set_title (GTK_WINDOW(window), "French Typer");
	gtk_window_set_default_size(GTK_WINDOW(window), 90,180);
	gtk_widget_show_all (window);
	gtk_main ();

	return 0;
}