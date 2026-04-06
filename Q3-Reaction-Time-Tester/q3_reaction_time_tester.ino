int led = 12;
int pB = 2;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pB, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(led, LOW);
  
  int delayTime = random(1000, 7000);
  unsigned long startWait = millis();
  
  while(millis() - startWait < delayTime)
  {
    if(digitalRead(pB) == LOW)
    {
      Serial.println("Too early! The LED is not on yet.");
      delay(200);
      return;
    }
  }
  
  digitalWrite(led, HIGH);
  unsigned long startTime = millis();
  
  while(1)
  {
    if(digitalRead(pB) == LOW){
      unsigned long reactionTime = millis() - startTime;
      digitalWrite(led, LOW);
      Serial.println(reactionTime);
      break;
    }
  }
  delay(200);
}