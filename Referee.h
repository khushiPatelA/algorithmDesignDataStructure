#ifndef REFEREE_H
#define REFEREE_H

#include"Move.h"
#include "Player.h"
#include<iostream>
#include<string.h>

class Referee{
public:
Referee();
Move* compareMoves(Move* firstMove, Move* secMove); 
Player* refGame(Player* player1, Player* player2);
~Referee();    
}; 

#endif