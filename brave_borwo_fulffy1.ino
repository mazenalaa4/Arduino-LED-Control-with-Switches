// C++ code
//
int green1= 2;
int red1= 3;
int red2 =4;
int red3=5;
int red4=6;
int green2=7;
int switch1 =8;
int switch2=9;
int reading1=0;
int reading2=0;
void setup()
{
  for (int i=2;i<8;i++)
  {pinMode(i, OUTPUT);}
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
  
}

void loop()
{
reading1=digitalRead(switch1);
  if (reading1==HIGH)
  {digitalWrite(green1,1);
   digitalWrite(red2,1);}
  else 
  {digitalWrite(green1,0);
   digitalWrite(red2,0);}
reading2=digitalRead(switch2);
  if (reading2==HIGH)
  {digitalWrite(green2,1);
   digitalWrite(red4,1);}
  else 
  {digitalWrite(green2,0);
   digitalWrite(red4,0);}
}