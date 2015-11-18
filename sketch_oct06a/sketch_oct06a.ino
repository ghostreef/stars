const int motion = 13; 

void setup() { 
  Serial.begin(9600);
  
  for(int i = 2; i < 13; i++) {
    pinMode(i, OUTPUT);  
  }

  pinMode(motion, INPUT);
}

void loop() {  
  // need 2d array of random number, [[output pin, duration],...]
  int randNumber = random(300);

  int sensorVal = digitalRead(motion);

  if(motion == HIGH) {
    
  }
}
