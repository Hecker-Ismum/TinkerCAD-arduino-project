#include <Keypad.h>

const byte row=4;
const byte col=4;


// Define the keymap
char keys [row][col] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Connect keypad ROW0, ROW1, ROW2, ROW3 to these Arduino pins
byte rowPin[row]={9,8,7,6};
// Connect keypad COL0, COL1, COL2, COL3 to these Arduino pins
byte colPin[col]={5,4,3,2};



// Create the Keypad
Keypad keypad = Keypad(makeKeymap (keys), rowPin, colPin, row, col);

void setup()
{
  Serial.begin(9600);
}

void loop()
{ char key=keypad.getKey(); //read the key

 //print the key if pressed
 if(key){
   Serial.print("Key pressed: ");
   Serial.println(key);
 }
}