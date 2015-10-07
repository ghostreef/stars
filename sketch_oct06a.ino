void setup() { 
  Serial.begin(9600);
  
  for(int i = 2; i < 14; i++) {
    pinMode(i, OUTPUT);  
  }
}

void loop() {  
  randNumber = random(300);
  
}
