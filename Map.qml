import QtQuick 2.0

GridView
{
    id: root
    model: 15
    cellHeight: height / 4
    cellWidth: width / 4

    delegate: MapElement
    {
        width: root.cellWidth
        height: root.cellHeight
    }

}
