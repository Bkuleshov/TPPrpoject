#include<iostream>
#include "Player.h"
#include "Units/Unit.h"
#include "UnitFactory.h"
#include "Game.h"
#include "Commands/Command.h"

int main() {
  Game game = Game();
  game.launch();
}

