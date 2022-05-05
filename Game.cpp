#include "Game.h"

Game::Game() {
  player.push_back(Player(150, "player1"));
  player.push_back(Player(150, "player2"));
  factory = UnitFactory();
}

void Game::launch() {
  //Observer* observer = new Observer(this);
  std::cout << "Welcome! Let's start the game \n";
}
