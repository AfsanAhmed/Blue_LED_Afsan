#include "iostream"
//#include <wiringPi.h>
//#include <stdbool.h>

#define LED_PIN 13

int main()
{
  /*wiringPiSetup();

 pinMode(0 , OUTPUT);
 pinMode(1, Input);

 while(1)
 {
     if (digitalRead(1)== 1)
     {
         digitalWrite(0, !digitalRead(0));
         delay(500);
     }
 }
 */

   pinMode(LED_PIN, OUTPUT);
   while (true)
   {
       delay(1000);
       digitalWrite(LED_PIN, 0)
       delay(1000);
       digitalWrite(LED_PIN, 1)

   }
   
   return 0;

}

