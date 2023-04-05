#ifndef BUBBLE_H
#define BUBBLE_H
#include"Sort.h"
class BubbleSort: public Sort{
public: 
virtual std::vector<int> sort(std::vector<int> list); //Virtual sort 
}; 

#endif