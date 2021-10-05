import QtQuick 2.0

GridView
{
    id: root
    model: GameBoardModel
    cellHeight: height / 4
    cellWidth: width / 4

    delegate: GameBoardElement
    {
        width: root.cellWidth
        height: root.cellHeight
    }

}
