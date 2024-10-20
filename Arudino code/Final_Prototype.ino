int lamp1Pin = A1;
int lamp2Pin = A5;
int lightSensorPin1 = A0;
int lightSensorPin2 = A3;


int led1lamp1Pin = 13;
int led1lamp2Pin = 12;
int led2lamp1Pin = 11;
int led2lamp2Pin = 10;


int pressureThreshold = 140;
int lightThreshold = 30;  // The ambient light level must be very close to 0

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  pinMode(led1lamp1Pin, OUTPUT);
  pinMode(led1lamp2Pin, OUTPUT);
  pinMode(led2lamp1Pin, OUTPUT);
  pinMode(led2lamp2Pin, OUTPUT);

  pinMode(lamp1Pin, INPUT);
  pinMode(lamp2Pin, INPUT);
  pinMode(lightSensorPin1, INPUT);
  pinMode(lightSensorPin2, INPUT);

}

void loop() {

  int lightLevel1 = analogRead(lightSensorPin1);
  int lightLevel2 = analogRead(lightSensorPin2);

  Serial.print("Ambient Light Level of Lamp1: ");
  Serial.println(lightLevel1);

  Serial.print("Ambient Light Level of Lamp2: ");
  Serial.println(lightLevel2);
  // If the ambient light level of any device is detected as low, all the lights turn on.
  if ((lightLevel1 <= lightThreshold)||(lightLevel2 <= lightThreshold)) {
    int sensor1Value = analogRead(lamp1Pin);
    int sensor2Value = analogRead(lamp2Pin);
    
    Serial.print("Pressure value 1: ");
    Serial.println(sensor1Value);
    Serial.print("Pressure value 2: ");
    Serial.println(sensor2Value);

    // If there is a phone on the pad of Lamp 1, the IF loop runs.
    if (sensor1Value > pressureThreshold) {
      digitalWrite(led1lamp1Pin, LOW);   // Turning off LED 1 of Lamp 1
      digitalWrite(led1lamp2Pin, LOW);   // Turning off LED 1 of Lamp 2
    } else {
      digitalWrite(led1lamp1Pin, HIGH);  // Turning on LED 1 of Lamp 1
      digitalWrite(led1lamp2Pin, HIGH);  // Turning on LED 1 of Lamp 2
    }

    // If there is a phone on the pad of Lamp 2, the IF loop runs.

    if (sensor2Value > pressureThreshold) {
      digitalWrite(led2lamp1Pin, LOW);   // Turning off LED 2 for Lamp 1
      digitalWrite(led2lamp2Pin, LOW);   // Turning off LED 2 for Lamp 2
    } else {
      digitalWrite(led2lamp1Pin, HIGH);  // Turning on LED 2 of Lamp 1
      digitalWrite(led2lamp2Pin, HIGH);  // Turning on LED 2 of  Lamp 2
    }
  }
   else {
    digitalWrite(led2lamp1Pin, LOW);   // Turning off LED 1 of Lamp 1
    digitalWrite(led2lamp2Pin, LOW);   // Turning off LED 2 of  Lamp 2
    digitalWrite(led1lamp1Pin, LOW);   // Turning off LED 1 of Lamp 1
    digitalWrite(led1lamp2Pin, LOW);   // Turning off LED 2 of  Lamp 2
  }

  // Small delay to stabilize the readings
  delay(100);
}
