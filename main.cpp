#include"Sort.h"
#include"BubbleSort.h"
#include"QuickSort.h"
#include"RecursiveBinarySearch.h"
#include<iostream>
#include<vector>
using namespace std;

int main(){
   int a;
   vector<int> v;
   // user can add element as much as they want
   while(cin>>a)
   { 
       v.push_back(a);
   }
    QuickSort QS1;
    v = QS1.sort(v);  
   
    RecursiveBinarySearch RS1;
    if (RS1.search(v, 1) == false){
        cout<<"false "; 
    }else {
        cout<<"true "; 
    }

    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" "; 
    }
}