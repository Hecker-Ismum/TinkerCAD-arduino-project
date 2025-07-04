#include<Keypad.h>
#include <Wire.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);

long first =0;
long second =0;
double total=0;

char customKey;
const byte ROWS=4;
const byte COLS=4;
char keys[ROWS][COLS]= {
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'C','0','=','/'}
};
byte rowPins[ROWS]={7,6,5,4};
byte colPins[COLS]={3,2,1,0};

Keypad customKeypad=Keypad(makeKeymap(keys),rowPins,colPins,
  