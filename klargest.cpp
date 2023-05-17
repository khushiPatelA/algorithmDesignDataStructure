#include<iostream>
#include<queue>
using namespace std; 

class klargest{
public:
int kth_largest(vector<int> values, int k);
};

int klargest::kth_largest(vector<int> values, int k){
    //create priority queue with ints, vector and a min heap style
    priority_queue<int, vector<int>, greater<int>> minHeap; 
    //loop through vector 
    for (int i=0; i<values.size(); i++){
        //stroe value of array in heap and heapify
        minHeap.push(values.at(i));
        //if the size of the heap excedes k, remove the top element and heapify
        if (minHeap.size()>k){
            minHeap.pop(); 
        }
    }
    //return the first element on the heap 
    return minHeap.top(); 
}