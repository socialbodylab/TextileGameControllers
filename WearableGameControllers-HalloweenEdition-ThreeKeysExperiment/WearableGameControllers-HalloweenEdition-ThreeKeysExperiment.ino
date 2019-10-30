/**************************************************************************
 * Wearable Game Controllers : Halloween Edition
 * Working with Arduino Micro board and conductive materials
 * 
 * This is made to control Rock Paper Scissors Joust Player 1
 * Player 1 - A S D
 * Player 2 - Left Down Right
 * https://plungergames.itch.io/rps-joust
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
int APin = 6; // Set Pin 6 on Arduino to A key
int SPin = 7; // Set Pin 7 on Arduino to S key
int DPin = 8; // Set Pin 8 on Arduino to D key


void setup()
{
  pinMode(APin, INPUT); 
  pinMode(SPin, INPUT); 
  pinMode(DPin, INPUT);
  Keyboard.begin(); 
/*******Pull the button key high *******/
  digitalWrite(APin, HIGH);
  digitalWrite(SPin, HIGH);
  digitalWrite(DPin, HIGH);
}

void loop()
{

  if (digitalRead(APin) == 0)  
  {
    Keyboard.press(97);  //A key
    delay(100);  
  }
  if (digitalRead(SPin) == 0)  
  {
    Keyboard.press(115);  //S key
    delay(100);  
  }
  if (digitalRead(DPin) == 0)  
  {
    Keyboard.press(100);  //D key
    delay(100);  
  }
  else{
    Keyboard.releaseAll();
  }

}
