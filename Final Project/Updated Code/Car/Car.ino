
#include <ZumoMotors.h>

ZumoMotors motors;
void setup()
{
 Serial.begin(9600);
}
void loop()
{ 
   motors.setSpeeds(400,400);
   delay(2000);
 }

