#pragma once
#include "Unit.h"

class Fighter: public Unit {
 public:
  int strength;

  void attack(Unit* unit) {
    unit->health -= strength;
  }
};
