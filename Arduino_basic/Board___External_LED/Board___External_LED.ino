void setup() 
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(500); // Wait for 0.5 second or 500 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(500); 
}
