void setup() 

{
  Serial.begin(9600); // 9600 bits of data persecond or 1200 bytes / 
  pinMode(2,INPUT_PULLUP); //  initialize digital pin 2 as an input with the internal pull-up resistor enabled
  pinMode(13,OUTPUT); // The following line make pin 13, with the onboard LED, an output
  
}

void loop() 
{
  int sensorValue = digitalRead(2);// variable to hold sensor value either "1" or "0"
                                   // pushbutton state into sensorValue variable
  Serial.println(sensorValue, DEC); // printing value of pushbutton

  if (sensorValue == HIGH)
  {
    digitalWrite(13, LOW);
  }
  else
  {
    digitalWrite(13, HIGH);
  }
}
