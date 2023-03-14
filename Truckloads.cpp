#include "Truckloads.h"
#include<iostream>
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates< 0 || loadSize <=0){
        return -1;
    }
    else if (numCrates<=loadSize){
        return 1;
    }
    else {
        return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize); 
    }
}