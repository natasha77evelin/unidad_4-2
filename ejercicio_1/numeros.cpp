//programa Que rellene un array con los 100 primeros números enteros y los muestre en pantalla

#include <iostream>
using namespace std;

int main(){

    const int Dim = 100;
    int numeros [Dim];
    
    //Rellenar el array con números enteros.
    for(int i = 0; i < Dim; ++i) {
        numeros[i] = i;
    }

    //Mostrar los elementos del array en pantalla
    for(int i = 0; i < Dim; ++i) {
        cout << numeros[i] << " ";
    }

    return 0;
}
