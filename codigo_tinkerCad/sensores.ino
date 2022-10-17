
//DECLACAO DE VARIAVEIS
int forceSensor = A1;
int forceValue = 0;

int stangerGager = A0;
int stangerValue = 0;

float convertTensaoStanger = 0;
float convertTensaoForce = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(forceSensor, INPUT);
  pinMode(stangerGager, INPUT);
}

void loop()
{
  forceValue = analogRead(forceSensor);
  stangerValue = analogRead(stangerGager);
  
  /** 
  	5 valor maximo de tensão no pino
   Quando aplicado esse valor no pino o valor da conversão é 1023
   Dessa forma temos o valor em tensao
  **/
  
  //cor azul
  convertTensaoStanger = (stangerValue * 5) / 1023;
  
  //cor amarela
  convertTensaoForce = (forceValue * 5) / 1023;
 
  Serial.print(convertTensaoStanger);
  Serial.print(", ");
  Serial.println(convertTensaoForce);
  delay(100);


}