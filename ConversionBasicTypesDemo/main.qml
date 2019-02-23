import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Data conversion: basic types")

    Connections {
        target: CppClass
        onSendInt: {
            console.log("Received int " + param + " type is " + typeof param);
        }

        onSendDouble: {
            console.log("Received double " + doubleParam + " type is " + typeof doubleParam);

        }

        onSendBoolRealFloat: {
            console.log("Received bool " + boolParam + " type is " + typeof boolParam);
            console.log("Received real " + realParam + " type is " + typeof realParam);
            console.log("Received float " + floatParam + " type is " + typeof floatParam);

        }
    }

    Button {
        id: mButton
        text: "Click me"
        onClicked: {
            CppClass.cppSlot()
        }
    }
}
