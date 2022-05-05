#include<iostream>
#include "Player.h"
#include "Units/Unit.h"
#include "UnitFactory.h"
#include "Game.h"
#include "Commands/Command.h"

int main() {
  int n;
  std::cout << "Enter the number of players \n";
  std::cin >> n;
  if (n < 2) {
    std::cout << "Incorrect input. Try harder next time! \n";
    return 0;
  }
  Game game = Game(n);
  game.launch();
}

