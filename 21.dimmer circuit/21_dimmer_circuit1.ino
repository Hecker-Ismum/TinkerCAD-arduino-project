int pot=A0;
int led=9;
int read;//to read potentiometer
int write; // for writing to led

void setup ()
{
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  read= analogRead(pot);
  write= (255./1023.)*read;// renge 0 to 1023
  analogWrite(led, write);
  Serial.print("\nYou are writing value of  ");
  Serial.print(write);
}
