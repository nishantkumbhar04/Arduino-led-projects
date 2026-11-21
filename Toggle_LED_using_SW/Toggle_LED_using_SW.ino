int ledPin = 8;
int buttonPin = 2;

int ledState = LOW;
int lastButtonState = HIGH;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH)
  {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(200);
  }

  lastButtonState = buttonState;
}