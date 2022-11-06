import QtQuick 2.15
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.5

//import ColorsQB 1.0

RowLayout {

    property QtObject rootAp

    spacing: 10

    RoundTool {
        text: "<"
    }

    RoundTool {
        text: ">"
        onClicked: {
            rootAp.getPage(urlText.text)
        }
    }

    Rectangle {
        color: "transparent"
        border.color: "black"
        radius: 5

        TextInput {
            id: urlText
            text: "http://example.org"
            color: "black"
            anchors.left: parent.left
            anchors.topMargin: 5
            anchors.leftMargin: 15
            anchors.fill: parent
            onTextChanged: {
                forceActiveFocus()
            }
        }

        Layout.fillWidth: true
        Layout.fillHeight: true
    }


    component RoundTool : ToolButton {
        id: arr
        background: Rectangle {
            radius: 5
            color: arr.hovered ? arr.pressed ? "lightblue" : "gray" : "transparent"
        }
    }
}
