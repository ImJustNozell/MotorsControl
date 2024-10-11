int N1=5; 
int N2=6; 
int N3=7; 
int N4=8; 

int time1 = 2000; 
int time2 = 1000; 

int time3 = 2000; 
int time4 = 1000; 


 int time8 = 2500; 
 int time9 = 1000; 

void setup()
{
  pinMode(N1, OUTPUT);
  pinMode(N2, OUTPUT);
  pinMode(N3, OUTPUT);
  pinMode(N4, OUTPUT);
}

void loop()
{
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  delay (time2);
  
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, HIGH);
  delay (time1);
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  delay (time2);

  digitalWrite(N1, HIGH);
  digitalWrite(N2, LOW);
  delay (time1);

  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  delay (time3);
  
  
  digitalWrite(N4, LOW);
  digitalWrite(N3, HIGH);
  delay (time3);
  
  digitalWrite(N4, LOW);
  digitalWrite(N3, LOW);
  delay (time4);

  digitalWrite(N4, HIGH);
  digitalWrite(N3, LOW);
  delay (time3);
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(N3, LOW);
  digitalWrite(N4, LOW);
  delay (time9);
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, HIGH);
  digitalWrite(N3, HIGH);
  digitalWrite(N4, LOW);
  delay (time8);
  
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(N3, LOW);
  digitalWrite(N4, LOW);
  delay (time9);
  
  digitalWrite(N1, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(N3, LOW);
  digitalWrite(N4, HIGH);
  delay (time8);
  
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(N3, LOW);
  digitalWrite(N4, LOW);
}