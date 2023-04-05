#include "RecursiveBinarySearch.h"
#include<iostream>
#include<vector>
using namespace std; 

//private search helping function
bool RecursiveBinarySearch::search(std::vector<int> list, int element, int start, int end){
int middle = (start + end)/2; //O(1)
if (end<start){ //base case 1
    return false; 
} 
if (list.at(middle) == element){ //base case 2
    return true;
}else if(element<list.at(middle)){ //O(logn)
    end = middle-1;
} else {
    start = middle +1; 
}
return search(list, element, start, end); 
} 


bool RecursiveBinarySearch::search(std::vector<int> list, int element){
    return search(list, element, 0, list.size()-1); 
}
