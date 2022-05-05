#pragma once
#include<vector>
#include "Units/Unit.h"

class Player {
 public:
  Player(int money, std::string id): money(money), playerID(id){}
  void getInfo() const;
  int money;
  std::string playerID;
  std::vector<Unit*> army;
};
