#ifndef PLAYER_H
#define PLAYER_H
#include <string.h>
#include <iostream>
#include "Move.h"


class Player {
 protected:
  std::string name;
  char move;
public:
  Player();
  std::string virtual getName() = 0;
  virtual Move* makeMove() = 0;
  ~Player();
};

#endif