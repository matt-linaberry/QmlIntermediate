import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("QProperty Demo")

    Column {
        spacing: 20
        Text {
            id: titleId
            text: Movie.title
            font.pointSize: 20
            width: 500
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            id: mainCharacter
            text: Movie.mainCharacter
            font.pointSize: 20
            width: 500
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter

            TextField {
                id : titleTextField
                width : 300
            }

            Button {
                width: 200
                id: button1
                text : "Change Title"
                onClicked: {
                    Movie.title = titleTextField.text
                }

            }
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter

            TextField {
                id : mainCharacterTextField
                width : 300
            }

            Button {
                width: 200
                id: button2
                text : "Change Main Char"
                onClicked: {
                    Movie.mainCharacter = mainCharacterTextField.text
                }

            }
        }
    }
}
