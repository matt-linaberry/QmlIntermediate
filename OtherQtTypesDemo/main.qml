import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("String Date and Time")

    property string mValue: "Clicked %1, double is %2"
    property int clickCount: 0

    Connections {
        target: CppClass
        onSendDateTime: {
            console.log("Rec'd date time " + datetimeparam);
            console.log("Year: " + datetimeparam.getFullYear());
            console.log("...", datetimeparam.toGMTString());
        }

        onSendTime: {
            console.log("Received time: " + timeparam);
        }
    }

    Button {
        id: mButton
        text: "Click me!"
        onClicked: {
            //CppClass.cppSlot();
            var date = new Date();
            CppClass.timeSlot(date);
            CppClass.dateTimeSlot(date);
            clickCount++
            mButton.text = mValue.arg(clickCount).arg(clickCount * 2)
        }
    }

    Component.onCompleted: {
        var mDate = new Date()

        // toLocaleDateString
        print(mDate.toLocaleDateString())
        print(mDate.toLocaleDateString(Qt.locale("fr_FR")))
        print(mDate.toLocaleDateString(Qt.locale("zh_CN"), "yyyy-MMM-dd"))

        print(mDate.toLocaleString(Qt.locale("en_US"), "MM dd yyyy HH:mm:ss"))

        print(mDate.toLocaleTimeString(Qt.locale("en_US"), "HH:mm:ss"));

        var myDate = Date.fromLocaleDateString(Qt.locale("en_US"), "2018-09-17", "yyyy-MM-dd")
        print("Date is " + myDate)


    }
}
