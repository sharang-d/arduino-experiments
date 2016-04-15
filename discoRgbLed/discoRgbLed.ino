// Pin numbers on the Arduino
const int redPin = 9;
const int bluePin = 10;
const int greenPin = 11;

// Delay in ms
const int delayBeforeColorChange = 250;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Use an unused analog input pin as the seed
  randomSeed(analogRead(0));
}

void loop() {
  int red, green, blue;

  // Use random color values between 0 and 255 (inclusive)
  red = random(256);
  blue = random(256);
  green = random(256);

  setColor(red, green, blue);
  delay(delayBeforeColorChange);
}

// Write color values to the correct pins
void setColor(int red, int green, int blue) {
  analogWrite(redPin, 255 - red);
  analogWrite(greenPin, 255 - green);
  analogWrite(bluePin, 255 - blue);
}
