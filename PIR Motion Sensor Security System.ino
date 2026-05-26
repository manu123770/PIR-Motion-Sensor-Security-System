int pirPin = 7;
int ledPin= 13;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int motion = digitalRead(pirPin);
  Serial.println(motion);
  if (motion==HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
  delay(1000);
}
