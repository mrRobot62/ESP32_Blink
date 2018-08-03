#include <Arduino.h>
/*
 * Rui Santos
 * Complete Project Details http://randomnerdtutorials.com
 * Ardino IDE Example: Arduino button with LED


  nano32: #define LED_BUILTIN 16
  lolin32: #define LED_BUILTIN 2
  espea32: #define LED_BUILTIN 5
  
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 4;     // the number of the pushbutton pin
const int ledPin =  2;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  //buttonState = digitalRead(buttonPin);

    digitalWrite(ledPin, buttonState);
    buttonState = !buttonState;
    delay(500);
}
