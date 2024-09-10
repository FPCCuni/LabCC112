#include <iostream>
using namespace std;

void divArreglo(int a[], int izq, int der){
    if(izq < der){
        int medio = (izq + der)/2;
        divArreglo(a,izq,medio);
        divArreglo(a,medio+1,der);
        cout << "Diviendo el arreglo"<<endl;
        for(int i =izq; i <=der; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main(){

    int a[] = {2,5,9,1,0,2,4};
    int n = sizeof(a)/sizeof(a[0]);
    divArreglo(a,0,n-1);

    return 0; 
}