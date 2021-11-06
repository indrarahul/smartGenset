#define gensetOnPin 16
#define gensetOffPin 4
const int electricityPin = A0;

void setup() {
  pinMode(gensetOnPin, OUTPUT);
  pinMode(gensetOffPin, OUTPUT);
}

void loop() {
  int electricityValue = analogRead(electricityPin)/1024;
  if(electricityValue == 1)
  {
    digitalWrite(gensetOnPin, HIGH);
    digitalWrite(gensetOffPin, LOW);
  } else {
     digitalWrite(gensetOffPin, HIGH);
     digitalWrite(gensetOnPin, LOW);
  }
}
