// 1.cpp

#include <iostream>
#include <limits.h> // para INT_MAX

using namespace std;

int mayorCercano(int arr[], int n, int x) {
    int mayorCercano = INT_MAX; 
    bool encontrado = false;     

    for (int i = 0; i < n; i++) {
        if (arr[i] > x && arr[i] < mayorCercano) {
            mayorCercano = arr[i];
            encontrado = true;
        }
    }

    if (!encontrado) {
        return -1;
    }
    
    return mayorCercano;
}

int main() {
    int x;


    int arr[]{12, 7, 19, 25, 14, 9};
   
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Ingrese el número de referencia: ";
    cin >> x;

    int resultado = mayorCercano(arr, n, x);

    if (resultado == -1) {
        cout << "No hay ningún número mayor que " << x << " en el arreglo." << endl;
    } else {
        cout << "El número mayor más cercano a " << x << " es: " << resultado << endl;
    }

    return 0;
}
