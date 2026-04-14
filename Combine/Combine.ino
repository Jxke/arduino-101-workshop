// Arduino 101 Workshop
// By Jake Tan

const int sensorPin = A0;
const int greenLedPin = 12;
const int redLedPin = 11;

// Adjust these values after checking the sensor in the Serial Monitor.
const int inRangeThreshold = 200;
const int tooCloseThreshold = 400;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  Serial.println(sensorValue);

  if (sensorValue >= tooCloseThreshold) {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    delay(150);
    digitalWrite(redLedPin, LOW);
    delay(150);
  } else if (sensorValue >= inRangeThreshold) {
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    delay(400);
    digitalWrite(greenLedPin, LOW);
    delay(400);
  } else {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    delay(100);
  }
}
