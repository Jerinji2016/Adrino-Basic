int RED = 8;
int GRN = 9;

void setup() 
{
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GRN, OUTPUT);
}

void loop() 
{
  if(analogRead(A0) > 500)
  {
    digitalWrite(RED, HIGH);
    Serial.println(analogRead(A0));
    delay(200);
    digitalWrite(RED, LOW);
    delay(200);
  }
  else
  {
    digitalWrite(GRN, HIGH);
    Serial.println(analogRead(A0));
    delay(500);
    digitalWrite(GRN, LOW);
    delay(500);
  }
}
