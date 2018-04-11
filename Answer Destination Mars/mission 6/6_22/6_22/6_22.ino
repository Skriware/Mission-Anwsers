#include <SkriBot.h>


SkriBot robot;
bool LeftSensor;
bool RightSensor;                
                        
void setup() {
  robot.AddLineSensor("L1");         
  robot.AddLineSensor("L3");       
  
  robot.AddDCRotor("LEFT");        
  robot.AddDCRotor("RIGHT");
  robot.SetSpeed(250);
}

void loop() {
  LeftSensor   = robot.ReadLineSensor("L1");   
  RightSensor  = robot.ReadLineSensor("L2");
  
  if(!LeftSensor && !RightSensor){          
    
    robot.MoveForward();                 
                      
  }else if(LeftSensor){                                 
    
    robot.TurnLeft(200);               
    
  }else if(RightSensor){                   
    
    robot.TurnRight(200);                
  }

}
