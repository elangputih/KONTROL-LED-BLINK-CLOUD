//Basit Abdul
 
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_TEMPLATE_ID "TMPL6pZMkFFAw"
#define BLYNK_TEMPLATE_NAME "CONTROL LED"
#define BLYNK_AUTH_TOKEN "szTFBUExMesmMkmT7gTgjLlZ1ws1EYtf" //Enter your blynk auth token

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Hasan";//Enter your WIFI name
char pass[] = "Husen_14";//Enter your WIFI password


BLYNK_WRITE(V0) {
  digitalWrite(5, param.asInt());
}

void setup() {
  pinMode(5, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}
