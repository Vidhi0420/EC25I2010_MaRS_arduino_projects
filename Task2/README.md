Task - 2 : Changing the direction of a motor using a pushbutton and controlling the speed using a regulator

Components used:

Arduino Uno, 
DC Motor, 
Pushbutton, 
Potentiometer, 
L293D Motor Driver, 
Connecting Wires.

Connections:

L293D:
The Enable 1 & 2 pin is connected to pin 11. Input1 is connected to pin 10. Input2 is connected to pin 9. Output1 is connected to Terminal 1 of the motor.Output2 is connected to Terminal 2 of the motor. The ground pins are connected to ground. The power1 pin is connected to 5V.

Pushbutton:
Among the 4 pins, one of the pin is connected to digital pin 7 and the pin opposite o that is grounded.

Potentiometer:
Terminal 1 is grounded. The middle pin is connected to the analog pin 0. The terminal 2 is connected to 5V.

Working:

The potentiometer outputs a variable voltage, 
Arduino reads this value via analog pin A0, 
It converts the value into PWM (0–255) by dividing it by 4.

PWM is sent to the L293D enable pin using analogWrite(), 
The motor speed adjusts accordingly.

The pushbutton (pin 7) is read as a digital input. If it is HIGH, the motor rotates in one direction but when it is LOW, the motor rotates in the opposite direction.

The status LED (pin 13) stays ON to indicate the system is running.
