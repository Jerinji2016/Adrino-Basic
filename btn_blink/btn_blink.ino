int LED = 13;
int BTN = 12;

void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT);
}

void loop() 
{
  int i;
  
  if(digitalRead(BTN)==LOW)
  {
    for(i=0;i<8;i++)
    {
      digitalWrite(LED, HIGH);
      delay(200);
      digitalWrite(LED, LOW);
      delay(200);
    }
    for(i=0;i<16;i++)
    {
      digitalWrite(LED, HIGH);
      delay(100);
      digitalWrite(LED, LOW);
      delay(100);
    }
    delay(200);
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(300);
  }
}
