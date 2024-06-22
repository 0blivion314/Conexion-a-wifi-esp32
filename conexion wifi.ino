#include <WiFi.h>

/*Definimos nuestras credenciales de la red WiFi*/
const char* ssid = "MovistarFibra-A9B820";
const char* pass = "nk58sgmCjzJ7GgjTKo8q";

void setup() {
  /*Iniciamos el terminal Serial para la escritura de algunos parámetros */
  Serial.begin(115200);
  /*Iniciamos la conexión a la red WiFi definida*/
  WiFi.begin(ssid, pass);
  delay(2000);
  /*En el terminal Serial, indicamos que se está realizando la conexión*/
  Serial.print("Se está conectando a la red WiFi denominada ");
  Serial.println(ssid);
  /*Mientras se realiza la conexión a la red, aparecerán puntos, hasta que se realice la conexión*/
  while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
  /*Con la conexión ya realizada, se pasa a imprimir algunos datos importantes, como la dirección IP asignada a nuestro dispositivo*/
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
