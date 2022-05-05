#pragma once
#include "Fighter.h"

class CheapFighter: public Fighter {
 public:
  CheapFighter(std::string id) {
    unitID = id;
    health = 20;
    cost = 10;
    strength = 12;
  }
};

