int buttonState=0;
const int button=2;
int R=13;
int Y=12;
int G=8;

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop ()
{
  buttonState=digitalRead(button);
  if (buttonState==1)
  {
    digitalWrite(R, HIGH);
    Serial.print("STOP\n");
    delay(2000);
    digitalWrite(R, LOW);
    delay(500);
    
    digitalWrite(Y, HIGH);
    Serial.print("GET READY\n");
    delay(2000);
    digitalWrite(Y, LOW);
    delay(500);
    
    digitalWrite(G, HIGH);
    Serial.print("GO\n");
    delay(2000);
    digitalWrite(G, LOW);
  }
  
}
  



