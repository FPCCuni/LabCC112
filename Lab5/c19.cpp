/*Escriba un programa que lea una palabra de longitud no mayor a 20 y diga si la palabra
es palíndroma o no. Ejemplo las siguientes palabras lo son: Ana , Madam, reconocer.*/

/*
DABALE ARROZ A LA ZORRA EL ABAD

DABALEARROZALAZORRAELABAD
*/
#include <iostream>
#include <cstring> // strlen(s);
#include <cctype> //tolower()
using namespace std;

bool palindrome(const char *s){  
    const char *izq = s;
    const char *der = s + strlen(s) -1;

    while(izq < der){
        if(*izq == *der){
            izq++;
            der--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){

    const char *s = "madam";

    cout << palindrome(s);

    return 0; 
}