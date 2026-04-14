// Arduino 101 Workshop
// By Jake Tan

const inputPin = A0;

void setup() {
  pinMode(inputPin, INPUT);
}

void loop() {
  Serial.println(analogRead(inputPin));
  delay(100);
}
