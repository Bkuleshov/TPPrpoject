#pragma once
#include "Worker.h"

class CheapWorker: public Worker {
 public:
  CheapWorker(std::string id) {
    unitID = id;
    health = 15;
    cost = 10;
    efficiency = 4;
  }

};
