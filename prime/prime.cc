#include <iostream>
#include "functions.h"

using namespace std;



int main( int argc,      // Number of strings in array argv
          char *argv[],   // Array of command-line argument strings
          char *envp[] )  // Array of environment variable strings
{
    int count = atoi(argv[1]);

    int nPrimo = findPrimeN(count);

    std::cout<<"El numero primo nº "<<count<<" es "<<nPrimo<<endl;
}

    
  
