/*mplementar una calculadora con las 4 operaciones básicas
(+, -, *, /). Utilice un arreglo
de punteros a funciones*/
#include <iostream>
using namespace std;

int suma(int a, int b){return a + b;}

int resta(int a, int b){return a - b;}

int calcula(int (*pf)(int, int), int a, int b){
 return pf(a,b);
}

int main(){
    int (*ap[2])(int, int);// = {suma, resta};//arreglo de punteros a funciones

    ap[0] = suma;
    ap[1] = resta;

    cout << ap[0](6,7) <<endl;
    cout << calcula(suma, 10, 20);

    return 0; 
}