int leds[] = {8, 9, 10, 11};
int totalLEDs = 4;
void setup() {
  for(int i = 0; i < totalLEDs; i++)
  {
      pinMode(leds[i], OUTPUT);
  }
  // put your setup code here, to run once:

}

void loop() {
  //Pattern 1 : Forwad
  for(int i = 0; i < totalLEDs; i++)
  {
    digitalWrite(leds[i],HIGH);
    delay(200);
    digitalWrite(leds[i],LOW);
  }

  //pattern 2 : Reverse 
  for(int i = totalLEDs-1; i >= 0; i--)
  {
    digitalWrite(leds[i],HIGH);
    delay(200);
    digitalWrite(leds[i],LOW);
  }

  //Pattern 3 : All LEDs Blink
  for(int i = 0; i < totalLEDs; i++)
  {
    digitalWrite(leds[i],HIGH);
  }
  delay(500);

  for(int i = 0; i < totalLEDs; i++)
  {
    digitalWrite(leds[i],LOW);
  }
  delay(500);

  // Pattern 4: Alternating LEDs
  for(int i = 0; i < totalLEDs; i++)
  {
    if(i % 2 == 0)
    {
      digitalWrite(leds[i],HIGH);
    }
    else
    {
      digitalWrite(leds[i],LOW);
    }
  }

  delay(500);

  for (int i = 0; i < totalLEDs; i++)
  {
    if (i % 2 == 0)
    {
      digitalWrite(leds[i], LOW);
    }
    else
    {
      digitalWrite(leds[i], HIGH);
    }
  }

  delay(500);

  // Turn all LEDs OFF
  for (int i = 0; i < totalLEDs; i++)
  {
    digitalWrite(leds[i], LOW);
  }
  // put your main code here, to run repeatedly:

}
