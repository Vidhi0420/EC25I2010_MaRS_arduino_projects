unsigned long prev1 = 0;
unsigned long prev2 = 0;
unsigned long prev3 = 0;

int interval1 = 500;
int interval2 = 1000;
int interval3 = 1500;

bool state1 = LOW;
bool state2 = LOW;
bool state3 = LOW;

void setup(){
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  unsigned long current = millis();
  
  if(current - prev1 >= interval1){
    prev1 = current;
    state1 = !state1;
    digitalWrite(2, state1);
  }

  if (current - prev2 >= interval2) {
    prev2 = current;
    state2 = !state2;
    digitalWrite(4, state2);
  }

  if (current - prev3 >= interval3) {
    prev3 = current;
    state3 = !state3;
    digitalWrite(7, state3);
  }
}