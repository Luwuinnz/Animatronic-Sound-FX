#include <SoftwareSerial.h>
#include <DFPlayerMini_Fast.h>

SoftwareSerial mySerial(10, 11); // RX, TX
DFPlayerMini_Fast myDFPlayer;

const int buttonPin = 4;
bool lastButtonState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  mySerial.begin(9600);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("Unable to begin DFPlayer");
    while (true);
  }

  myDFPlayer.volume(29); // adjust 0–30
}

void loop() {
  bool currentState = digitalRead(buttonPin);

  // Detect press only when state goes from HIGH to LOW (falling edge)
  if (lastButtonState == HIGH && currentState == LOW) {
    myDFPlayer.play(1); // play sound on press
  }

  lastButtonState = currentState;
}
