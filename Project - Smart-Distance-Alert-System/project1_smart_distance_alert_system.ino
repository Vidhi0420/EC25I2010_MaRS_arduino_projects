int sigPin = 8;
int r = 7;
int b = 4;
int g = 2;
int buzzer = 12;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  long duration;
  int distance;
  
  pinMode(sigPin, OUTPUT);
  digitalWrite(sigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(sigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(sigPin, LOW);
  
  pinMode(sigPin, INPUT);
  duration = pulseIn(sigPin, HIGH);
  
  distance = duration * 0.0343 / 2;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if(distance <= 0 || distance > 400)
  {
    Serial.println("Out of range");
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);
    digitalWrite(b, LOW);
    digitalWrite(buzzer, LOW);
    return;
  }
  
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  
  int beepDelay = map(distance, 5, 30, 50, 500);
  
  if(distance > 20)
  {
    digitalWrite(g, HIGH);
    digitalWrite(buzzer, LOW);
  }
  else if(distance > 10)
  {
    digitalWrite(r, HIGH);
    digitalWrite(g, HIGH);
    
    digitalWrite(buzzer, HIGH);
    delay(beepDelay);
    
    digitalWrite(buzzer, LOW);
    delay(beepDelay);
  }
  else
  {
    digitalWrite(r, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(beepDelay);
    digitalWrite(buzzer, LOW);
    delay(beepDelay);
  }
  delay(100);
}