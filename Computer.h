#ifndef Computer_H
#define Computer_H

#include "Player.h"
class Computer : public Player {
 public:
  Computer();
  char virtual makeMove();
  string virtual getName();
  ~Computer(); 
};
#endif