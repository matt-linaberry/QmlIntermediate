import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Call C++ from QML")
    Column {
        spacing: 10
        Button {
            text: "Call C++ method"
            onClicked: {
                BWorker.regularMethod()
                BWorker.cppSlot()
            }
        }
        Rectangle {
            width: textToShowId.implicitWidth + 20
            height: 50
            color: "beige"
            Text {
                id: textToShowId
                text: BWorker.regularMethodWithReturn("John", 34)
            }
        }
    }

    Other {

    }
}
