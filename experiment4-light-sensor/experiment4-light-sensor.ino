const int greenLEDPin = 9;
const int blueLEDPin = 10;
const int redLEDPin = 11;


const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;


void setup() {
  Serial.begin(9600);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  redSensorValue = analogRead(redSensorPin);
  redValue = redSensorValue / 4;
  delay(500);
  greenSensorValue = analogRead(greenSensorPin);
  greenValue = greenSensorValue / 4;
  delay(500);
  blueSensorValue = analogRead(blueSensorPin);
  blueValue = blueSensorValue / 4;
  delay(500);

  Serial.print("Raw Sensor Values Red: ");
  Serial.print(redSensorValue);
  Serial.print("  Green: ");
  Serial.print(greenSensorValue);
  Serial.print("  Blue: ");
  Serial.println(blueSensorValue);

  Serial.print("Mapped Sensor Values \t Red: ");
  Serial.print(redValue);
  Serial.print("  Green: ");
  Serial.print(greenValue);
  Serial.print("  Blue: ");
  Serial.println(blueValue);

  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
