#ifndef Computer_H
#define Computer_H
#include<string.h>
#include<iostream>

#include "Player.h"
class Computer : public Player {
 public:
  Computer();
  char virtual makeMove();
  string virtual getName();
  ~Computer(); 
};
#endif