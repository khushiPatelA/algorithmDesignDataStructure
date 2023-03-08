#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include<iostream>
#include<string.h>


class Computer : public Player {
private:
  Rock newMove; 
public:
  Computer();
  virtual Move* makeMove();
  virtual std::string getName();
  ~Computer(); 
}; 

#endif