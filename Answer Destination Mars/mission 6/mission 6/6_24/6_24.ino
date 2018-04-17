#include <Skribot.h>

Skribot robot;
bool LeftSensor;
bool RightSensor;
bool CenterSensor;                    

void setup() {
  robot.AddLineSensor("L1");          
  robot.AddLineSensor("L2"); 
  robot.AddLineSensor("L3");      
  
  robot.AddDCRotor("LEFT");           
  robot.AddDCRotor("RIGHT");
  robot.SetSpeed(250);

}

void loop() {

LeftSensor 		= robot.ReadLineSensor("L1");
CenterSensor 	= robot.ReadLineSensor("L2");
RightSensor		= robot.ReadLineSensor("L3");				
	
if(!LeftSensor && !RightSensor && CenterSensor){                                  
    robot.MoveForward();
}else if(LeftSensor){                                                             
    robot.FaceLeft(150);                                                         
}else if(RightSensor){                                                            
    robot.FaceRight(150);                                                     
}else if(CenterSensor && RightSensor){                                           
    robot.FaceRight(300);
}else if(LeftSensor && CenterSensor){                                             
    robot.FaceLeft(300);
}
else{
  	robot.FaceRight(100);
}

    
    
}
