#include <iostream>
using namespace std;

int main(){
    //Arreglo de punteros
    int a = 1, b = 2, c = 3;
    int arr[] = {1,2,4};

    int *ap[3]; // define un arreglo de 3 punteros
    ap[0] = &a;
    ap[1] = &b;
    ap[2] = &c;
    
    
    //imprimir los valores al que apunta ap
    cout << **ap << endl;
    cout << **(ap + 1) <<endl;
    cout << **(ap + 2) <<endl;
	

    // Puntero a un arreglo
    int (*pa)[3] = &arr;
     

    return 0; 
}
