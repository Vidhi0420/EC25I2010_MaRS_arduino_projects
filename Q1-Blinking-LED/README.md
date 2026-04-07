BLINKING LEDs WITH DIFFERENT TIME INTERVALS

OBJECTIVE:
To build a circuit with 3 LEDs, where the LEDs blink at time intervals of 500ms, 1000ms, 1500ms.

COMPONENTS USED:
Arduino Uno,
LEDs,
Resistors,
Connecting Wires.

WORKING:
Each LED is connected to a different digital pin of the Arduino.
We used millis() function to track time independently for each LED.
By comparing the current time with previously recorded timestamps,each LED is toggled ON or OFF at its own interval (500ms, 1000ms, 1500ms).
This allows the LEDs to blink simultaneously and not by adding up the delay.

OUTPUT:
The LEDs blink independently at their respective intervals.

TinkerCAD Link: https://www.tinkercad.com/things/lOx3UodjXUJ-blinking-led/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=odkoOeKxCkcvRzDEx2cGcPOWp5KpEuyF8hn5JIVGCWE
