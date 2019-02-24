import QtQuick 2.12
import QtQuick.Window 2.12
import self.matt.football 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    FootballTeam {
        id: "team1"
        title: "Dayton Sports"
        coach: "Coach Name"
        captain: Player {
            name: "Captain"
            position: "Mid fielder"
            playing: true
        }
        players: [
            Player {
                        name: "Player1"
                        position: "Forward"
                        playing: true
                    },Player {
                name: "Player2"
                position: "Goalkeeper"
                playing: true
            },Player {
                name: "Player3"
                position: "Defensive Back"
                playing: true
            }, Player {
                name: "Matt"
                position: "Forward"
                playing: false
            }

        ]
    }

    ListView {
        anchors.fill: parent
        model: team1.players
        delegate: Rectangle {
            width: parent.width
            height: 50
            border.width: 1
            border.color: "yellowgreen"
            color: "beige"
            Text {
                anchors.centerIn: parent
                text: name
                font.pointSize: 20
            }
        }
    }

    Component.onCompleted: {
        console.log("We have : " +team1.players.length + " players!")
    }
}
