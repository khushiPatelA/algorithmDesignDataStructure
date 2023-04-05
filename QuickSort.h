#ifndef QUICKSORT_H
#define QUICKSORT_H
#include"Sort.h"
#include<iostream>
#include<vector>


class QuickSort:public Sort{
public:
virtual std::vector<int> sort(std::vector<int> list); //virtual function
private: //private helping functions
int partition(std::vector<int> &values, int left, int right);
void sort(std::vector<int> &values, int left, int right);
}; 

#endif