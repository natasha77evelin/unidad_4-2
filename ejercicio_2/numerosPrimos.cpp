//Programa Que rellene un array con los números primos comprendidos entre 1 y 100 y los muestre en pantalla

#include <iostream>
using namespace std;

bool esPrimo(int num);

int main(){

    const int Dim = 100;
    int primos [Dim];
    int contador = 0;
    
    //Recorre los números del 0 al 99.
    for(int i = 0; i < Dim; ++i) {

        if (esPrimo(i)){ //Llama a la función esPrimo para verificar si i es un número primo.
            primos [contador] = i;
            contador++;
        }
    }
    //Mostrar los elementos del array en pantalla
    for(int i = 0; i < contador; ++i) {
        cout << primos[i] << " ";
    }
    return 0;
}

bool esPrimo(int num) {
    bool esPrimo = true;
    if (num <= 1) { //Descartar 1 y 0, ya que no son primos
        esPrimo = false;
    }
    
    for (int i = 2; i * i <= num; i++) { //Recorre desde 2 hasta la raíz cuadrada de num.
        if (num % i == 0){
            esPrimo = false;
        }
    }
    return esPrimo; 
}
