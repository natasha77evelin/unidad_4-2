//Programa Que rellene un array con los números impares comprendidos entre 1 y 100 y los muestre en pantalla
#include <iostream>
using namespace std;

int main(){

    const int Dim = 50; //Para los numeros impares entre 0 y 100 se pueden usar 50 elementos.
    int impares [Dim];
    
    for(int i = 0; i < Dim; ++i) {
            impares [i] = (2 * i) + 1; //Asigna a cada posición un número impar
        }

    for(int i = 0; i < Dim; i++) {
        cout << impares[i] << " ";
    }
    return 0;
}
