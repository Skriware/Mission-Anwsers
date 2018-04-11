#include <SkriBot.h>

  SkriBot robot;                                  
  int LeftSensor,RightSensor;  
                    
void setup() {

  robot.AddDCRotor("LEFT");          
  robot.AddDCRotor("RIGHT");

  robot.SetSpeed(250);              
  
  robot.AddDistSensor("D1");         
  robot.AddDistSensor("D2");

}

void loop() {
   LeftSensor = robot.ReadDistSensor("D1");       
   RightSensor = robot.ReadDistSensor("D2");  

   while(LeftSensor > 20 && RightSensor > 20){       
      robot.MoveForward(200);
      LeftSensor = robot.ReadDistSensor("D1");       
      RightSensor = robot.ReadDistSensor("D2");  
   }
   
   while(LeftSensor < 20 || RightSensor < 20){
      if(LeftSensor < 20){
        robot.TurnRight(200);
      }

      if(RightSensor <20) {
        robot.TurnLeft(200);
      } 
         
      LeftSensor = robot.ReadDistSensor("D1");       
      RightSensor = robot.ReadDistSensor("D2");                
   }
     
   
}
