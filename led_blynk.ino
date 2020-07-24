#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial
char auth[] = "y7RXOlRWoQRmMfH07ovIwUNLoggqhQ1J";
char ssid[] = "Apaajalah";
char pass[] = "nennymulyani";

void setup() {
  Serial.begin (9600);
  Blynk.begin (auth, ssid, pass);
}
void loop() 
{
  Blynk.run();
}
