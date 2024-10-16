#include "Application.h"
#include "MainWindow.h"

int main(int argc, char *argv[]) {
  gtk_init(&argc, &argv);

  Application application;
  MainWindow mainWindow;
  mainWindow.show();

  application.run();
  return 0;
}
