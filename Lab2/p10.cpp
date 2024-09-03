#include <iostream>
using namespace std;

void ordBurbuja(string & a){
    int n = a.length();
    for(int i = 0; i < n; i++){
        for(int j = 0; j <n-1; j++){
            if(a[j]> a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                //swap(a[j], a[j+1]);
            }
        }
    }
}

void imprimir(string a){
    int n = a.length();
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    char a[] = {'d','c', 'a','b','e','f'};

    //string s="dcabef";
    string s;
    cout << "Ingrese una cadena: "<<endl;
    cin >> s;

    int n = sizeof(a)/sizeof(a[0]);

    ordBurbuja(s);

    imprimir(s);
    return 0; 
}