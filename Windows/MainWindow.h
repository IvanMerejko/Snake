#pragma once
#include <QQmlApplicationEngine>
#include <QObject>
#include "Common/Types.h"
#include "GameBoard.h"

namespace snake
{
class MainWindow : public QQmlApplicationEngine
{
   Q_OBJECT
public:
   explicit MainWindow(const QString&);
private:
   void initializeWindowPtr();
   void initializeRootContext();
   void createGameBoard() noexcept;
private:
   QObjectPtr m_mainWindow;
   GameBoardPtr m_gameBoard;
};

}
