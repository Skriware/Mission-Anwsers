#include <Skribot.h> //dołączenie biblioteki

Skribot robot; //zdefiniowanie Skribota

void setup() {
  robot.AddDCRotor("Left"); //dodanie lewego silnika
  robot.AddDCRotor("Right"); //dodanie prawego silnika
  robot.SetSpeed(250); //ustawienie prędkości na maksymalne ustawienia
  
  //kształt kwadratu
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
