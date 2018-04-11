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

   if(LeftSensor > 20 || RightSensor > 20){       
      robot.MoveForward(200);
   }else {
      robot.MoveBack(200);
   }
   
}
