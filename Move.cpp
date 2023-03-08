#include "Move.h"
#include<iostream>
#include<string.h>
using namespace std;
Move::Move(){}

Move::Move(string tempName){
    moveName = tempName;
}

string Move::getName(){
 return moveName; 
}

Move::~Move(){}

Rock::Rock(){
    moveName = "Rock"; 
    MovesBeaten.push_back("Scissors");
}

Paper::Paper(){
    moveName = "Paper"; 
    MovesBeaten.push_back("Rock");
}

Scissors::Scissors(){
    moveName = "Scissors"; 
    MovesBeaten.push_back("Paper");
}

Monkey::Monkey(){
    moveName = "Monkey"; 
    MovesBeaten.push_back("Ninja");
    MovesBeaten.push_back("Robot");
}

Robot::Robot(){
    moveName = "Robot"; 
    MovesBeaten.push_back("Ninja");
    MovesBeaten.push_back("Zombie");
}

Pirate::Pirate(){
    moveName = "Pirate"; 
    MovesBeaten.push_back("Robot");
    MovesBeaten.push_back("Monkey");
}

Ninja::Ninja(){
    moveName = "Ninja"; 
    MovesBeaten.push_back("Pirate");
    MovesBeaten.push_back("Zombie");
}

Zombie::Zombie(){
    moveName = "Zombie"; 
    MovesBeaten.push_back("Pirate");
    MovesBeaten.push_back("Monkey");
}