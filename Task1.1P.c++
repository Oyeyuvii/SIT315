// Define sensor and LED pins
const int sensorPin = 2;
const int ledPin = 13;

void setup() {
  // Initialize the sensor pin as input
  pinMode(sensorPin, INPUT);
  // Initialize the LED pin as output
  pinMode(ledPin, OUTPUT);
  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the sensor
  int sensorValue = digitalRead(sensorPin);
  
  // Check if motion is detected
  if (sensorValue == HIGH) {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
    // Print the sensor and LED status to the Serial Monitor
    Serial.println("Motion detected! LED is ON.");
  } else {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
    // Print the sensor and LED status to the Serial Monitor
    Serial.println("No motion. LED is OFF.");
  }

  // Add a small delay to avoid flooding the Serial Monitor
  delay(500);
}