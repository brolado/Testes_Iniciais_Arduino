//Teste para aquisição de dados de pinos e analogicos para uma string e enviar pela serial

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
}

int Var_Digital;
int Var_Analogica;

void loop()
{
  if (Serial.available() > 0) 
  {
    Serial.println("OK");
    Serial.read();
  }
}
