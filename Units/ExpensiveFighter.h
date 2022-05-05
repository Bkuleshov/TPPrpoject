#pragma once
#include "Fighter.h"

class ExpensiveFighter: public Fighter {
 public:
  ExpensiveFighter(std::string id) {
    unitID = id;
    health = 60;
    cost = 60;
    strength = 20;
  }
};
