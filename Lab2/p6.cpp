#include <iostream>
#include <string>
using namespace std;

void permutaciones(string s, int inicio, int final){
    if(inicio == final){
        cout << s <<endl;
    }else{
        for(int i = inicio; i<= final; ++i){
            //char temp = s[inicio];
            //s[inicio] = s[i];
            //s[i] = temp;
            swap(s[inicio],s[i]); //intercambiando valores
            permutaciones(s, inicio +1, final);
        }
    }
}

int main(){

    string s;
    cout << "Ingrese una cadena: "<<endl;
    cin >> s;
    permutaciones(s,0, s.length()-1);

    return 0; 
}