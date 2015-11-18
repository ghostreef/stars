const int motion = 13; 
int outputs[11];

void setup() { 
  Serial.begin(9600);
  
  for(int i = 2; i < 13; i++) {
    pinMode(i, OUTPUT);  
    outputs[i - 2] = i;
  }

  pinMode(motion, INPUT);
}

void loop() {  

  // how many pins to light up
  int m = random(1, 11);

  // knuth shuffle
  for(int i = 0; i < m; i++) {
    // get a new random index from the subset
    int index = random(0, 10 - i);

    // but the number in the back
    int temp = outputs[10 - i];
    outputs[10 - i] = outputs[index];
    outputs[index] = temp; 
  }

  int sensorVal = digitalRead(motion);

  // turn on leds  
  if(sensorVal == HIGH) {
    for(int i = 0; i < m; i++) {
      digitalWrite(outputs[i], HIGH);
    }
  }

  delay(2000);

  // turn off leds
  if(sensorVal == HIGH) {
    for(int i = 0; i < m; i++) {
      digitalWrite(outputs[i], LOW);
    }
  }
}
