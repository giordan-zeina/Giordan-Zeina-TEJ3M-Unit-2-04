/*
  Created by: Giordan Zeina
  Created on: Mar 2025

  Turns an RGB LED on for one second, then off for one second, repeatedly.
*/

const int PIN_10 = 10;
const int PIN_12 = 12;
const int PIN_13 = 13;
const int BLINKTIME = 1000;

void setup()
{
  pinMode(PIN_10, OUTPUT);
  pinMode(PIN_12, OUTPUT);
  pinMode(PIN_13, OUTPUT);
}


void loop()
{
  digitalWrite(PIN_10, HIGH);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_13, LOW);
  delay(BLINKTIME); // Wait 1 second
  digitalWrite(PIN_10, LOW);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_13, LOW);
  delay(BLINKTIME); // Wait 1 second
  digitalWrite(PIN_10, LOW);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_13, HIGH);
  delay(BLINKTIME); // Wait 1 second
  digitalWrite(PIN_10, HIGH);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_13, LOW);
  delay(BLINKTIME); // Wait 1 second
  digitalWrite(PIN_10, LOW);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_13, HIGH);
  delay(BLINKTIME); // Wait 1 second
  digitalWrite(PIN_10, HIGH);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_13, HIGH);
  delay(BLINKTIME); // Wait 1 second
  digitalWrite(PIN_10, HIGH);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_13, HIGH);
  delay(BLINKTIME); // Wait 1 second
  digitalWrite(PIN_10, LOW);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_13, LOW);
  delay(BLINKTIME); // Wait 1 second
}
