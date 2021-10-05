#include "MainWindow.h"
#include <QQmlContext>

namespace snake
{

namespace
{
constexpr auto GameBoardModelStr = "GameBoardModel";
constexpr auto WidthStr = "width";
constexpr auto HeightStr = "height";
}

MainWindow::MainWindow(const QString& fileName)
   : m_gameBoard{GameBoardPtr::create(GameBoardContext{0, 0})}
{
   initializeRootContext();
   load(fileName);
   initializeWindowPtr();
   createGameBoard();
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

void MainWindow::initializeRootContext()
{
   rootContext()->setContextProperty(GameBoardModelStr, m_gameBoard.get());
}

void MainWindow::createGameBoard() noexcept
{
   if (!m_mainWindow)
   {
      return;
   }

   const auto windowWidth = m_mainWindow->property(WidthStr).toInt();
   const auto windowHeight = m_mainWindow->property(HeightStr).toInt();
   m_gameBoard->Reconfigure({windowWidth, windowHeight});
}

}
