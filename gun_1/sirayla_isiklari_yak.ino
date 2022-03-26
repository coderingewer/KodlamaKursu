// C++ code
//
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
   pinMode(2 ,OUTPUT);
  pinMode(3 ,OUTPUT);
  pinMode(4 ,OUTPUT);
}

void loop()
{
  digitalWrite(0, 1);//Güç ver
  delay(1000);// 1 saniye bekle
  digitalWrite(0, 0);//Gücü kes
  
  digitalWrite(1, 1);
  delay(1000);
  digitalWrite(1, 0);
  
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  
  digitalWrite(3, 1);
  delay(1000);
  digitalWrite(3,0);
  
  digitalWrite(4, 1);
  delay(1000);
  digitalWrite(4, 0);

}

