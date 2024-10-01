// 2.cpp

#include <iostream>
using namespace std;


int ultimaOcurrencia(int arr[], int n, int x) {
    int izq = 0, der = n - 1;
    int resultado = -1;

    while (izq <= der) {
        int medio = (izq + der) / 2;

        if (arr[medio] == x) {
            resultado = medio;   
            izq = medio + 1;  
        }
        else if (arr[medio] < x) {
            izq = medio + 1;
        }
        else {
            der = medio - 1;
        }
    }

    return resultado;
}

int main() {
    int x;

    int arr[]{2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Ingrese el número que desea buscar: ";
    cin >> x;

    
    int resultado = ultimaOcurrencia(arr, n, x);

    if (resultado != -1) {
        cout << "La última ocurrencia de " << x << " está en el índice: " << resultado << endl;
    } else {
        cout << x << " no está presente en el arreglo." << endl;
    }

    return 0;
}
