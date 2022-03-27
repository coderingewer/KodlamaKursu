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
  digitalWrite(0,1);
  digitalWrite(1,0);
  
  if(digitalRead(0)==1) //Eğer 0'ıncı pinden elektrik geliyorsa
  { 
  digitalWrite(3,1);
  }
  
  delay(4000);
  digitalWrite(1,1);
  delay(1000);
  digitalWrite(0,0);
  digitalWrite(1,0);
  
  if(digitalRead(0)==0)//Eğer 0'ıncı pinden elektrik gelmiyorsa
  { 
  digitalWrite(3,0);
  }
  
  digitalWrite(2,1);
  if(digitalRead(2)==1){
  digitalWrite(4,1);
  }
  
  delay(4000);
  digitalWrite(1,1);
  delay(1000);
  digitalWrite(1,1);
  digitalWrite(2,0);
  
  if(digitalRead(2)==0){
  digitalWrite(4,0);
  }
  
  
  
  
}