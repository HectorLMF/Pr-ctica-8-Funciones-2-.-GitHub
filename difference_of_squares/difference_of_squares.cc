#include <iostream>
#include <string.h>
#include "functions.h"

using namespace std;

int main( int argc,      // Number of strings in array argv
          char *argv[],   // Array of command-line argument strings
          char *envp[] )  // Array of environment variable strings
{   
    if(argc == 1 || argc>2){
        std::cout<<"Debe dar un argumento, en forma de un solo numero entero"<<endl;
    }

    else if(strcmp(argv[1],"--help")==0){
        std::cout<<"Dado número natural N, imprime en pantalla la diferencia entre el cuadrado de la suma de los primeros N números naturales y la suma de los cuadrados de esos mismos números."<<endl;
        std::cout<<"Debe dar un argumento, en forma de un solo numero entero"<<endl;
    }
    
    else{
        int n = atoi(argv[1]);

        int SquareAddition = addSquareNumbers(n);
        int AdditionSquare = addNumbersSquare(n);

        std::cout<<"La suma de los primeros "<<n<<" numeros al cuadrado es: "<<AdditionSquare<<endl;
        std::cout<<"El cuadrado de la suma de los primeros "<<n<<" numeros es: "<<SquareAddition<<endl;
        std::cout<<"El resultado es: "<<AdditionSquare-SquareAddition<<endl;
    }

}