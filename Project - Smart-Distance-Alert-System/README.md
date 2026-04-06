SMART DISTANCE ALERT SYSTEM

OBJECTIVE:
To detect distance using an ultrasonic sensor and provide feedback using RGB LED and buzzer.

COMPONENTS USED:
Arduino UNO,
Ultrasonic Sensor,
RGB LED,
Buzzer,
Resistors,
Connecting Wires

WORKING:
The ultrasonic sensor sends a trigger pulse and waits for the echo signal to return.
The duration of this echo is measured using pulseIn().
Using the speed of sound, the distance is calculated.
Based on the measured distance:
If the object is far, the green LED glows.
If the object is at a moderate distance, both red and green LEDs glow (yellow indication), and the buzzer beeps intermittently.
If the object is very close, the red LED glows and the buzzer sounds continuously.
The buzzer delay is dynamically adjusted using the map() function, so the beeping becomes faster as the object gets closer.

OUTPUT:
Visual and sound alerts based on object distance.
