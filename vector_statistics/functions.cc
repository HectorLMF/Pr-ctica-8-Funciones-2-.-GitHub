#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;
using std::vector;


std::vector <double> createVector(int n, double min, double max){

    std::vector <double> output;
    for(int i =0; i <=n ; i++){
        double randomNumber = (max - min) * ( (double)rand() / (double)RAND_MAX ) + min;
        output.push_back(randomNumber);
    }
    return output;
}

double calculateMedian (vector<double> vector){
    double output= 0; 
    double sum =0;

    for (long unsigned int i =0; i<= vector.size(); i++){
        sum = sum + vector[i];
    }
    output = sum / vector.size();

    return output;
}
double calculateSTDDeviation (vector<double> vector){
    double output= 0; 

    double sum =0;

    double median = calculateMedian(vector);

    for (long unsigned int i =0; i<= vector.size(); i++){
       sum = sum + pow(vector[i]-median,2);
    }

    output = sqrt(sum/vector.size());

    return output;
}
double findMaximum (vector<double> vector){
    double output= 0; 

    for (long unsigned int i =0; i<= vector.size(); i++){
        if(vector[i]>output){
            output =vector[i];
        }
    }

    return output;
}

double findMinimum (vector<double> vector){
    double output= vector[1]; 
      for (long unsigned int i =0; i< vector.size(); i++){          
        if(vector[i] < output){
            output = vector[i];
        }     
    }
    return output;
}