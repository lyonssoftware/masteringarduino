/*
  Author: Steve Lyons
  Company: Lyons Software
  Project: project2 - Blink LED on Breadboard
  Goal: Use Arduino Uno to blink LED on breadboard 
*/
// setting up the pins 
  // setup pin 13
  int led = 13;
  
  void setup() 
  { 
    // initialize the digital pin as an output
    pinMode(led, OUTPUT);
  }

  void loop() 
  {
    // turn the LED on (HIGH is the voltage level)
    int led3 = 6;
    digitalWrite(led, HIGH); 

     // wait for 3 seconds
    delay(3000);

     // turn the LED off by making voltage LOW
    digitalWrite(led, LOW);

    // wait for 3 seconds THEN STARTBAGAIN, GOR THE PROGRAM 
    delay(3000); 
  }
