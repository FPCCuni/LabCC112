/*
PROCEDIMIENTO bubble_sort ( vector a[1:n])
iteración ← 0
REPETIR
    permut ← FALSO
    PARA i VARIANDO DE 1 HASTA n - 1 - iteración HACER
        SI a[i] > a[i+1] ENTONCES
            intercambiar a[i] Y a[i+1]
            permut ← VERDADERO
        FIN SI
    FIN PARA
    iteración ← iteración + 1
MIENTRAS QUE permut = VERDADERO
*/
#include <iostream>
using namespace std;

void ordBurbuja(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <n-1; j++){
            if(a[j]> a[j+1]){
                //int temp = a[j];
                //a[j] = a[j+1];
                //a[j+1] = temp;
                swap(a[j], a[j+1]);
            }
        }
    }
}

void imprimir(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    int a[] = {2,5, 8,2,-1,6};

    int n = sizeof(a)/sizeof(a[0]);

    ordBurbuja(a,n);

    imprimir(a,n);
    return 0; 
}