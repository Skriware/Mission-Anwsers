#include <SkriBot.h>

SkriBot robot; 

void setup() {
  robot.AddDCRotor("Left");
  robot.AddDCRotor("Right");
  robot.SetSpeed(250);
for(int i=0; i <= 2; i=i+1){
      for(int j=0; j <= 1; j=j+1){
          robot.MoveForward(2000);
          robot.FaceRight(1000);
          robot.MoveForward(2000);
          robot.FaceRight(1000);
          robot.MoveForward(2000);
          robot.FaceRight(1000);
      }

      robot.FaceRight(2000);
}
    
}

void loop() {
   
   
  

}
