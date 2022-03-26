// C++ code
//
int a = 2000;//değişken heryerde aynı değeri kullanabilmek için
int b = 3000;
void setup()
{
  pinMode(0, OUTPUT);//0 numaralı pini çıkış olarak tanımla
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop()
  
{
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, 0);
  delay(a); 
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, 0);
  delay(b);
  
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(a);
  
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  delay(b);
  digitalWrite(2, 0);
  digitalWrite(1, 0);
}