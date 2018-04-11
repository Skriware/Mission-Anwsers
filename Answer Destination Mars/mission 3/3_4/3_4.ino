#include <SkriBot.h>

SkriBot robot; 

void setup() {
  robot.AddDCRotor("Left");
  robot.AddDCRotor("Right");
  robot.SetSpeed(250);
  //square shape
  robot.MoveForward(2000);
  robot.FaceRight(1000);
  robot.MoveForward(2000);
  robot.FaceRight(1000);
  robot.MoveForward(2000);
  robot.FaceRight(1000);
  robot.MoveForward(2000);
  
}

void loop() {
  
  

}
