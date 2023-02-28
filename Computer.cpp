#include <string.h>
#include <iostream>
#include "Computer.h"
using namespace std;
Computer::Computer(){
    name = "Computer";
    move = 'R';
}

string Computer::getName(){
    return name; 
}

char Computer::makeMove(){
    return move;
}

Computer::~Computer(){}