#include <iostream>
#include <cstdlib> // srand(), rand()
using namespace std;

void imprimir(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void ordSeleccion(int a[], int n){
    for(int  i = 0; i <n-1; i++){
        int indMin = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[indMin]){
                indMin = j;
            }
        }
        int temp = a[indMin];
        a[indMin] = a[i];
        a[i] = temp;
    }
}


int main(){

    cout << "RAND_MAX= " << RAND_MAX <<endl;

    int a[] = {2,5, 8,2,-1,6};

    int n = sizeof(a)/sizeof(a[0]);

    ordSeleccion(a,n);

    imprimir(a,n);

    return 0; 
}