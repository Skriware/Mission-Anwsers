#include <Skribot.h>


 Skribot robot;   
  
void setup() {
  
    robot.AddLED("LED1");              
    robot.AddLED("LED2");

}

void loop() {
  

   if(5+2==7){
             robot.TurnLEDOn(0,0,255);
   }

   else{
            robot.TurnLEDOn(255,0,0);
   }
    
}
