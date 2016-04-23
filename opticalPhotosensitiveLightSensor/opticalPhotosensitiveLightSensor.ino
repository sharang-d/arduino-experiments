// Light up an LED when it gets dark!

#define ANALOG_SENSOR_PIN A0
#define LED_PIN 13
#define LIGHT_SENSITIVITY 400

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  int lightSensorReading = analogRead(ANALOG_SENSOR_PIN);

  if (lightSensorReading < LIGHT_SENSITIVITY) 
  {
    changeLEDState(HIGH);
  }
  else
  {
    changeLEDState(LOW);
  }
}

void changeLEDState(int state) {
  digitalWrite(LED_PIN, state);
}

