#include"Move.h"
#include "Player.h"
#include "Referee.h"
#include<iostream>
#include<string.h>
using namespace std;

Referee::Referee(){}

/*Move* Referee::compareMoves(Move* player1, Move* player2){
    if (player1->getName() == "Rock" && player2->getName() == "Scissors") {
        return player1;
    }
    else if (player1->getName() == "Scissors" && player2->getName() == "Paper"){
        return player1;
    }
    else if (player1->getName() == "Paper" && player2->getName() == "Rock"){
        return player1;
    }
    else if (player1->getName() == player2->getName()){
        return nullptr;
    }
    else if (player1->getName() == "Monkey" && player2->getName() == "Ninja"){
        return player1;
    }
    else if (player1->getName() == "Monkey" && player2->getName() == "Robot"){
        return player1;
    }
    else if (player1->getName() == "Robot" && player2->getName() == "Ninja"){
        return player1;
    }
    else if (player1->getName() == "Robot" && player2->getName() == "Zombie"){
        return player1;
    }
    else if (player1->getName() == "Pirate" && player2->getName() == "Robot"){
        return player1;
    }
    else if (player1->getName() == "Pirate" && player2->getName() == "Monkey"){
        return player1;
    }
    else if (player1->getName() == "Ninja" && player2->getName() == "Zombie"){
        return player1;
    }
    else if (player1->getName() == "Ninja" && player2->getName() == "Pirate"){
        return player1;
    }
    else if (player1->getName() == "Zombie" && player2->getName() == "Pirate"){
        return player1;
    }
    else if (player1->getName() == "Zombie" && player2->getName() == "Monkey"){
        return player1;
    }
        else {
        return player2; 
    } 

}
*/ 

Move* Referee::compareMoves(Move* firstMove, Move* secMove){
    int size = firstMove->MovesBeaten.size(); 
    if (firstMove->getName() == secMove->getName()){
        return nullptr; 
    }
    for (int i=0; i<size; i++){
        if (firstMove->MovesBeaten.at(i) == secMove->getName()){
            return secMove;
            break; 
        }
    }
    return firstMove; 
}



Player* Referee::refGame(Player* player1, Player* player2){
    Move* firstMove = player1->makeMove();
    Move* secondMove =  player2->makeMove();
    Move* winningMove = compareMoves(firstMove, secondMove); 
    if (winningMove == nullptr){
        return nullptr; 
    }
    else if (firstMove->getName() == winningMove->getName()){
        return player2;
    }
    else {
        return player1; 
    }
}

Referee::~Referee(){}

