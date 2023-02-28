#include<iostream>
#include<string.h>
#include"Player.h" 
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;
int main(){
   Referee Ref;
   Human H1("Mei");
   H1.makeMove();
   cout<<H1.move<<endl;
   Computer C1;
   Player* winner = Ref.refGame(&H1, &C1);
   if (winner == nullptr){
      cout<<"It's a tie"<<endl; 
   }
   else {
      cout<<winner->getName()<<" Wins"<<endl; 
   }
}