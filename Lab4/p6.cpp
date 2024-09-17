/*
Escribe una función que utilice punteros como parámetros para intercambiar 
los valores de dos variables enteras.
*/
#include <iostream>
using namespace std;

void intercambio(int *p, int *q){
    int temp = *p; //*p == "accede al valor que apunta el puntero p"
    *p = *q;
    *q = temp;
}


int main(){

    int a = 3;
    int b = 4;
    intercambio(&a,&b);
    cout << "El valor final de a es: " << a <<endl;
    cout << "El valor final de b es: " << b <<endl;


} 