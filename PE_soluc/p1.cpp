/*
Escribe un programa en C++ que solicite al usuario ingresar 7 números enteros,
a continuación calcule y muestre el promedio de dichos números.

*/

#include <iostream>
using namespace std;

int main(){
	
	int numeros[7];
	
	float promedio;
	
	float suma = 0;
	
	cout << "Ingrese 7 numeros enteros: " <<endl;
	
	for(int i = 0; i < 7; ++i){
		cout << "Numero " << i+1 << ": ";
		cin >> numeros[i];
		
		suma += numeros[i]; //suma = suma + numeros[i];
		
	}
	
	//RECUERDE: El operador / calcula el cociente entero si sus aperandos son ambos enteros
	//Ejemplo 3/2 == 1
	cout << "El promedio es: " << suma/7 <<endl;

	return 0;
}

