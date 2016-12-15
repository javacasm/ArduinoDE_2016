/* Ejemplo curso Arduino
// Modificamos el retardo de un semaforo
//  by Javacasm
*/

int ledRojo=10,ledVerde=11;
void setup() {
  pinMode(ledRojo,OUTPUT); pinMode(ledVerde,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int retardo=analogRead(A0); // entre 0 y 1023
  digitalWrite(ledVerde,LOW);digitalWrite(ledRojo,HIGH);
  delay(retardo);
  digitalWrite(ledRojo,LOW);digitalWrite(ledVerde,HIGH);
  delay(retardo);
  Serial.println(retardo);
}
