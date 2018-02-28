#include "CayenneDefines.h"
#include "BlynkSimpleEsp8266.h"
#include "CayenneWifiClient.h"

char token[] = "YOUR_TOKEN";
char ssid[] = "YOUR_SSID";
char password[] = "YOUR_PASSWORD";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Cayenne.begin(token,ssid, password);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  Cayenne.run();
}

CAYENNE_IN(V0)
{
  int i = getValue.asInt();
  digitalWrite(2, !i);
}
