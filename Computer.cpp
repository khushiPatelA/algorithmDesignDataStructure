#include "Computer.h"
#include<string.h>

Computer::Computer(){
    name = "Computer"; 
}

std::string Computer::getName(){
    return name; 
}

Move* Computer::makeMove(){
    return &newMove; 
}

Computer::~Computer(){}