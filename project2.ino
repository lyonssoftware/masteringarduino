/*
  Author: Steve Lyons
  Company: Lyons Softwar
  // setup pin 13
  int led = 13;
  
// setup allows the early configurations of the project
// more code
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
