#include "Command.h"

void BuyUnit::execute(Game& game, int playerID, std::string info) { 
  if ((info[0] == 'c' || info[0] == 'e') && (info[1] == 'f' || info[1] == 'w')) {
    if (game.player[playerID].money < getUnitCost(info)) {
      std::cout << "You can't buy this unit! \n";
      return;
    }
    game.player[playerID].money -= getUnitCost(info);
    std::string id = game.player[playerID].playerID.substr(6) + info;
    int unitNumber = game.player[playerID].army.size() + 1;
    id += std::to_string(unitNumber);
    game.player[playerID].army.push_back(game.factory.createUnit(id));
    std::cout << "Fresh meat for the grinder! \n";
  }
  else {
      std::cout << "Incorrect type of unit \n";
  }
}

