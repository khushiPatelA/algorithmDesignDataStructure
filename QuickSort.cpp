#include"QuickSort.h"
#include"Sort.h"
#include<iostream>
#include<vector>
using namespace std; 

//Partioning helping function 
int QuickSort::partition(vector<int> &values, int left, int right) {
    int pivotIndex = (right +left)/2;  
    if (right - left>3){
    pivotIndex = right - (right-left-3);  
    }
    int pivotValue = values.at(pivotIndex); //O(1)
    int i = left, j = right; 
    int temp;  
    while(i <= j) { //O(n)
        while(values[i] < pivotValue) { //O(n)
            i++;
        }
        while(values[j] > pivotValue) {
            j--;
        }
        if(i <= j) {
            temp = values[i];
            values[i] = values[j];
            values[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}


//Quick Sort helping function
void QuickSort::sort(vector<int> &values, int left, int right) {
    if(left < right) {
        int pivotIndex = partition(values, left, right);
        sort(values, left, pivotIndex - 1);
        sort(values, pivotIndex, right);
    }
}


//Public Sort function 
vector<int> QuickSort::sort(std::vector<int> list){
   sort(list, 0, list.size()-1);
   return list; 
}
