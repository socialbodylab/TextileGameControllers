/**************************************************************************
 * Wearable Game Controllers : Halloween Edition
 * Working with Arduino Micro board and conductive materials
 * 
 * This is made to control Run Amelia Run game
 * https://runameliarun.itch.io/run-amelia-run
 * 
 * Arduino Example code:
 * https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardwrite/
 * https://www.arduino.cc/en/Reference/KeyboardModifiers
 * 
 * Keyboard Ascii References:
 * http://www.asciitable.com/
 * 
 * Social Body Lab, 2019 Oct.
**************************************************************************/#include <Keyboard.h>
#include <Keyboard.h>
int SpacePin = 7; // Set Pin 7 on Arduino to Space key


void setup()
{
  pinMode(SpacePin, INPUT);  
  Keyboard.begin(); 
/*******Pull the button key high *******/
  digitalWrite(SpacePin, HIGH);
}

void loop()
{

  if (digitalRead(SpacePin) == 0)  
  {
    Keyboard.press(32);  //Space key
    delay(100);  
  }
  else{
    Keyboard.releaseAll();
  }

}
