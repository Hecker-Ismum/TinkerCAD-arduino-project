const float baselineTem=20.0;
const int SensorPin =A2,redPin=0;
bluePin=1,greenPin=2;
float temp;

bool yellow[]={1,1,0},red[]={1,0,0},
  green[]={0,1,0},blue[]={0,0,1},
  white[]={1,1,1},cyan[]={0,1,1},
  off[]={0,0,0};
void setup()
{pinMode(redPin,OUTPUT);
 pinMode(bluePin,OUTPUT);
 pinMode(greenPin,OUTPUT);
 pinMode(5,OUTPUT);
 digitalWrite(5,HIGH);
}
void loop()
{
  readSensor();
  colorConditions();
}
void colorConditions()
{
  if(temp<=9.0) ledControlBlink(white);
  if(temp>=35.0) ledControlBlink(red);
  if(temp>=10.0 &&temp<=14.0) ledControl(white);
  if(temp>=15.0 && temp<=20.0) ledControl(cyan);
  if(temp>=21 && temp <=24) ledControl(green);
  if(temp>=25&&temp<=29) ledControl(yellow);
  if(temp>=30)ledControl(red);
  if(temp >=25 && temp<=29)
    