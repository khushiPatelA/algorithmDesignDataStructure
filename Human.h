#ifndef Human_H
#define Human_H

#include "Player.h"
#include "Computer.h"
#include<string.h>
#include<iostream>
using namespace std;

class Human: public Player{
  public:
  Human();
  Human(string tempName); 
  char virtual makeMove();
  string virtual getName();
  ~Human(); 

};

#endif
