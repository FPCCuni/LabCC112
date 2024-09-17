/*
1. Escribe un programa para imprimir la dirección de una variable cuyo valor 
ingresa el usuario. 
 
2. Escribe un programa para imprimir la dirección del puntero a una variable 
cuyo valor ingresa el usuario. 
 
3. Escribe un programa para imprimir el valor de la dirección del puntero a una 
variable cuyo valor ingresa el usuario. 
 
4. Escribe un programa para imprimir un número que se ingresa desde el 
teclado usando el puntero. 
 
5. Escribe una función que tome como parámetro  un puntero y muestre el 
número en la pantalla. Tome el número del usuario e imprímalo en la 
pantalla usando esa función. 
*/

#include <iostream>
using namespace std;

void imprimir(int *ptr){
    cout << "El numero es: " << *ptr <<endl;
}

int main(){
    //1
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "La dirección de n es: " << &n <<endl;

    //2

    int m;
    cout << "Ingrese el valor de m: ";
    cin >> m;

    int *ptr_m = &m;

    cout << "La direccion del puntero es: " << &ptr_m <<endl;

    //3
    cout << "El valor de la dirección del  puntero ptr_m es " << ptr_m << endl;

    //4
    int q;
    int *ptr_q = &q; 
    cout << "Ingrese el valor de q: ";
    cin >> *ptr_q;

    cout << "El valor almacenado en q es: " << *ptr_q <<endl;

    //5
    int r;
    cout << "Ingrese el valor de r: ";
    cin >> r;
    imprimir(&r);


    return 0; 
}