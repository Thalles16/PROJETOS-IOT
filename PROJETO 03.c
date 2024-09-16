// C++ code
//
void setup()
{  
  pinMode(6, INPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  int movimento = digitalRead(6);
  if(movimento){
 	digitalWrite(13, HIGH);
    delay(2000);
    tone(10, 523, 1000);   
    }
  else {
  	digitalWrite(13, LOW); 
	noTone(10);     
   	} 
}
