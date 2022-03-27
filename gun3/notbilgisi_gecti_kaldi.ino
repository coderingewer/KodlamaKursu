// C++ code
//
void setup()
{
Serial.begin(9600);
}
void loop()
{
  int not1 = 44;
  
  if(not1 >= 45)
  {
    Serial.println("Gecti");
  }
  else
  Serial.println("Kaldi");
}