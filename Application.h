#ifndef APPLICATION_H
#define APPLICATION_H

#include <gtk/gtk.h>
#include <string>

class Application {
public:
  Application();
  void run();
  ~Application();

public:
  static void onWindowDestroy(GtkWidget *widget, gpointer data);
};

#endif // APPLICATION_H
