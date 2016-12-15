/* Ejemplo curso Arduino
//
//  by Javacasm
*/

int ledRojo=10,ledVerde=11;
void setup() {
pinMode(ledRojo,OUTPUT); pinMode(ledVerde,OUTPUT);
}
int tRojo=1000,tVerde=1000;
void loop() {
digitalWrite(ledVerde,LOW);digitalWrite(ledRojo,HIGH);
delay(tRojo);
digitalWrite(ledRojo,LOW);digitalWrite(ledVerde,HIGH);
delay(tVerde);
tRojo=tRojo-100;tVerde=tVerde+100;
if(tRojo<0)
{ tRojo=1000; }
if(tVerde>20000)
{tVerde=1000;}
}
