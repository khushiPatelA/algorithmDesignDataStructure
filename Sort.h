#ifndef SORT_H
#define SORT_H
#include<iostream>
#include<vector>
class Sort{ //Absract class
public:
virtual std::vector<int> sort(std::vector<int> list) = 0; //Pure virtual function
};

#endif