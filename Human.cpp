#include <string.h>
#include <iostream>
#include "Human.h"
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

char Human::makeMove(){
    cout<<"Enter move: "; 
    cin>>move; 
    return move; 
}

Human::~Human(){

}