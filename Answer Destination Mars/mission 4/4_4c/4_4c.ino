#include <Skribot.h>

Skribot robot; 

void setup() {
  robot.AddDCRotor("Left");
  robot.AddDCRotor("Right");
  robot.SetSpeed(250);

for(int i=0; i <= 1 i=i+1){
    robot.MoveForward(2000);
    robot.FaceRight(1000);
    robot.MoveForward(2000);
    robot.FaceRight(1000);
    robot.MoveForward(2000);
    robot.FaceRight(1000);
  
}
    
}

void loop() {
   
   
  

}
