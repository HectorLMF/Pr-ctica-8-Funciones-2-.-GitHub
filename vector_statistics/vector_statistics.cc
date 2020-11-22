#include <iostream>
#include <string.h>
#include <vector> 
#include "functions.h"

using namespace std;
using std::vector;

int main( int argc,      // Number of strings in array argv
          char *argv[],   // Array of command-line argument strings
          char *envp[] )  // Array of environment variable strings
{   

    int nElements = atoi(argv[1]);
    double minValue = atoi(argv[2]);
    double maxValue = atoi(argv[3]);

    vector<double>vectorDouble =createVector(nElements,minValue,maxValue);

    double median = calculateMedian(vectorDouble);
    double stdDeviation = calculateSTDDeviation(vectorDouble);
    double minValueVector = findMinimum(vectorDouble);
    double maxValueVector = findMaximum(vectorDouble);
    
    cout<<"Los elementos del vector son los siguientes:"<<endl;
    for(int i=0; i<nElements; i++){
        cout<<vectorDouble[i]<<endl;
    }
    cout<< "La media es "<<median<< endl;
    cout<< "La desviacion tipica es "<<stdDeviation<< endl;
    cout<< "El valor minimo es "<< minValueVector<< endl;
    cout<< "El valor maximo es"<< maxValueVector<< endl;

    return 0;
}