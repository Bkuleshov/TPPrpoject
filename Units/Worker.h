#pragma once
#include "Unit.h"

class Worker: public Unit {
 public:
  int efficiency;

  void work(Player& owner) {
    owner.money += efficiency;
  }
};
