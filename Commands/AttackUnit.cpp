#include "Command.h"

void AttackUnit::execute(Game& game, int playerID, std::string info) {
  std::string attacker = "";
  std::string attacked = "";
  int i = info.find(" ");
  attacker = info.substr(0, i);
  attacked = info.substr(i + 1);
  int indexFrom = findUnitById(game.player[playerID], attacker);
  int indexTo = findUnitById(game.player[(playerID + 1) % 2], attacked);
  if (indexFrom == -1) {
    std::cout << "You have no such unit \n";
    return;
  }
  if (indexTo == -1) {
    std::cout << "Your enemy has no such unit \n";
    return;
  }
  if (game.player[playerID].army[indexFrom]->unitID[1] != 'f') {
    std::cout << "This is not a fighter, he cannot attack \n";
    return;
  }
  Fighter* f = dynamic_cast<Fighter*>(game.player[playerID].army[indexFrom]);
  f->attack(game.player[(playerID + 1) % 2].army[indexTo]);
  std::cout << "Attacked successfully \n";
  if (game.player[(playerID + 1) % 2].army[indexTo]->health <= 0) {
    std::cout << "Congratulations, you killed an enemy unit \n";
    delete game.player[(playerID + 1) % 2].army[indexTo];
    game.player[(playerID + 1) % 2].army.erase(game.player[(playerID + 1) % 2].army.begin() + indexTo);
  }
}
