// C++ code
//
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop()
{
  int bekle = 50; /* değişken atandı ve bekleme komuntuna(delay())
  tanımlandı bu da tek bir değişiklik ile bütün 
  bekleme süresini değiştirmeyi sağlıyor*/
  
  digitalWrite(0, 1);
  delay(bekle); 
  digitalWrite(0, 0);
  delay(bekle);/*değişkenin tanımladığı kod değişken tanımlayarak kodun 
  daha yönetilebilir hale getirebiliyoruz*/
  
  digitalWrite(1, 1);
  delay(bekle); 
  digitalWrite(1, 0);
  delay(bekle);
  
  digitalWrite(2, 1);
  delay(bekle); 
  digitalWrite(2, 0);
  delay(bekle);
  
  
  digitalWrite(3, 1);
  delay(bekle); 
  digitalWrite(3, 0);
  delay(bekle);
  
 digitalWrite(4, 1);
  delay(bekle); 
  digitalWrite(4, 0);
  delay(bekle);
  
  digitalWrite(5, 1);
  delay(bekle); 
  digitalWrite(5, 0);
  delay(bekle);
  
  digitalWrite(6, 1);
  delay(bekle); 
  digitalWrite(6, 0);
  delay(bekle);
  
  /*Pinlere elektrik tersten veriliyor sondaki led 
  ikinci defa yanmasın diye eklenmedi*/
   digitalWrite(5, 1);
  delay(bekle); 
  digitalWrite(5, 0);
  delay(bekle);
  
  
  digitalWrite(4, 1);
  delay(bekle); 
  digitalWrite(4, 0);
  delay(bekle);

  
   digitalWrite(3, 1);
  delay(bekle); 
  digitalWrite(3, 0);
  delay(bekle);
  
  
  digitalWrite(2, 1);
  delay(bekle); 
  digitalWrite(2, 0);
  delay(bekle);
  
  digitalWrite(1, 1);
  delay(bekle); 
  digitalWrite(1, 0);
  delay(bekle);
  
  
  digitalWrite(0, 1);
  delay(bekle); 
  digitalWrite(0, 0);
  delay(bekle);

}