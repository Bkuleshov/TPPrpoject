#pragma once
#include "../Game.h"
#include "../Queries.h"
#include<algorithm>

class Game;

class Command {
 public:
  virtual void execute(Game&, int, std::string) = 0;
};

class AttackUnit: public Command {
 public:
  void execute(Game&, int, std::string) override;
};

class BuyUnit: public Command {
 public:
  void execute(Game&, int, std::string) override;
};

class Work: public Command {
 public:
  void execute(Game&, int, std::string) override;
};
