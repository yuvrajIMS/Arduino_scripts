volatile int state = HIGH;
int led = 0;

void setup() 
{
  pinMode(0, OUTPUT);
  attachInterrupt(0, blink, CHANGE);
}

void loop() 
{
  digitalWrite(0, state);
}

void blink() 
{
  state = !state;
}
