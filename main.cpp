#include"Move.h"
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    /*Human H1("Mel");
    Human H2("Khushi"); 
    Referee R1;
    Player* winner = R1.refGame(&H1, &H2); 
    cout<<winner->getName()<<" Wins!"<<endl; */

    Human H1;
    Computer C1;
    Referee R1;
    Player* winner = R1.refGame(&H1, &C1);
    cout<<winner->getName()<<endl; 
    return 0; 
}