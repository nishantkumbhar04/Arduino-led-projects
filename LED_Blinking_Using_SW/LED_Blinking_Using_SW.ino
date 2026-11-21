int ledpin = 8;    //LED is connected to Digital Pin 8.
int buttonpin = 2;  //Push button is connected to Digital Pin 2.
void setup() {

    pinMode(ledpin, OUTPUT);      //Configures Pin 8 as an output.
    pinMode(buttonpin, INPUT_PULLUP);   //Configures Pin 2 as an input with an internal pull-up resistor.

  // put your setup code here, to run once:

}

void loop() {
  int buttonState = digitalRead(buttonpin);

  if(buttonState == LOW)
  {
    digitalWrite(ledpin, HIGH);
    delay(500);

    digitalWrite(ledpin, LOW);
    delay(500);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }
  // put your main code here, to run repeatedly:

}
