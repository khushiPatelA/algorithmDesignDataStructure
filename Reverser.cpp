#include "Reverser.h"
#include <iostream>
#include <string.h>
#include<math.h>
using namespace std;
 

int Reverser::reverseDigit(int value){
    if (value < 0 ){
        return -1;
    }

    if (value <10){
        return value;
    } else{
        int power = (log10(value));
        return (value % 10)* (pow(10,power)) + reverseDigit(value/10); 

    }
}

string Reverser::reverseString(string characters){
    if (characters.length() == 1){
        return characters;
    }
    else if (characters.length() < 1){
        return "ERROR";
    }
    else {
        return reverseString(characters.substr(1, characters.length())) + characters.at(0); 
    }
}
