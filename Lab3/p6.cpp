#include <iostream>
using namespace std;


//fusionar merge(a, izq,medio,der);
//fusion(int a[], int n1, int b[], int n2, int c[]){
void merge(int a[], int izq, int medio, int derecho){

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