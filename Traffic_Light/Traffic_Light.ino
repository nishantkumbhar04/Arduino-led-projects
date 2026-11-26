int RedLED = 8;
int YellowLED = 9;
int GreenLED = 10;

void setup() {
  pinMode(RedLED, OUTPUT);
  pinMode(YellowLED,OUTPUT);
  pinMode(GreenLED,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  //Red ON
  digitalWrite(RedLED, HIGH);
  digitalWrite(YellowLED, LOW);
  digitalWrite(GreenLED, LOW);
  delay(5000);

  //Yellow ON
  digitalWrite(RedLED, LOW);
  digitalWrite(YellowLED, HIGH);
  digitalWrite(GreenLED, LOW);
  delay(200);

  //Green ON
  digitalWrite(RedLED, LOW);
  digitalWrite(YellowLED, LOW);
  digitalWrite(GreenLED, HIGH);
  delay(500);

  // put your main code here, to run repeatedly:

}
