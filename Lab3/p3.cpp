#include <iostream>
using namespace std;

int elementoMaximo(int a[], int izq, int der){
    if(izq == der){
        return a[izq];
    }
    int medio = (izq + der)/2;
    int maxIzq = elementoMaximo(a, izq, medio);
    int maxDer = elementoMaximo(a, medio +1, der);
    return (maxIzq < maxDer) ? maxDer : maxIzq;
}

int main(){

    int a[] = {2,7,1,-9,4,9,12, 11};

    int n = sizeof(a)/sizeof(a[0]);
    cout << "El elemento maximo es: " << elementoMaximo(a,0,n-1)<<endl;

    return 0; 
}