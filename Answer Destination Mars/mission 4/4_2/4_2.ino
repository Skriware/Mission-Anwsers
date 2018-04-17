#include <Skribot.h> //dołączenie biblioteki do projektu

//zadanie polega na implementacji pętli iteracyjnej

Skribot robot; //zdefiniowanie Skribota

void setup() {
  robot.AddDCRotor("Left"); //zdefiniowanie lewego silnika
  robot.AddDCRotor("Right"); //zdefiniowanie prawego silnika
  robot.SetSpeed(250); //ustawienie prędkości na maksymalną

  
  //pętla iteracyjna
  for(int i=0; i <= 3; i=i+1){ 
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
