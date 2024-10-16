#include "Application.h"
#include "MainWindow.h"

Application::Application() {
  // Initialization if needed
}

void Application::run() { gtk_main(); }

Application::~Application() {
  // Cleanup if needed
}

void Application::onWindowDestroy(GtkWidget *widget, gpointer data) {
  gtk_main_quit();
}
