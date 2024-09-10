#include <iostream>
using namespace std;

int busqLineal(int arr[], int n, int clave){
    for(int i=0; i < n; i++){
        if(arr[i] == clave ){
            return i;
        }
    }

    return -1;
}


int busqLinealRec(int arr[], int n, int clave, int ind){
    if(ind >= n){
        return -1;
    }

    if(arr[ind] == clave ){
        return ind;
    }

    return busqLinealRec(arr,n,clave,ind+1);

    
}

int main(){

    int a[] = {1,2,5,6,8,3,4,5};

    int n = sizeof(a)/sizeof(a[0]);

    int clave = 5;

    int ind = busqLineal(a,n,clave);

    if(ind >= 0){
        cout << "Elemento encontrado con índice: " << ind <<endl;    
    }else{
        cout << "Elemento no encontrado" <<endl;
    }

    return 0; 
}