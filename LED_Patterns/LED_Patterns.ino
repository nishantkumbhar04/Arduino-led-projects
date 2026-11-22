int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop()
{
  // Pattern 1: Running forward
  digitalWrite(led1, HIGH);
  delay(200);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(200);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
  delay(200);
  digitalWrite(led4, LOW);

  // Pattern 2: Running backward
  digitalWrite(led4, HIGH);
  delay(200);
  digitalWrite(led4, LOW);

  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led3, LOW);

  digitalWrite(led2, HIGH);
  delay(200);
  digitalWrite(led2, LOW);

  digitalWrite(led1, HIGH);
  delay(200);
  digitalWrite(led1, LOW);

  // Pattern 3: All LEDs ON and OFF
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);

  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

  delay(500);

  // Pattern 4: Alternate LEDs
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);

  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);

  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
}