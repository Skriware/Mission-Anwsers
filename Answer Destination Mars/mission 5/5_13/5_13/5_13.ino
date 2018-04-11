#include <SkriBot.h>


  SkriBot robot;   
  
void setup() {
  
    robot.AddLED("LED1");              
    robot.AddLED("LED2");

}

void loop() {
    robot.TurnLEDOn(255,255,255);     

    delay(2000);   
                      
    robot.TurnLEDOff();  
    delay(2000);
    
}
