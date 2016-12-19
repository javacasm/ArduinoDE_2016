void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  {
    int dato=Serial.read();
    if(dato=='a')
    {   digitalWrite(7,HIGH);
      Serial.println("A");
    }
    if(dato=='o')
    {   digitalWrite(7,LOW);
    Serial.println("O");}
  }
}
