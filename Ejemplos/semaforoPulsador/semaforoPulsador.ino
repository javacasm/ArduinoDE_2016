/* Ejemplo curso Arduino
// Semáforo que se activa con pulsador
//  by Javacasm
*/


int pinBoton=2,ledVerde=10,ledRojo=11;

void setup() {
  pinMode(pinBoton,INPUT);pinMode(ledVerde,OUTPUT);
  pinMode(ledRojo,OUTPUT);
}

void loop() {
  int estadoBoton=digitalRead(pinBoton);
  if(estadoBoton==HIGH){
      digitalWrite(ledRojo,LOW);
      digitalWrite(ledVerde,HIGH);delay(10000);
  }
  else {
    digitalWrite(ledVerde,LOW);digitalWrite(ledRojo,HIGH);
  }
}
