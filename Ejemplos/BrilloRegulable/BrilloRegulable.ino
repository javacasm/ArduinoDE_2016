void setup() {
}

void loop() {
  int iValorPot=analogRead(A0); // 0 y 1023
  int brillo=iValorPot/4; // 0 y 255
  analogWrite(10,brillo);
}
