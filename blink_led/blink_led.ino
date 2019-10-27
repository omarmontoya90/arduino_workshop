const int Lamp = 13;

void setup() {
  pinMode(Lamp, OUTPUT); //Configure Pin 13 as Output
}

void loop() {
  // Blink 3 times
  for( int counter = 0; counter < 3; counter++) {
  }
  turnOff(); //Turn off led for 5 sec
}

void blink182() {
  digitalWrite(Lamp, HIGH); // Turn on led
  delay(1000);              // Wait 1 sec
  digitalWrite(Lamp, LOW);  // Turn off led
  delay(1000);              // Wait 1 sec
}

void turnOff() {
  digitalWrite(Lamp, LOW); // Turn off led
  delay(5000);             // Wait 5 sec
}
