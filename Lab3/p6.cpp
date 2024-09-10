#include <iostream>
using namespace std;


//fusionar merge(a, izq,medio,der);
//fusion(int a[], int n1, int b[], int n2, int c[]){
void merge(int a[], int izq, int medio, int der){
    int n1 = medio - izq +1;
    int n2 = der - medio;
    int aIzq[n1], aDer[n2];
    for(int i = 0; i < n1; ++i){
        aIzq[i] = a[izq +i];
    }

    for(int i = 0; i < n2; ++i){
        aDer[i] = a[medio +i +1];
    }
    //completar utilizando la pregunta p5
}

void mergeSort(int a[], int izq, int der){
    if(izq < der){
        int medio = (izq + der)/2;
        mergeSort(a, izq, medio);
        mergeSort(a,medio +1 , der);
        merge(a, izq,medio,der);
    }
}


int main(){

    return 0; 
}
