// 4.cpp

#include <iostream>
#include <string>
using namespace std;

void permutar(string str, int l, int r) {
    if (l == r) {
        // Caso base: si l es igual a r, imprime la cadena
        cout << str << endl;
    } else {
        for (int i = l; i <= r; i++) {
            // Intercambia los caracteres en la posición l e i
            swap(str[l], str[i]);
            // Llama a la función recursivamente para el siguiente nivel
            permutar(str, l + 1, r);
            // Deshace el intercambio para volver al estado original (backtracking)
            //swap(str[l], str[i]);
        }
    }
}

int main() {
    string cadena = "ABC";
    int n = cadena.size();
    cout << "Permutaciones de la cadena " << cadena << " son: " << endl;
    permutar(cadena, 0, n - 1);
    return 0;
}
