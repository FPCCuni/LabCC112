#include <iostream>
using namespace std;

//Version iterativa
int sumaIterativa(int n){
    int suma = 0;
    for(int i = 1; i <= n; ++i){
        suma = suma + i;// suma += i;
    }
    return suma;
}


//Version recursiva
int sumaRecursiva(int n){
    if(n <= 0){
        return 0;
    } 
    return sumaRecursiva(n-1) + n;
}

int main(){

    int num;

    cout << "Ingrese un numero entero positivo: ";
    cin >> num;

    cout << "La suma iterativa es: " << sumaIterativa(num) <<endl; 
    cout << "La suma recursiva es: "<< sumaRecursiva(num);

    return 0; 
}