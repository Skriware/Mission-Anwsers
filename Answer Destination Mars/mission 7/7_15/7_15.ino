#include <Skribot.h>
 
  Skribot robot;                                  
  int LeftSensor,RightSensor; 
                      
  void setup() {

  robot.AddDCRotor("LEFT");          
  robot.AddDCRotor("RIGHT");

  robot.AddLED("LED1");
  robot.AddLED("LED2");

  robot.SetSpeed(250);   
  
  robot.AddDistSensor("D1");        
  robot.AddDistSensor("D2");

}

void loop() {
   LeftSensor = robot.ReadDistSensor("D1");      
   RightSensor = robot.ReadDistSensor("D2");  

   
   robot.MoveForward(200);
   
   while(LeftSensor < 20 || RightSensor < 20){
      robot.TurnLEDOn(255, 0, 0);
      LeftSensor = robot.ReadDistSensor("D1");      
      RightSensor = robot.ReadDistSensor("D2");    
   }
   
   robot.TurnLEDOff();

    
    
   
}
