/*
  Author: Steve Lyons
  Company: Lyons Software
  Project: project4 - 
  Goal: 
*/
// setup the leds
int led = 3;
int led2 = 4;

// setup the functions
void setup() 
  { 
    // initialize the digital pin as an output
    pinMode(led, OUTPUT);
  }

int runX()
{
  int x = 4;
  if ((x%2) == 2)
  {
    x = 1;
  }
  else
  {
    x = 0;
  }
  return x;
}
