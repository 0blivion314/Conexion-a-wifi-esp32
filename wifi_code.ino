#include <WiFi.h>

const char* ssid  = "Estudiantes";
const char* password = "educar_2018";

void setup() 
{
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
