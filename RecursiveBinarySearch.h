#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include<iostream>
#include<vector>

//Recursive Search
class RecursiveBinarySearch{
public: //public search function
bool search(std::vector<int> list, int);
private: //private helping function 
bool search(std::vector<int> list, int element, int start, int end);
}; 

#endif