#pragma once
#include <QAbstractListModel>

namespace snake
{

struct GameBoardContext
{
   GameBoardContext(int boardHeight, int boardWidth)
      : boardHeight{boardHeight}
      , boardWidth{boardWidth}
   {}
   int boardHeight{0};
   int boardWidth{0};
};


class GameBoard : public QAbstractListModel
{
   Q_OBJECT
public:
   GameBoard(const GameBoardContext&);
   void Reconfigure(const GameBoardContext&);

public:
   int rowCount(const QModelIndex &) const override;
   QVariant data(const QModelIndex &, int) const override;
private:
   GameBoardContext m_context;
};

using GameBoardPtr = QSharedPointer<GameBoard>;

}
