int r=9,g=11,b=10;
void setup() {
}
int maxValor=100;
void loop() {
for(int i=0;i<maxValor;i++)
{  analogWrite(r,i); delay(50);}
analogWrite(r,0);
for(int i=0;i<maxValor;i++)
{  analogWrite(g,i); delay(50);}
analogWrite(g,0);
for(int i=0;i<maxValor;i++)
{  analogWrite(b,i); delay(50);}
analogWrite(b,0);
}
