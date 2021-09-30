#include "MainWindow.h"
#include <ranges>

namespace snake
{

MainWindow::MainWindow(const QString& fileName)
{
   load(fileName);
}

void MainWindow::initializeWindowPtr()
{
   const auto list = rootObjects();
   const auto mainWindow = std::find_if(list.begin() , list.end() , [](const QObject* object)
   {
      return  object->objectName() == "mainWindow";
   });
   if(mainWindow != list.end())
   {
       m_mainWindow = std::make_unique<QObject>(*mainWindow);
   }
}

}
