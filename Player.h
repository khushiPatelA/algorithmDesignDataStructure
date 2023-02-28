#ifndef Player_H
#define Player_H
using namespace std; 
class Player{
    public:
    string name;
    char move;
    Player();
    char virtual makeMove() = 0;
    string virtual getName() = 0;
    ~Player(); 
};

#endif