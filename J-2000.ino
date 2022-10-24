// Proves de GIT
// No serveix pel codi

#include <SoftwareSerial.h>

SoftwareSerial J2000 (10,11); // RX,TX
char llegit;

void setup ()
{
  Serial.begin (19200);
  J2000.begin (9600);
  //J2000.print(0x0A);
}

void loop ()
{
  if (J2000.available())
  {
    //Serial.write ("Inicio");
    llegit=J2000.read();
    Serial.write(llegit);
  }
  //J2000.print(0x0C);
  //delay (5000);
}
