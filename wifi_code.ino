#include <WiFi.h>

const char* ssid  = "****+";
const char* password = "****+";

void setup() 
{
  Serial.begin(9600)
  WiFi.begin(ssid, password);
  Serial.print ("conectando..") ;
  while (WiFi.status()!= WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
}
void loop() {
  // put your main code here, to run repeatedly:

}
