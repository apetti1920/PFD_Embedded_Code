#include <Arduino.h>
#include <i2c_t3.h>

#define WIFI Serial2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  WIFI.begin(921600);

  Serial.setTimeout(100);
  WIFI.setTimeout(100);

  delay(2000);

  Serial.clear();
  WIFI.clear();
}

void loop() {
    // put your main code here, to run repeatedly:
    WIFI.write("Test");
    delay(5000);
}
