int inPin = A2;
int readVal;
float V2;
// int delayT = 50;
int initialVal;
bool flag = false;
int numberRotation = 0;

void setup() {
  Serial.begin(9600);
  initialVal = analogRead(inPin);
}

void loop() {
  readVal = analogRead(inPin);
  if ((readVal >= initialVal - 10 && readVal <= initialVal + 10) && !flag) {
    // Potentiometer has completed one rotation
    numberRotation++;
    Serial.print("No of Rotation: ");
    Serial.println(numberRotation);
    flag = true;  // Set flag to prevent counting multiple times
  }
  if (readVal < initialVal - 50 || readVal > initialVal + 50) {
    // Reset flag if the potentiometer is turned in the opposite direction
    flag = false;
  }
  V2 = (5. / 1023.) * readVal;
  // delay(delayT);
  //  Serial.print("Voltage: ");
  // Serial.println(V2);
 
}