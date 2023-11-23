import QtQuick 2.15

Item {
	id: root
	width: 100
	height: 100
	property color color: "transparent"
	Rectangle {
		anchors.fill: parent
		color: root.color
	}
}
