#include "Command.h"

void Work::execute(Game& game, int playerID, std::string info) {
  int index = findUnitById(game.player[playerID], info);
  if (index == -1) {
    std::cout << "You do not have such unit \n";
    return;
  }
  if (game.player[playerID].army[index]->unitID[1] != 'w') {
    std::cout << "This is not a worker \n";
    return;
  }
  std::cout << "You just got a little richer \n";
  Worker* w = dynamic_cast<Worker*>(game.player[playerID].army[index]);
  w->work(game.player[playerID]);
}
