#include "Queries.h"

int findUnitById(const Player& player, const std::string id) {
    for (int i = 0; i < player.army.size(); ++i) {
      if (player.army[i]->unitID == id) {
        return i;
      }
    }
    return -1;
  }
  
  int getUnitCost(std::string info) {
    if (info[0] == 'c' && info[1] == 'w') return 10;
    if (info[0] == 'c' && info[1] == 'f') return 10;
    if (info[0] == 'e' && info[1] == 'w') return 25;
    if (info[0] == 'e' && info[1] == 'f') return 60;
  }

