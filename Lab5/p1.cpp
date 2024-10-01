/* Declare un arreglo tridimensional, proceda a imprimir el arreglo utilizando punteros.*/

#include <iostream>
using namespace std;

const int FILAS = 2;
const int COLS =3;
const int HOJAS = 4;

void mostrarArreglo1D(int *p, int n){
    for(int i = 0; i < n ; ++i){
        cout << *p << " ";
        p++;
    }
    cout << endl;
}

void mostrarArreglo2D(int *pb){
    for(int  i = 0; i < FILAS; ++i){
        for(int j = 0; j < COLS; ++j){
            cout << *(pb + i*COLS +j) << " ";
        }
        cout << endl;
    }
}

void mostrarArreglo3D(int *pc){
    for(int  i = 0; i < FILAS; ++i){
        for(int j = 0; j < COLS; ++j){
            for(int k = 0; k < HOJAS; ++k){
                cout << *(pc + i*COLS*HOJAS + j*HOJAS + k ) << " ";
            }
            cout <<endl;
        }
        cout << endl;
    }
}

int main(){
    int a[] = {1,2,3,4,5};

    int b[FILAS][COLS] = {{1,2,3},{4,5,6}};

    int c[FILAS][COLS][HOJAS] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}}};


    int n = sizeof(a)/sizeof(a[0]);

    int *p = a; //ok

    int *pb = &b[0][0];


    //int (*pab)[3]  = b; EJERCICIO modificar las funciones
    //para trabajar con un puntero a un arreglo

    int *pc = &c[0][0][0];
    
    //int (*pac)[COLS][HOJAS] = c;
    
    mostrarArreglo1D(p,n);

    mostrarArreglo2D(pb);

    mostrarArreglo3D(pc);

    return 0; 
}