#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include<string.h>
#include <vector>


class Move{
protected: //protected because the child is using it
std::string moveName;
public: //all functions are called by other unrelated classes
Move();
Move(std::string tempName); 
std::string getName();
std::vector<std::string> MovesBeaten; 
~Move(); 
};

class Rock: public Move{
public:
Rock();
};

class Paper: public Move{
public:
Paper();
};

class Scissors: public Move{
public:
Scissors();
};

class Robot: public Move{
public:
Robot();
};

class Monkey: public Move{
public:
Monkey();
};

class Pirate: public Move{
public:
Pirate();
};

class Ninja: public Move{
public:
Ninja();
};

class Zombie: public Move{
public:
Zombie();
};

#endif