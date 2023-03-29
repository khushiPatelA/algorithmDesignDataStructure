#include"Finder.h"
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string a = "AIkABklACE";
    string b = "ABCE";
    Finder F1;
    vector<int> result = F1.findSubstrings(a, b);
    for (int i=0; i<result.size(); i++){
        cout<<result.at(i)<<endl; 
    }
}