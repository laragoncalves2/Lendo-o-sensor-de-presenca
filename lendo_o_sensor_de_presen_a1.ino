// C++ code
//

int pinoLed = 4;
int sensorPresenca = 7;


void setup()
{
  pinMode(pinoLed, OUTPUT);
  pinMode(sensorPresenca, INPUT);
  
}

void loop()
{
  
  if(digitalRead(sensorPresenca)== HIGH){
  digitalWrite(pinoLed, HIGH);
  delay(5000);
  }else{
  digitalWrite(pinoLed, LOW); 
  }
}