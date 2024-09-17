#include<iostream>
using namespace std;
void suma_ptr(int *ptr,int tam){
	int suma=0;
    int *i;
    int *f = ptr + tam;
	for(i=ptr;i<f;i++){
		 suma += *i;
	}
	cout<<"La suma de los elementos del arreglo es "<<suma<<endl;
}
int main(){
	int a[]={1,2,3,4,5} ;
    int tam = sizeof(a)/sizeof(a[0]);
	int *p=a;
	suma_ptr(p,tam) ; 


return 0;
}