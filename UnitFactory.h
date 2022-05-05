#pragma once
#include "Units/CheapFighter.h"
#include "Units/CheapWorker.h"
#include "Units/ExpensiveFighter.h"
#include "Units/ExpensiveWorker.h"

class UnitFactory {
 public:
  Unit* createUnit(std::string id) {
    if (id[0] == 'c' && id[1] == 'f') return new CheapFighter(id);
    if (id[0] == 'c' && id[1] == 'w') return new CheapWorker(id);
    if (id[0] == 'e' && id[1] == 'f') return new ExpensiveFighter(id);
    if (id[0] == 'e' && id[1] == 'w') return new ExpensiveWorker(id);
  }
};
