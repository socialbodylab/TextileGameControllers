/**************************************************************************
 * Wearable Game Controllers : Halloween Edition
 * Working with Arduino Micro board and conductive materials
 * 
 * This is made to control Surf The Wire using left and right arrow keys
 * https://snarf.itch.io/surf-the-wire
 * 
 * Arduino Example code:
 * https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardwrite/
 * https://www.arduino.cc/en/Reference/KeyboardModifiers
 * 
 * Keyboard Ascii References:
 * http://www.asciitable.com/
 * 
 * Social Body Lab, 2019 Oct.
**************************************************************************/
#include <Keyboard.h>
int LeftPin = 7; // Set Pin 7 on Arduino to Left key
int RightPin = 6; // Set Pin 6 on Arduino to Right key


void setup()
{
  pinMode(LeftPin, INPUT);  
  pinMode(RightPin, INPUT);  
  Keyboard.begin(); 
/*******Pull the button key high *******/
  digitalWrite(LeftPin, HIGH);
  digitalWrite(RightPin, HIGH);
}

void loop()
{

  if (digitalRead(LeftPin) == 0)  
  {
    Keyboard.press(216);  //Left arrow key
    delay(100);  
  }
  if (digitalRead(RightPin) == 0)  
  {
    Keyboard.press(215);  //Right arrow key
    delay(100);  
  }
  else{
    Keyboard.releaseAll();
  }

}

