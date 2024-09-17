#include <iostream>
using namespace std;


//fusionar merge(a, izq,medio,der);
//fusion(int a[], int n1, int b[], int n2, int c[]){
void merge(int a[], int izq, int medio, int der){
    int n1 = medio - izq + 1 ;
    int n2 = der -medio;
    int ta[n1], tb[n2];

    for(int i = 0; i < n1 ; i++){
        ta[i] = a[izq + i];
    } 

    for(int i = 0; i < n2; i++){
        tb[i] = a[medio + 1 + i];
    } 

    int i{}, j{}, k{izq};

    while(i < n1 && j < n2){
        if(ta[i] <= tb[j]){
            a[k++] = ta[i++];
        }else{
            a[k++] = tb[j++];
        }
    }

    //si sobran elementos, los agregamos
    while(i < n1){
        a[k++] = ta[i++];
    }

    while(j < n2){
        a[k++] = tb[j++];
    }
}

void mergeSort(int a[], int izq, int der){
    if(izq < der){
        int medio = (izq + der)/2;
        mergeSort(a, izq, medio);
        mergeSort(a,medio +1 , der);
        merge(a, izq,medio,der);
    }
}

void imprimir(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
    cout << endl;
}


int main(){

    int a[] = {99,6,86,15,58,35,86,4,0};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Areglo original" <<endl;
    imprimir(a,n);

    cout << "Arreglo ordenado" <<endl;
    mergeSort(a, 0, n-1);
    imprimir(a,n);

    return 0; 
}