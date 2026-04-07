FIRE DETECTION AND ALERT SYSTEM


OBJECTIVE:
To detect fire using a temperature as well as a gas sensor and provide the alert using visual(LED) and audio(buzzer) alert systems.


COMPONENTS USED:
Arduino Uno,
TMP36 Temperature Sensor,
Gas Sensor,
LED,
Buzzer,
Connecting Wires.


WORKING:

Temperature measurement: The TMP36 temperature sensor provides an analog voltage proportional to the temperature which is read by the analogRead() function. The conversion formula is voltage = analogValue*(5.0/1023.0) and temperature(in celcius) = (voltage - 0.5)*100.

Gas Detection: The gas sensor provides an analog output depending on the concentration of combustible gases. A higher analog value indicates higher gas concentration.

Alert Logic: The Arduino continuously monitors temperature and gas readings. If temperature > 30°C or gas level exceeds 200, LED turn ON, and the buzzer beeps. Otherwise, the system is safe.


OUTPUT: LED glows and buzzer beeps when fire is detected. Serial Monitor always displays the time temperature and gas values.

TinkerCAD link: https://www.tinkercad.com/things/0NehYIyFbmZ/editel?returnTo=%2Fdashboard&sharecode=QsE_9cxaflTWDDRhHstaubTBbJ3H1nQAqXIJLdJr1Lo
