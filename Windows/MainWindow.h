#pragma once
#include <QQmlApplicationEngine>
#include <QObject>
#include "Common/Types.h"

namespace snake
{
class MainWindow : public QQmlApplicationEngine
{
   Q_OBJECT
public:
   explicit MainWindow(const QString&);
private:
   QObjectPtr m_mainWindow;
};

}
