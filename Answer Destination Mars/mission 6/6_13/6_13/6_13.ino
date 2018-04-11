#include <SkriBot.h>

SkriBot robot;
                        
void setup() {
  robot.AddLineSensor("L2");         
  robot.AddDCRotor("LEFT");       
  robot.AddDCRotor("RIGHT");
  robot.SetSpeed(250);
}

void loop() {
  if(robot.ReadLineSensor("L2")){           	

    robot.MoveBack(200);
    robot.TurnLeft(200);                		
                      
  }else{
    
    robot.MoveForward(200);               		
  }

}
