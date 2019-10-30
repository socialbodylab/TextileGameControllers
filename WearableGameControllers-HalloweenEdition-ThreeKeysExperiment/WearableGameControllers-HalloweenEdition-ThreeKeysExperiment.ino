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
**************************************************************************/
#include <Keyboard.h>
int APin = 6; // Set Pin 6 on Arduino to A key
int SPin = 7; // Set Pin 7 on Arduino to S key
int DPin = 8; // Set Pin 8 on Arduino to D key
int KeyVal1 = 97; // Set ASCII value for A key, you can change it to any key by finding the right value
int KeyVal2 = 115; // Set ASCII value for S key, you can change it to any key by finding the right value
int KeyVal3 = 100; // Set ASCII value for D key, you can change it to any key by finding the right value

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
    Keyboard.press(KeyVal1);  // This function is as if a key were pressed and held on your keyboard.
    delay(100);  
  }
  if (digitalRead(SPin) == 0)  
  {
    Keyboard.press(KeyVal2);  // This function is as if a key were pressed and held on your keyboard.
    delay(100);  
  }
  if (digitalRead(DPin) == 0)  
  {
    Keyboard.press(KeyVal3);  // This function is as if a key were pressed and held on your keyboard.
    delay(100);  
  }
  else{
    Keyboard.releaseAll();
  }

}
