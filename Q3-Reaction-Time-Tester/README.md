REACTION TIME TESTER

OBJECTIVE:
To measure human reaction time.

COMPONENTS USED:
Arduino Uno
LED
Push Button
Connecting Wires

WORKING:
The system waits for a random amount of time using a delay or timing logic.
After this delay, the LED turns ON, indicating the user should respond.
The time at which the LED turns ON is recorded using millis().
When the user presses the button, the current time is recorded again.
The reaction time is calculated as the difference between these two timestamps.
If the button is pressed before the LED turns ON, it is considered a false start and handled as an edge case.

OUTPUT:
Reaction time is printed when the button is pressed.
