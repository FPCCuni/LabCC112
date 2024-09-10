/*
scribe un programa que tome como entrada dos listas de números enteros ya ordenadas
y las combine en una sola lista ordenada usando el proceso de fusión (parte principal del
algoritmo merge sort)*/

#include <iostream>
using namespace std;

void fusion(int a[], int n1, int b[], int n2, int c[]){
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            c[k] = a[i];
            i++;
            k++;
        }else{
            c[k] = b[j];
            j++;
            k++;
        }
    }

    //si sobran elementos, los agregamos
    while(i < n1){
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < n2){
        c[k] = b[j];
        j++;
        k++;
    }

}



void imprimir(int a[], int n){
    for(int i = 0; i < n; ++i){
        cout << a[i]  << " " ; 
    }
    cout << endl;
}

int main(){

    int a[] = {4, 7, 9, 13};
    int b[] = {1, 2, 5, 7, 10, 12 , 15, 17};

    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);

    int c[n1 +n2];

    fusion(a,n1,b,n2,c);

    cout << "Arreglo c:" <<endl;
    imprimir(c,n1+n2);




    return 0; 
}