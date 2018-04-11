#include <SkriBot.h> //dołączenie biblioteki

SkriBot robot; //przydzielenie nazwy Skribotowi

void setup() {
  //kod umieszczony w tej funkcji zostanie wykonany raz:
  robot.AddDCRotor("Left"); //zdefiniowanie lewego silnika
  robot.AddDCRotor("Right"); //zdefiniowanie prawgo silnika
  robot.SetSpeed(250); //ustawienie prędkości silnika
  

}

void loop() {
  // kod umieszczony w tej funkcji będzie wykonywany ciągle:
  robot.MoveForward(2000); //silniki będą poruszały gąsienicami do przodu przez 2 sekundy

}
