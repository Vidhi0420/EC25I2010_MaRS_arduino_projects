Blinking LED with Different time intervals

OBJECTIVE:
To build a circuit with 3 LEDs, where the LEDs blink at time intervals of 500ms, 1000ms, 1500ms.

COMPONENTS USED:
Arduino Uno, LEDs, Resistors

WORKING:
Each LED is connected to a different digital pin of the Arduino.
We used millis() function to track time independently for each LED.
By comparing the current time with previously recorded timestamps,each LED is toggled ON or OFF at its own interval (500ms, 1000ms, 1500ms).
This allows the LEDs to blink simultaneously and not by adding up the delay.

OUTPUT:
The LEDs blink independently at their respective intervals.
