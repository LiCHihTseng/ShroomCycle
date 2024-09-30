// Define the analog pin for the pressure sensor
int lamp1Pin = A0;
int lamp2Pin = A5;

// Define the digital pins for the LEDs
int led1lamp1Pin = 13;
int led1lamp2Pin = 12;
int led2lamp1Pin = 11;
int led2lamp2Pin = 10;

// Set a threshold value to decide when to turn on the LED
int threshold = 200;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set LED pins as outputs
  pinMode(led1lamp1Pin, OUTPUT);
  pinMode(led1lamp2Pin, OUTPUT);
  pinMode(led2lamp1Pin, OUTPUT);
  pinMode(led2lamp2Pin, OUTPUT);

  // Set sensor pins as inputs
  pinMode(lamp1Pin, INPUT);
  pinMode(lamp2Pin, INPUT);
}

void loop() {
  // Read the value from the pressure sensors
  int sensor1Value = analogRead(lamp1Pin);
  int sensor2Value = analogRead(lamp2Pin);
  
  // Print the sensor values to the Serial Monitor
  Serial.print("Pressure value 1: ");
  Serial.println(sensor1Value);
  Serial.print("Pressure value 2: ");
  Serial.println(sensor2Value);
  
  // Control LEDs based on sensor 1 (lamp1Pin)
  if (sensor1Value > threshold) {
    digitalWrite(led1lamp1Pin, LOW);   // Turn off LED 1 for sensor 1
    digitalWrite(led1lamp2Pin, LOW);   // Turn off LED 2 for sensor 1
  } else {
    digitalWrite(led1lamp1Pin, HIGH);  // Turn on LED 1 for sensor 1
    digitalWrite(led1lamp2Pin, HIGH);  // Turn on LED 2 for sensor 1
  }

  // Control LEDs based on sensor 2 (lamp2Pin)
  if (sensor2Value > threshold) {
    digitalWrite(led2lamp1Pin, LOW);   // Turn off LED 1 for sensor 2
    digitalWrite(led2lamp2Pin, LOW);   // Turn off LED 2 for sensor 2
  } else {
    digitalWrite(led2lamp1Pin, HIGH);  // Turn on LED 1 for sensor 2
    digitalWrite(led2lamp2Pin, HIGH);  // Turn on LED 2 for sensor 2
  }

  // Small delay to stabilize the readings
  delay(100);
}
