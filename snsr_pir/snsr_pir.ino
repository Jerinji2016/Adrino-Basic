int Sensor = 7;
int LED = 6;
int flag = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Sensor, INPUT);  
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(Sensor) == HIGH)
  {
    if(flag == 0)
    {
      flag = 1;
      digitalWrite(LED, HIGH);
      Serial.println("Object-1");
      delay(1000);
    }
    if(flag == 1)
    {
      Serial.println("Remove Obj n Place, Flag set to 1");
    }
    if(flag == 2)
    {
      flag=3;
      digitalWrite(LED, LOW);
      Serial.println("Reset");
      delay(1000);
      Serial.println("Reset O");
    }
  }
  else
  {
    if(flag == 1)
    {
      flag=2;
      Serial.println("Obj Removed");
    }
    if(flag == 0)
    {
      digitalWrite(LED, LOW);
    }
  }
  delay(100);
}
