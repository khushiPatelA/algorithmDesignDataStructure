#include <string.h>
#include <iostream>
#include "Referee.h"
using namespace std;

Referee::Referee(){

}

Player* Referee::refGame(Player* player1, Player* player2){
    if (player1->move == 'R' && player2->move == 'S') {
        return player1;
    }
    else if (player1->move == 'S' && player2->move == 'P'){
        return player1;
    }
    else if (player1->move == 'P' && player2->move == 'R'){
        return player1;
    }
    else if (player1->move == player2->move){
        return nullptr;
    }
    else {
        return player2; 
    }
}

Referee::~Referee(){}