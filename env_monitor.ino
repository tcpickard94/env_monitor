#include "arduino_secrets.h"
#include <Arduino_MKRENV.h>
#include "thingProperties.h"

int soilPin = A0;

void setup() {
  Serial.begin(9600);
  delay(1500);

  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  if (!ENV.begin()) {
    Serial.println("Failed to init MKR ENV SHIELD");
    while(1);
  }
}

void loop() {
  ArduinoCloud.update();

  humidity =  float(ENV.readHumidity());
  /*Serial.println("Humidity");*/
  /*Serial.println(humidity);*/
  lux =  float(ENV.readIlluminance());
  /*Serial.println("lux");*/
  /*Serial.println(lux);*/
  pressure =  float(ENV.readPressure());
  /*Serial.println("pressure");*/
  /*Serial.println(pressure);*/
  temp =  float(ENV.readTemperature());
  /*Serial.println("temp");*/
  /*Serial.println(temp);*/
  soilMoisture =  float(analogRead(soilPin));
  /*Serial.println("Soil moisture");*/
  /*Serial.println(soilMoisture);*/
  uva = float(ENV.readUVA());
  /*Serial.println("UVA");*/
  /*Serial.println(uva);*/
  uvb = float(ENV.readUVB());
  /*Serial.println("uvb");*/
  /*Serial.println(uvb);*/
  delay(60000);
}
