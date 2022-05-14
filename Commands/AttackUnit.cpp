#include "Command.h"

void AttackUnit::execute(Game& game, int playerID, std::string info) {
  std::string attacker = "";
  std::string attacked = "";
  int i = info.find(" ");
  attacker = info.substr(0, i);
  attacked = info.substr(i + 1);
  int indexFrom = findUnitById(game.player[playerID], attacker);
  int indexTo = -1, playerTo = -1;
  for (int i = 0; i < game.player.size(); ++i){
    if (i == playerID) continue;
    indexTo = findUnitById(game.player[i], attacked);
    if (indexTo != -1) {
      playerTo = i;
      break;
    }
  }
  if (indexFrom == -1) {
    std::cout << "You have no such unit \n";
    return;
  }
  if (indexTo == -1) {
    std::cout << "Your enemies have no such unit \n";
    return;
  }
  if (count(attacker.begin(), attacker.end(), 'f') == 0) {
    std::cout << "This is not a fighter, he cannot attack \n";
    return;
  }
  Fighter* f = dynamic_cast<Fighter*>(game.player[playerID].army[indexFrom]);
  f->attack(game.player[playerTo].army[indexTo]);
  std::cout << "Attacked successfully \n";
  if (game.player[playerTo].army[indexTo]->health <= 0) {
    std::cout << "Congratulations, you killed an enemy unit \n";
    delete game.player[playerTo].army[indexTo];
    game.player[playerTo].army.erase(game.player[playerTo].army.begin() + indexTo);
  }
}
