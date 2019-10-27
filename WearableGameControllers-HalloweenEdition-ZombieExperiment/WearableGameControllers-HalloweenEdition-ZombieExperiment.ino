/**************************************************************************
 * Wearable Game Controllers : Halloween Edition
 * Working with Arduino Micro board and conductive materials
 * 
 * This is made to control minibattles game, player one uses A, player two uses B
 * https://www.crazygames.com/game/12-minibattles
 * 
 * The controllers are two zombie mats with slippers, the player needs to jump to trigger the key
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
/*******Change the control to any key you want *******/
int PlayerOnePin = 7; // Set Pin 7 on Arduino to A key
int PlayerTwoPin = 6; // Set Pin 6 on Arduino to L key

void setup()
{
  pinMode(PlayerOnePin, INPUT);  
  pinMode(PlayerTwoPin, INPUT);  
  Keyboard.begin(); 
  digitalWrite(PlayerOnePin, LOW);
  digitalWrite(PlayerTwoPin, LOW);
}

void loop()
{
  if (digitalRead(PlayerOnePin) == 1)  
  {
    Keyboard.press(101);  //A key
    delay(100);  
  }
  
  if (digitalRead(PlayerTwoPin) == 1)  
  {
    Keyboard.press(114);  //L key
    delay(100);  
  }
  else{
     Keyboard.releaseAll();
  }

}


