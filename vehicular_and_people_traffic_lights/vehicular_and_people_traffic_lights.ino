const int redVehicular = 8;
const int yellowVehicular = 9;
const int greenVehicular = 10;
const int redPeople = 11;
const int greenPeople = 12;

void setup()
{
  pinMode(redVehicular, OUTPUT);
  pinMode(yellowVehicular, OUTPUT);
  pinMode(greenVehicular, OUTPUT);
  pinMode(redPeople, OUTPUT);
  pinMode(greenPeople, OUTPUT);
}

void loop()
{
  digitalWrite(redVehicular, HIGH);
  digitalWrite(greenPeople, HIGH);
  delay(500);
  blinkLight(greenPeople, 2);
  delay(500);
  digitalWrite(greenPeople, LOW);
  digitalWrite(redPeople, HIGH);
  delay(500);
  digitalWrite(redVehicular, HIGH);
  digitalWrite(yellowVehicular, HIGH);
  delay(500);
  digitalWrite(redVehicular, LOW);
  digitalWrite(yellowVehicular, LOW);
  delay(500);
  digitalWrite(greenVehicular, HIGH);
  delay(500);
  digitalWrite(greenVehicular, LOW);
  delay(500);
  digitalWrite(yellowVehicular, HIGH);
  delay(500);
  digitalWrite(yellowVehicular, LOW);
  delay(500);
  digitalWrite(redVehicular, HIGH);
  delay(500);
  digitalWrite(redPeople, LOW);
  digitalWrite(greenPeople, HIGH);  
}

void blinkLight(int light, int times){
  for(int i= 0 ; i < times; i++){
    digitalWrite(light, HIGH);
    digitalWrite(light, LOW);
    delay(500);
  }
}
