#include "Game.h"

bool Observer::evaluate(Game& game) {
  std::vector<int> costs (game.player.size(), 0);
  for (int i = 0; i < game.player.size(); ++i) {
    costs[i] += game.player[i].money;
    for (int j = 0; j < game.player[i].army.size(); ++j) {
      costs[i] += game.player[i].army[j]->cost;
    }
  }
  for (int i = 0; i < game.player.size(); ++i) {
    if (costs[i] > 200) {
      std::cout << "Player " << game.player[i].playerID << " has reached conditions for economic victory. Congratulations! \n";
      return true;
    }
  }
  int numberOfLost = 0;
  for (int i = 0; i < game.player.size(); ++i) {
    if (costs[i] < 10) {
      std::cout << "Player " << game.player[i].playerID << " has lost. Thanks for playing! \n";
      ++numberOfLost;
    }
  }
  if (numberOfLost == game.player.size() - 1) {
    for (int i = 0; i < game.player.size(); ++i) {
      if (costs[i] >= 10) {
        std::cout << "Player " << game.player[0].playerID << " has reached conditions for military victory. Congratulations! \n";
        return true; 
      }
    }
  }
  if (numberOfLost == game.player.size()) {
    std::cout << "Everybody died. Not sure if this is possible, but congratulations - you all lost! \n";
    return true;
  }
  return false;
}
