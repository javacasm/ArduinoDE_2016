/* Ejemplo curso Arduino
// Lectura de sensor de temperatura
//  by Javacasm
*/
void setup() {
Serial.begin(9600);
}

void loop() {
  int valor=analogRead(A0);
  float temperatura=(valor/1023.0)*500
  Serial.println(temperatura);
  delay(100);
}
