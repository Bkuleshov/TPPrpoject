#pragma once
#include<map>
#include "Player.h"
#include "Observer.h"
#include "UnitFactory.h"

class Game {
 public:
  std::vector<Player> player;
  UnitFactory factory;
  Game();
  void launch();
};