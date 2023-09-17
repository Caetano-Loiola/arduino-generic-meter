
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int pot = A0;
void setup()
{

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int potF = analogRead(pot);
  Serial.println(potF);
  
  if(potF <= 1000)
  {
    delay(10);
  	digitalWrite(led1, HIGH);
  } else {
  	digitalWrite(led1, LOW);
  }
  
  if(potF <= 700 )
  {
    delay(10);
  	digitalWrite(led2, HIGH);
  } else {
  	digitalWrite(led2, LOW);
  }
  
  if(potF <= 500 )
  {
    delay(10);
  	digitalWrite(led3, HIGH);
  } else {
  	digitalWrite(led3, LOW);
  }
  
  if(potF <= 300 )
  {
    delay(10);
  	digitalWrite(led4, HIGH);
  } else {
  	digitalWrite(led4, LOW);
  }
  
  if(potF <= 150 )
  {
    delay(10);
  	digitalWrite(led5, HIGH);
  } else {
  	digitalWrite(led5, LOW);
  }
  
  if(potF <= 30)
  {
    delay(10);
  	digitalWrite(led6, HIGH);
  } else {
  	digitalWrite(led6, LOW);
  }

}