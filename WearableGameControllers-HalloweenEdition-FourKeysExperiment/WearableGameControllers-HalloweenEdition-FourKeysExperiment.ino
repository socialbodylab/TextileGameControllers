/**************************************************************************
 * Wearable Game Controllers : Halloween Edition
 * Working with Arduino Micro board and conductive materials
 * 
 * This is made to control KidDisco game using Left,Right,Up and Down keys
 * http://kiddisco.asmallgame.com/
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
int LeftPin = 6; // Set Pin 6 on Arduino to Left key
int RightPin = 7; // Set Pin 7 on Arduino to Right key
int UpPin = 8; // Set Pin 8 on Arduino to Up key
int DownPin = 9; // Set Pin 9 on Arduino to Down key

void setup()
{
  pinMode(LeftPin, INPUT); 
  pinMode(RightPin, INPUT); 
  pinMode(UpPin, INPUT);
  pinMode(DownPin, INPUT);
  Keyboard.begin(); 
/*******Pull the button key high *******/
  digitalWrite(LeftPin, HIGH);
  digitalWrite(RightPin, HIGH);
  digitalWrite(UpPin, HIGH);
  digitalWrite(DownPin, HIGH);
}

void loop()
{

  if (digitalRead(LeftPin) == 0)  
  {
    Keyboard.press(216);  //Left key
    delay(100);  
  }
  if (digitalRead(RightPin) == 0)  
  {
    Keyboard.press(215);  //Right key
    delay(100);  
  }
  if (digitalRead(UpPin) == 0)  
  {
    Keyboard.press(218);  //Up key
    delay(100);  
  }
  if (digitalRead(DownPin) == 0)  
  {
    Keyboard.press(217);  //Down key
    delay(100);  
  }
  else{
    Keyboard.releaseAll();
  }

}
