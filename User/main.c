
#include <Arduino.h>

const int buttonPin = D7;  // the number of the pushbutton pin
const int ledPin = D4;    // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  USART_Printf_Init(115200);
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  printf("B:%d\r\n", buttonState);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, !HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, !LOW);
  }
}
