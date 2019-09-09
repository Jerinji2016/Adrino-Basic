int Sensor = 7;
int LED = 6;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Sensor, INPUT);  
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(Sensor) == HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(500);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  Serial.println("Object detected");
}
