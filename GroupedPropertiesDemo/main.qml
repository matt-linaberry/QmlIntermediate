import QtQuick 2.12
import QtQuick.Window 2.12
import self.matt.football 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    FootballTeam {
        id: team1
        title: "Dayton Sports"
        coach: "Coach Name"
        captain: Striker {
            name: "Captain"
            position: "Mid fielder"
            playing: true
            details {height: 178; weight: 76; speed: 76}
        }
        players: [
            Defender {
                name: "Player1"
                position: "Forward"
                playing: true
                details {height: 210; weight: 76; speed: 76}
            },Defender {
                name: "Player2"
                position: "Goalkeeper"
                playing: true
                details {height: 178; weight: 76; speed: 55}
            },Striker {
                name: "Player3"
                position: "Defensive Back"
                playing: true
                details.height: 100
                details.weight: 68
                details.speed: 99
            }, Defender {
                name: "Matt"
                position: "Forward"
                playing: false
            }

        ]
    }

    FootballTeam {
        id: team2
        title: "Kettering Sports"
        coach: "Coach Name"
        captain: Striker {
            name: "Captain"
            position: "Mid fielder"
            playing: true
        }
        Defender {
            name: "Player4"
            position: "Forward"
            playing: true
        }
        Defender {
            name: "Player5"
            position: "Goalkeeper"
            playing: true
        }
        Striker {
            name: "Player6"
            position: "Defensive Back"
            playing: true
        }
        Defender {
            name: "Matt2"
            position: "Forward"
            playing: false
        }
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
        //console.log("We have : " +team2.players.length + " players!")
        console.log(team1.players[0].details.height);
    }
}
