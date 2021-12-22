const int redPIN = 3; // red module of RGB connected to pin 3
const int greenPIN = 5; // green module of RGB connected to pin 5
const int bluePIN = 6; // blue module of RGB connected to pin 6

void setup() 
{
 Serial.begin(9600); // serial communication at rate of 9600 bits b/t board and computer.

  /* configring the pins as output */
 pinMode(redPIN, OUTPUT); 
 pinMode(greenPIN, OUTPUT);
 pinMode(bluePIN, OUTPUT);
 
}

void loop() 
{
  while (Serial.available() > 0) // To check data in serial buffer
  { 
   //  Serial.parseInt() to separate the data by commas, read the information into your variables
  /* declaring variables to store serial information */
  int red = Serial.parseInt();
  int green = Serial.parseInt();
  int blue = Serial.parseInt();
  
  if (Serial.read() == '\n') 
  {
  /* keeping data in certian range using "constrain()" function for PWM control */
  red = 255 - constrain(red, 0, 255);
  green = 255 - constrain(green, 0, 255);
  blue = 255 - constrain(blue, 0, 255);
  
  /* "analogWrite()" function to change color of RGB Module*/
  analogWrite(redPIN, red);
  analogWrite(greenPIN, green);
  analogWrite(bluePIN, blue);

  /* for sending values to each LED module */
  Serial.print(red, HEX);
  Serial.print(green, HEX);
  Serial.println(blue, HEX);
  }
}
}
