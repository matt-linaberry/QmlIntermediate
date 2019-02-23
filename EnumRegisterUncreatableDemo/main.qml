import QtQuick 2.12
import QtQuick.Window 2.12
import self.matt.errorlevel 1.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Expose C++ enums")

    Component.onCompleted: {
        console.log(ErrorLevel.WARNING);
    }
}
