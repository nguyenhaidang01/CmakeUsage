import QtQuick 2.15
import QtQuick.Window 2.15
import "Module/"

Window {
	width: 640
	height: 480
	visible: true
	title: qsTr("Hello World")
	MyModule {
		id: module
		anchors.centerIn: parent
	}
}
