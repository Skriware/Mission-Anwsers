#include <SkriBot.h>

SkriBot robot; 

void setup() {
  robot.AddDCRotor("Left");
  robot.AddDCRotor("Right");
  robot.SetSpeed(250);

  for or (int i=0; i <= 3; i=i+1){
    robot.MoveForward(2000);
    robot.FaceRight(500);
    robot.MoveForward(2000);
    robot.FaceRight(500);
    robot.MoveForward(2000);
    robot.FaceRight(500);
    robot.MoveForward(2000);
  
   }
  
}

void loop() {
  
  

}
