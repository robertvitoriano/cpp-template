#include "MainWindow.h"
#include "Application.h"

MainWindow::MainWindow() {
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "My Web Browser");
  gtk_window_set_default_size(GTK_WINDOW(window), 1920, 1200);

  vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
  gtk_container_add(GTK_CONTAINER(window), vbox);

  g_signal_connect(window, "destroy", G_CALLBACK(Application::onWindowDestroy),
                   nullptr);
}

GtkWidget *MainWindow::getWindow() { return window; }

void MainWindow::show() { gtk_widget_show_all(window); }
