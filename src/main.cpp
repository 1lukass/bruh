#include <Arduino.h> // <<<<< DON'T DELETE THIS!!!



//  prints a slew of bruhs to the serial monitor



void setup() {
  Serial.begin(115200);
}


void loop() {
  
  int space = random() % 50;
  
  for (int i = 0; i < space; i++) {
    Serial.print(" ");
  }

  Serial.print("bruh\n");
  delay(20);
}
