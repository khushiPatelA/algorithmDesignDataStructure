#include"BubbleSort.h"
#include"Sort.h"
#include<iostream>
#include<vector>
using namespace std;


//Bubble Sort O(n^2)

vector<int> BubbleSort::sort(vector<int> list){
    int size = list.size(); //O(1)
    for (int i=0; i<size-1; i++){ //O(n)
        for (int j=0; j<size-i-1; j++){ //O(n)
            if (list.at(j)>list.at(j+1)){ 
                int temp = list.at(j); 
                list.at(j) = list.at(j+1);
                list.at(j+1) = temp;  //O(1)
            }
        }
    }
    return list; 
}
