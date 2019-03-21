int count=0;
float V_A0;                                     //  Pot Voltage
float V_A1;                                     //  Pre Op-Amp Voltage
float V_A2;                                     //  Post Op-Amp Voltage
int V_D52;                                     //  Post Op-Amp Voltage (Digital)
void setup()
{
  Serial.begin(9600); 
}

void loop()
{

  V_A0 = (analogRead(A0) * 5) / 1.024;        //  Pot Voltage milivolt scale      
  V_A1 = (analogRead(A1) * 5) / 1.024;        //  Pre Op-Amp Voltage milivolt scale      
  V_A2 = (analogRead(A2) * 5) / 1.024;        //  Post Op-Amp Voltage 
  V_D52 = digitalRead(52) * 5000;             //  Post Op-Amp Voltage (Digital Read) 0-5000 scale     

  Serial.print(V_A0);                         //  Pot Voltage
  Serial.print("\t");                         //tab
  Serial.print(V_A1);                         //  Pre Op-Amp Voltage
  Serial.print("\t");                         //tab
  Serial.print(V_A2);                         //  Post Op-Amp Voltage
  Serial.print("\t");                         //tab
  Serial.println(V_D52);                      //  Post Op-Amp Voltage (Digital)  
}
