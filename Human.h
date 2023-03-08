#ifndef HUMAN_H
#define HUMAN_H
#include"Move.h"
#include "Player.h"
#include<iostream>
#include<string.h>

class Human: public Player{
  private:
  Move* newMove;
  public: 
  Human();
  Human(std::string tempName); 
  virtual Move* makeMove();
  std::string virtual getName();
  ~Human(); 
}; 

#endif