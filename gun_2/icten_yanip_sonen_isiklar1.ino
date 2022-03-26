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

}

void loop()
{
  int degisken = 250;
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  
  delay(degisken);
  digitalWrite(1, 1);
  digitalWrite(4, 1);
 
  delay(degisken);
  digitalWrite(0, 1);
  digitalWrite(5, 1);
  delay(degisken);
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  
  delay(degisken);
  digitalWrite(1, 0);
  digitalWrite(4, 0);
  delay(degisken);
  
  
  digitalWrite(0, 0);
  digitalWrite(5, 0);
  delay(degisken);
  
}