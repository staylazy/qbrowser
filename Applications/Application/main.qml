import QtQuick 2.15
import QtQuick.Controls 2.5

import "qrc:/Controls" as CustomControls

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("qBrowser")

    CustomControls.MenuBar {
        id: men
        rootAp: rootApp
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 10
    }

    Label {
        text: rootApp.name
        wrapMode: Text.WordWrap
        anchors.top: men.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
    }


}
