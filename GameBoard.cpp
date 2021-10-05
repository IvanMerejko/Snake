#include "GameBoard.h"

namespace snake
{
GameBoard::GameBoard(const GameBoardContext& context)
   : m_context{context}
{
}

int GameBoard::rowCount(const QModelIndex&) const
{
   return 10;
}

QVariant GameBoard::data(const QModelIndex&, int) const
{
   return {};
}

void GameBoard::Reconfigure(const GameBoardContext& context)
{
   m_context = context;
}

}

