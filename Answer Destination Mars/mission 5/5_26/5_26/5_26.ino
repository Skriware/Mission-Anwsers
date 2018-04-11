#include <SkriBot.h>


  SkriBot robot;   
  
void setup() {
  
    robot.AddLED("LED1");              
    robot.AddLED("LED2");

}

void loop() {
  

   if(5+2==7){
             robot.TurnLEDOn(0,0,255);
   }

   if(5+2==2){
            robot.TurnLEDOn(255,0,0);
   }
    
}
