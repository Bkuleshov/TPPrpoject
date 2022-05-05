#include "Game.h"

Game::Game(int n) {
  for (int i = 0; i < n; ++i) {
    std::string id = "player";
    id += std::to_string(i + 1);
    player.push_back(Player(150, id));
  }
  factory = UnitFactory();
}

void Game::launch() {
  Observer observer = Observer();
  std::map<std::string, Command*> commands;
  commands["attack"] = new AttackUnit();
  commands["work"] = new Work();
  commands["buy"] = new BuyUnit();
  std::cout << "Welcome! Let's start the game. \n";
  for (int j = 0; j < 10; ++j) {
    for (int i = 0; i < player.size(); ++i) {
      while (true) {
        std::cout << "Please enter your command \n";
        std::string command;
        std::cin >> command;
        if (commands.count(command)){
          std::cout << "Enter additional information \n";
          std::string info;
          std::cin >> info;
          if (command == "attack") {
            std::string addInfo;
            std::cin >> addInfo;
            info += " ";
            info += addInfo;
          }
          commands[command]->execute(*this, i, info);
        }
        else if (command == "end") {
          std::cout << "OK, ending your move \n";
          break;
        }
        else if (command == "terminate") {
          std::cout << "Terminating the game \n";
          return;
        }
        else if (command == "info") {
          player[i].getInfo();
        }
        else {
          std::cout << "Incorrect command, try again \n";
        }
      }
      if (observer.evaluate(*this)) {
        return;
      }
    }
  }
}
