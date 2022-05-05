#include "Player.h"

void Player::getInfo() const {
  std::cout << "Your id is " << playerID << "\n";
  std::cout << "You have " << money << " coins \n";
  std::cout << "You have " << army.size() << " units \n";
  for (int i = 0; i < army.size(); ++i) {
    std::cout << army[i]->health << " " << army[i]->unitID << "\n";
  }
}
