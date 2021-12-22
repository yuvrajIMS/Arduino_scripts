#include "Timer.h"

Timer t;
int pin = 13;

void setup() 
{
  pinMode(pin, OUTPUT);
  t.pulse(pin, 5*1000, HIGH); // 5 Seconds 
}

void loop()
{
  t.update();
}
