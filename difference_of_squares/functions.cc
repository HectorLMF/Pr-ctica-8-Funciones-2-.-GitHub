#include <iostream>
#include "functions.h"
using namespace std;

int addSquareNumbers(int n){
    int output =0;
    for(int i =0; i <=n ; i++){
        output = output+(i*i);
    }
    return output;
}
int addNumbersSquare(int n){
    int output =0;
    for(int i =0; i <=n ; i++){
        output = output+i;
    }
    return output*output;
}