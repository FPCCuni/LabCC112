#include <iostream>
#include <string> //para cadenas al estilo C++
using namespace std;

//Ejercicio 1: maximo de 2 numeros
int maximo(int a, int b){
	return (a>b)? a: b;
}

//Ejercicio 2: cuadrado
int cuadrado(int n){
	return n*n;
}

//Ejercicio 3: suma de n naturales
int suma_naturales(int n){
	int suma = 0;
	for(int i = 1; i <= n; ++i ){
		suma += i;
	}	
	return  suma;
}

// Ejercicio 4: Es primo?
bool esPrimo(int n){
	if(n<=1) 
		return false;
	
	for(int i = 2; i < n; ++i){
		if(n % i == 0)
			return false;
	}
	
	return true;
}

//Ejercicio 5: Invertir cadenas s = Hola mundo!
string invCadena(string s){
	string cadInv = "";
	for(int i = s.length()-1; i>=0; --i){
		cadInv += s[i];
	}
	
	return cadInv;
}

//Ejercicio 6: Factorial recursivo
int factorialRec(int n){
	return (n<=0) ? 1 :n*factorialRec(n-1) ;
	//if(n<=0)
	//	return 1;
	//return n*factorialRec(n-1);
}

//Completar los Ejercicios de la lista 



int main(){
	
	int a, b;
	
	string s="Hola Mundo!";
	
	cout << "Ingrese dos enteros: ";
	cin >> a >> b;
	
	cout << "El mayor es: " << maximo(a,b) <<endl;
	
	cout << "El cuadrado de " << a << " es: " << cuadrado(a) <<endl;
	
	cout << "Suma de naturales hasta " << a << " es: " << suma_naturales(a) <<endl;
	
	if(esPrimo(a))
		cout << a << " es primo" <<endl;
	else
		cout << a <<" no es primo" <<endl;
	
	cout << "Cadena invertida: " << invCadena(s) <<endl;


	cout << "El factorial de " << a << " es: " << factorialRec(a)<<endl;
	return 0;
	
}

