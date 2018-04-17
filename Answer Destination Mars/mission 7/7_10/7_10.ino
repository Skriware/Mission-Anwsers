#include <Skribot.h>
 
Skribot robot;  
int Distance;                                
                      
void setup() {

  robot.AddLED("LED1");
  robot.AddLED("LED2");            
  robot.AddDistSensor("D1");         
  robot.AddDistSensor("D2");

}

void loop() {
   Distance = robot.ReadDistSensor("D1");       

   if(Distance < 20){      
      robot.TurnLEDOn(0,255,255);
   }else{                    
      robot.TurnLEDOff();
   }
   
}
