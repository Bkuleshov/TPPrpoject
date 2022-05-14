#include "UnitFactory.h"

Unit* UnitFactory::createUnit(std::string id) {
  int isWorker = count(id.begin(), id.end(), 'w');
  int isExpensive = count(id.begin(), id.end(), 'e');
  if (isExpensive == 0 && isWorker == 0) return new CheapFighter(id);
  if (isExpensive == 0 && isWorker == 1) return new CheapWorker(id);
  if (isExpensive == 1 && isWorker == 0) return new ExpensiveFighter(id);
  if (isExpensive == 1 && isWorker == 1) return new ExpensiveWorker(id);
}
