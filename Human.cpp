#include"Move.h"
#include "Player.h"
#include "Human.h"
#include<iostream>
#include<string.h>
using namespace std;

Human::Human(){
    name = "Human";
}

Human::Human(string tempName){
    name = tempName;
}

string Human::getName(){
    return name;
}

Move* Human::makeMove(){
    string tmove; 
    cout<<"Enter move: "; 
    cin>>tmove; 
    if (tmove == "Rock"){
        newMove = new Rock();
    }else if (tmove == "Paper"){
        newMove = new Paper();
    }else if (tmove == "Scissors"){
        newMove = new Scissors();
    }else if (tmove == "Monkey"){
        newMove = new Monkey();
    }else if (tmove == "Robot"){
        newMove = new Robot();
    }else if (tmove == "Pirate"){
        newMove = new Pirate();
    }else if (tmove == "Ninja"){
        newMove = new Ninja();
    }else{
        newMove = new Zombie();
    }
    return newMove; 
}

Human::~Human(){}