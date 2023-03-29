#include "Finder.h"
#include<string>
#include <algorithm>
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2){
    vector<int> result(s2.size(), -1); //initialising a vector of size the same as s2 with all elements -1
    int index = 0; //initialising a new index to not overloop elements that have been checked before
    for (size_t i =1; i<=s2.size(); i++){
        size_t found = s1.find(s2.substr(0, i), index); //running the find function from the index(th) element
        if (found != -1){ //if the element match is not out of bound
            result.at(i-1) = found; //adding the index match into the vector result
            index = found; //updating the new index to the matched element index
        }else{
            break; //breaking the for loop 
        }
    }
    return result; 
}
