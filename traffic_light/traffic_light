const int redLight = 13;
const int yellowLight = 12;
const int greenLight = 11;

void setup() {
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
}

void loop() {
  digitalWrite(redLight, HIGH);    //Red light on
  delay(5000);                     //Wait 5 seconds
  digitalWrite(redLight, HIGH);    //Red light on
  digitalWrite(yellowLight, HIGH); //Yellow light on
  delay(1000);                     //Wait 1 second
  digitalWrite(redLight, LOW);     //Red light off
  digitalWrite(yellowLight, LOW);  //Yellow light off
  delay(250);                      //Wait 250 milliseconds
  digitalWrite(greenLight, HIGH);  //Green light on
  delay(2000);                     //Wait 2 seconds
  digitalWrite(greenLight, LOW);   //Green light off
  delay(250);                      //Wait 250 milliseconds
  digitalWrite(yellowLight, HIGH); //Yellow light on
  delay(1000);                     //Wait 1 second
  digitalWrite(yellowLight, LOW);  //Yellow light off
}



 
