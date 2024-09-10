#include <iostream>
using namespace std;

//Busqueda binaria iterativa
int busqBinaria(int arr[], int n, int clave){
    int izq = 0, der = n-1;

    while(izq <= der){
        int medio = (izq + der)/2;
        if(arr[medio] == clave){
            return medio;
        }else if(arr[medio] < clave){
            izq = medio + 1;
        }else{
            der = medio -1;
        }
    }

    return -1;
}



//Busqueda binaria Recursiva
int busqBinariaRec(int arr[], int izq, int der, int clave){
    if(izq > der){
        return -1;
    }

    int medio = (izq + der)/2;

    if(arr[medio] == clave){
        return medio;
    }else if(arr[medio] < clave){
        return busqBinariaRec(arr,medio+1, der,clave);
    }else{
        return busqBinariaRec(arr,izq, medio -1,clave);
    }
}


int main(){

    int a[] = {1,4,6,7,8,9,10,15,17};

    int n = sizeof(a)/sizeof(a[0]);

    int resul = busqBinariaRec(a, 0, n-1,15);

     if(resul < 0){
        cout << "El valor buscado no se encuentra en el arreglo"<<endl;
     }else{
        cout << "El valor se encontró en la posición: " <<resul<<endl;
     }



    return 0; 
}