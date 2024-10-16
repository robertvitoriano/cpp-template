#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtk/gtk.h>

class MainWindow {
public:
  MainWindow();
  GtkWidget *getWindow();
  void show();

private:
  GtkWidget *window;
  GtkWidget *vbox;
};

#endif // MAIN_WINDOW_H
