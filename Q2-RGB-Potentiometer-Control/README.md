CONTROLLING COLOUR OF RGB LED AND BLINKING SPEED OF AN LED

OBJECTIVE:
Changing the colour of an RGB LED and controlling the speed of an LED using a potentiometer

COMPONENTS USED:
Arduino Uno,
RGB LED,
LED,
Potentiometer,
Resistors,
Connecting Wires.

WORKING:
The potentiometer acts as a variable resistor and provides an analog voltage input to the Arduino(connected to analog pin).
This value is read using the analogRead() function, which gives a range from 0 to 1023.
The obtained value is then mapped to PWM() values (0-255) using the map() function.
These PWM signals are sent to the RGB LED pins using analogWrite(), controlling the intensity of each colour channel.
Also the map() function decides the speed of toggling ON and OFF (blinking) of the normal LED.

OUTPUT:
Changing the potentiometer value changes the colour if the RGB LED as well as the speed of blinking of the normal LED.

TinkerCAD Link: https://www.tinkercad.com/things/3SgAG6wpNiY-rgb-and-blinking-speed-of-an-led/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=nS4u4tNIgt4uXMD6XBVUl7H1aYSz82qzSVMShX_w-hw
