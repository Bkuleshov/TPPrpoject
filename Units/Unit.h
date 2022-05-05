#pragma once
#include<iostream>
#include<string>

class Unit {
 public:
  virtual ~Unit() = default;
  std::string unitID;
  int health;
  int cost;
};
