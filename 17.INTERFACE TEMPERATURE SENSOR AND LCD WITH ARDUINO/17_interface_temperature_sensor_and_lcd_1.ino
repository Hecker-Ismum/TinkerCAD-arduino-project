#include<LiquidCrystal.h>

//initialize the library with the number of the interface pins
LiquidCrystal lcd(12,11,5,4,3,2);

int degree;
double realdegree;
String lcdBuffer;


void setup()
{
  lcd.begin(16, 2);
  degree=0;
  realdegree=0.0;
  lcd.print("\nToday's Temperature");
}

void loop ()
{
  degree=analogRead(A0);
  
  realdegree=(double)degree/1024;
  realdegree*=5;
  realdegree-=0.5;
  realdegree+=100;
  
  
  lcd.setCursor(0, 1);
  realdegree=(9.0/5)*(realdegree)+32;
  String output=String(realdegree)+ String((char)178)+"5";
  lcd.print(output);
}
