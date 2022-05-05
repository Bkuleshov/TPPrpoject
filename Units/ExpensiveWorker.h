#pragma once
#include "Worker.h"

class ExpensiveWorker: public Worker {
 public:
  ExpensiveWorker(std::string id) {
    unitID = id;
    health = 35;
    cost = 25;
    efficiency = 15;
  }
};
