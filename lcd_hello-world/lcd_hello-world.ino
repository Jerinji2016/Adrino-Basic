#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13); 
//char a[10][10]={"abc\0","efjkh\0"};

void setup() 
{
  int i,j;
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  for(i=0;i<2;i++)
  {
    for(j=0;a[i][j]!='\0';j++)
    {
      lcd.print("ello");
    }
    lcd.setCursor(0,1);
  }
}

void loop() 
{
  // put your main code here, to run repeatedly:
}
