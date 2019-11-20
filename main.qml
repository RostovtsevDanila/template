import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
import mymodule 1.0

Window {
	visible: true
	width: 640
	height: 480
	title: qsTr("Hello World")

    Button {
        anchors.centerIn: parent
        text: "Click me"
        onClicked: myClass.printWord("My first qml and cpp!!!")
    }

    TemplateClass {id: myClass}
}
