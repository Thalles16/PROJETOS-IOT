

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
}
  
void loop()
{
  if (digitalRead(2) == HIGH) // Verifica se o botão foi pressionado
  {
    digitalWrite(8, HIGH); // Acende o LED
    delay(2000);                     // Espera 2 segundos
    digitalWrite(8, LOW);  // Apaga o LED
    delay(1000);                     // Espera 1 segundo
  
  }
  if (digitalRead(2) == HIGH)
  { 
	digitalWrite(7, HIGH);
  	delay(2000);
  	digitalWrite(7, LOW);
  	delay(1000);
  }

}


