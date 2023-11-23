import QtQuick 2.15
import "../Component"

Item {
	id: root
	width: 210
	height: 100

	property bool isCLick: false

	MyButton {
		id: but1
		color: isCLick? "red" : "blue"
		MouseArea{
			anchors.fill: parent
			onClicked: {
				isCLick = !isCLick
			}
		}
	}
	MyButton {
		id: but2
		anchors.left: but1.right
		anchors.leftMargin: 10
		color: isCLick? "blue" : "red"
		MouseArea{
			anchors.fill: parent
			onClicked: {
				isCLick = !isCLick
			}
		}
	}
}
