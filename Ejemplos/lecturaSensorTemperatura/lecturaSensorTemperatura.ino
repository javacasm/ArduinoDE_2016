/* Ejemplo curso Arduino
// Lectura de sensor de temperatura
//  by Javacasm
*/
void setup() {
Serial.begin(9600);
pinMode(7,OUTPUT);
}

void loop() {
  int valor=analogRead(A0);
  float temperatura=(valor/1023.0)*500;
  Serial.println(temperatura);
  if(temperatura>28)
  {
    digitalWrite(7,HIGH);
    Serial.println("Activado");
    delay(10000);
  }

  if(temperatura<26)
  {
    Serial.println("Desactivado");
    digitalWrite(7,LOW);
    delay(1000);
  }
  delay(100);
}
