int r = 9;
int b = 10;
int g = 11;
int led = 6;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  int value = analogRead(A0);
  int x = value / 4;
  
  int rVal = x;
  int gVal = 255 - x;
  float bVal = min(255, x*1.5);
  
  analogWrite(r, rVal);
  analogWrite(g, gVal);
  analogWrite(b, bVal);
  
  int delayTime = map(value, 0, 1023, 100, 1000);

  digitalWrite(led, HIGH);
  delay(delayTime);
  
  digitalWrite(led, LOW);
  delay(delayTime);
}