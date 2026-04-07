int led = 8;
int buzzer = 7;
int gasPin = A0;
int tempPin = A1;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int tempReading = analogRead(tempPin);
  float V = tempReading*(5.0/1023.0);
  float temp = (V - 0.5)*100;
  
  int gasReading = analogRead(gasPin);
  
  Serial.print("TEMPERATURE: ");
  Serial.print(temp);
  Serial.print("\n");
  Serial.print("CONCENTRATION OF GAS: ");
  Serial.println(gasReading);
  
  if(temp > 30 || gasReading > 200)
  {
    digitalWrite(led, HIGH);
    
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
    delay(200);
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }
  Serial.print("\n");
  delay(100);
}