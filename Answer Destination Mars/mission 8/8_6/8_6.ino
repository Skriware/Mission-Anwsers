#include <Skribot.h>
 
  Skribot robot;                      
       
void setup() {
  robot.AddDCRotor("LEFT");
  robot.AddDCRotor("RIGHT");
  robot.SetSpeed(250);             
  robot.AddClaw();

  robot.MoveForward(2000);
  robot.CloseClaw();
  robot.Pick_Up(); 

  robot.MoveBack(2000);
  robot.Put_Down();                                     
  robot.OpenClaw();
  
}

void loop() {
 
}
