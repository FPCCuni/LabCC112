#include <iostream>
using namespace std;

int main(){
	double a1,b1,c1,a2,b2,c2;
	
	double det, x, y;
	
	
	cout << "Ingrese los coeficientes de la primera ecuacion: ";
	cin >> a1 >> b1 >> c1;
	
	cout << "Ingrese los coeficientes de la segunda ecuacion: ";
	cin >> a2 >> b2 >> c2;
	
	det = a1*b2 - b1*a2;
	
	if(det =! 0){ //caso 1: solución única
		x = (c1*b2-c2*b1)/det;
		y = (a1*c2 - a2*c1)/det;
		cout << "x = " << x <<endl;
		cout << "y = " << y <<endl;
		
	}else{
		if(a1*b2 == a2*b1 && b1*c2 == b2*c1){ // caso 2: infinitas soluciones
			cout << "Existe infinitas soluciones" << endl;
		}else{ //caso 3: no existe solución
			cout << "No existe solucion" <<endl;
		}
	}
	
	

	return 0;
}

