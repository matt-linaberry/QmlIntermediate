import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Call JS from C++")

    function qmlJSFunction(param) {
        console.log("QML is talking! param passed: " + param + " Going back home now");

        return "This is QML, so back to you C++";
    }

    Button {
        id: mButton
        text: "Call QML function from C++"
        onClicked: {
            QmlJsCaller.cppMethod("qml is calling!");
        }
    }
}
