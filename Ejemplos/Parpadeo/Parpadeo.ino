/* Ejemplo curso Arduino
//
//  by Javacasm
*/


int pinLed=12;

void setup() {
pinMode(pinLed,OUTPUT);  // activamos la patilla 13 como salida
}

void loop() {
int retardo=500;
digitalWrite(pinLed,HIGH); // encedemos
delay(retardo);  // esperamos medio segundo
digitalWrite(pinLed,LOW);  // apagamos
delay(retardo); // esperamos medio segundo
}
