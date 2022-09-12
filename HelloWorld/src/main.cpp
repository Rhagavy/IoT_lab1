#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  //start the USB serial monitor port
  Serial.begin(115200);

  //print some text to the USB port
  Serial.println("\n\nRhagavy Rakulan(000802106)");
  Serial.println("Chip ID:"+String(ESP.getChipId()));
  Serial.println("Flash ID:" +String(ESP.getFlashChipId()));
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Milliseconds since D1 has been started: "+String(millis()));
  delay(2000);

}