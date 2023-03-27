// Set the pin to which the motor is connected
int motorPin = 9;

void setup() {
  // Initialize the motor pin as an output pin
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Start the motor at 50% speed
  analogWrite(motorPin, 128);

  // Increase the motor speed gradually
  for (int i = 128; i <= 255; i++) {
    analogWrite(motorPin, i);
    delay(10);
  }

  // Keep the motor at max speed for 20 seconds
  delay(20000);

  // Stop the motor
  analogWrite(motorPin, 0);
}
