#include <Skribot.h> //dołączenie biblioteki do projektu

//zadanie polega na zaprogramowaniu Skribota, żeby poruszał się pomiędzy położonymi na podłodze znacznikami

Skribot robot; //zdefiniowanie Skribota 

void setup() {
  robot.AddDCRotor("Left"); //zdefiniowanie lewego silnika
  robot.AddDCRotor("Right"); //zdefiniowanie prawego silnika
  robot.SetSpeed(250); //ustawienie prędkości na maksymalną

 //trasa do przejechania przez robota
  robot.MoveForward(2000);
  robot.FaceRight(500);
  robot.MoveForward(2000);
  robot.FaceRight(500);
  robot.MoveForward(2000);
  robot.FaceRight(500);
  robot.MoveForward(2000); 
}

void loop() {
  

}
