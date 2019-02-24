import QtQuick 2.12
import QtQuick.Window 2.12
import Timing 1.0
import People 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Person {
        name: "Johnson"
        age: 33

        Timer.running: true
        Timer.interval: 2000
        Timer.onTimerOut: {
            console.log("Timer out for person!!!")
        }
    }

    Rectangle {
        id: mRect
        width: 200
        height: 200
        color: "yellowgreen"
        Timer.running: true
        Timer.interval: 5000
        Timer.onTimerOut: {
            console.log("Timer out for rect!!!")
        }
    }
}
