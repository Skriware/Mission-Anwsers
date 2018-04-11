#include <SkriBot.h>


  SkriBot robot;    
  
void setup() {
  
    robot.AddLED("LED1");              
    robot.AddLED("LED2");

}

void loop() {
    robot.TurnLEDOn(0,0,255,"LED1");
    robot.TurnLEDOn(255,0,0,"LED2");
         
}
