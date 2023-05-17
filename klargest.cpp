#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    //create a priority que with integers, vectors<int> and a min heap style
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    //iterating through the vector 
    for (int num : values) {
        //pushing the vector values in the heap and then heapify
        minHeap.push(num);
        //if the size of the heap is greater than k, then remove the top element and then heapify
        if (minHeap.size() > k)
            minHeap.pop();
    }
    //return the first element 
    return minHeap.top();
}
