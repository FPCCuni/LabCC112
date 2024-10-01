/*programa que, al recibir como datos una cadena de caracteres y 
un caracter, determine cuántas veces se encuentra el caracter en 
la cadena. Utilice punteros y funciones*/

#include <iostream>
using namespace std;

int busqLinealChar(const char *s, char c){ 
    int cont = 0;
    while(*s != '\0'){
        if(*s == c){
            cont++;
        }
        s++;//apunta al siguiente caracter
    }
    return cont;
}

int main(){

    const char *s = "Comunicacion";
    cout << busqLinealChar(s, 'c');

    return 0; 
}