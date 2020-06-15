#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[] = "c5e62bab-6193-4bb9-a4b3-d3d9c090b3e0";

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)


float humidity;
float lux;
float pressure;
float soilMoisture;
float temp;
float uva;
float uvb;

void initProperties(){

  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(humidity, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(lux, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(pressure, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(soilMoisture, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(temp, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(uva, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(uvb, READ, ON_CHANGE, NULL);
}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
