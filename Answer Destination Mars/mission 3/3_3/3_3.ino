#include <Skribot.h> //dołączenie biblioteki

Skribot robot; //przydzielenie nazwy Skribotowi

void setup() {
 //kod umieszczony w tej funkcji zostanie wykonany raz:
  robot.AddDCRotor("Left"); //zdefiniowanie lewego silnika
  robot.AddDCRotor("Right"); //zdefiniowanie prawgo silnika
  robot.SetSpeed(250); //ustawienie prędkości silnika

}

void loop() {
  // kod umieszczony w tej funkcji będzie wykonywany ciągle:
  robot.FaceLeft(2000); //Skribot skręca w lewo
  robot.FaceRight(2000); //Skribot skręca w prawo

}
