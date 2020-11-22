#include <iostream>
#include "functions.h"
using namespace std;


int findPrimeN(int primeN){

    int numberOfPrimes = 0;
    int currentNumber = 2;

    while (primeN != numberOfPrimes){

        int nDivissors =0;

        for(int i = currentNumber-1; i>1; i--){
            if(currentNumber % i ==0){
                nDivissors++;
            }
        }
        if(nDivissors==0) {
            numberOfPrimes ++;
            if (numberOfPrimes == primeN){
                return currentNumber;
            }
        }
        currentNumber++;
    }

    return 0;

}
