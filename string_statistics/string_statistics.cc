#include <iostream>
#include <string.h>
#include <vector> 
#include "functions.h"

using namespace std;
using std::vector;
using std::string;

int main( )  // Array of environment variable strings
{   

    std::vector<std::string> strVec = {
        "Axolote", 
        "Abracadabra", 
        "Vieira", 
        "Gamba", 
        "Noctiluca", 
        "Lehendakari", 
        "Anade",
        "Hipoglucido",
        "Aurora",
        "Boreal"
    };

    cout<<"Las palabras son: "<<endl;
    cout<<"-----------------------------------"<<endl;
    for(unsigned long int i =0; i<strVec.size(); i++){
        
        cout<<strVec[i]<<endl;

        cout<<"Tamaño: "<< strVec[i].size() << endl;

        cout<<"Primer caracter: "<< firstChar(strVec[i])<<endl;
        cout<<"Ultimo caracter: "<< lastChar(strVec[i])<<endl;
        if(isAbracadabra(strVec[i])){
            cout<<"Es la palabra Abracadabra"<<endl;
        }else{
            cout<<"No es la palabra Abracadabra"<<endl;
        }
        cout<<"-----------------------------------"<<endl;
    }

    
    return 0;
}