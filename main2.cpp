#include "Reverser.h"
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    Reverser R1;
    int number = 12345;
    cout<< R1.reverseDigit(number); 

    string a = "Khushi";
    cout << R1.reverseString(a)<<endl; 
}