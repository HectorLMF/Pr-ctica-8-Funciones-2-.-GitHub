#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;
using std::vector;
using std::string;


char firstChar(string text){
    return text.at(0);
}
char lastChar(string text){
    return text.at(text.size()-1);
}
bool isAbracadabra(string text){
    const string abracadabra = "Abracadabra";
    if(abracadabra.compare(text)==0){
        return true;
    }else{
        return false;
    }
}