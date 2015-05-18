//Teste para aquisição de dados de pinos e analogicos para uma string e enviar pela serial

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  pinMode(22,INPUT);
}

int Var_Digital;
int Var_Analogica;
char Str_Envio[3] = {'A','A',1};

void loop()
{
  delay(500);
  Str_Envio[1] = digitalRead(22); 
  if (Serial.available() > 0) 
  {
    Serial.println("begin");
    Var_Digital = digitalRead(22);
    Serial.println(Var_Digital);
    Serial.println("end");
    Serial.read();
  }
}
