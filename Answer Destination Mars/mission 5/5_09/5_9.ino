#include <Skribot.h>


Skribot robot;    
  
void setup() {
  
    robot.AddLED("LED1");              
    robot.AddLED("LED2");

}

void loop() {
    robot.TurnLEDOn(255,255,0);     
}
