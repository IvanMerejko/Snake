#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "Windows/MainWindow.h"

int main(int argc, char *argv[])
{
   QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

   QGuiApplication app(argc, argv);
   snake::MainWindow mainWindow{"qrc:/main.qml"};

   return app.exec();
}
