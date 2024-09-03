#include <iostream>
using namespace std;

void Hanoi(int n, char origen, char destino, char auxiliar){
    if(n==1){
        cout << "mover disco 1 de " << origen << " a " << destino <<endl;
        return; 
    }
    Hanoi(n-1, origen, auxiliar,destino);
    cout << "Mover disco " << n << " de " << origen << " a " <<destino <<endl;;
    Hanoi(n-1, auxiliar, destino, origen);
}

int main(){

    int n;
    cout << "Ingrese el numero de discos: ";
    cin >> n;

    Hanoi(n, 'O', 'D', 'A');

    return 0; 
}