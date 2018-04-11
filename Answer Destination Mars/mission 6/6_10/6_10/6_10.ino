#include <SkriBot.h>

SkriBot robot;
                        
void setup() {
  robot.AddLineSensor("L2");         
  robot.AddLED("LED1");              
  robot.AddLED("LED2");
}

void loop() {
  if(robot.ReadLineSensor("L2")){           	
    
    robot.TurnLEDOn(255,0,0);                		
                      
  }else{
    robot.TurnLEDOff();               	
  }

}
