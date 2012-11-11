// Default empty project template
import bb.cascades 1.0

// creates one page with a label
Page {
    signal btnClickSignal()
    function updateHello(text) {helloID.text=text}//slot
    Container {
        layout: DockLayout {}
        Label {
            id: helloID
            text: qsTr("Hello World")
            textStyle.base: SystemDefaults.TextStyles.BigText
            verticalAlignment: VerticalAlignment.Center
            horizontalAlignment: HorizontalAlignment.Center
        }
        Button {
            text: "Hola"
            onClicked: {
                // señal agregada en el header HolaCascada.hpp
                btnClickSignal()
                //helloID.text="hola"
            }
        }
    }
}
