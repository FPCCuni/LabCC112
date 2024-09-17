#include <iostream>
using namespace std;

int maximo(int *arreglo, int tam);

int main()
{
    int a[] = {1, 2, 14, 6, 8};
    int n = sizeof(a) / sizeof(a[0]);
   
    int max = maximo(a, n);
    cout << "El valor máximo en el arreglo es: " << max << endl;

    return 0;
}

int maximo(int *arreglo, int tam) {
    
    int mayor = *arreglo;

    for (int i = 1; i < tam; i++) {
        int *ptr = arreglo + i;
        if (*ptr > mayor) {
            mayor = *ptr;
        }
    }
    return mayor;
}