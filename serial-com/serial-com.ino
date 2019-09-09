void setup() 
{
  Serial.begin(9600);
  Serial.print("Hello");
}

void loop() 
{
  //char c;
  String s;
  if(Serial.available())
  {
    //c = Serial.read();
    s = Serial.readString();
    Serial.println(s);
  }
}
