#include <iostream>
using namespace std;

//mcd Iterativo
int mcdIterativo(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;

} 

//mcd Recursivo
int mcdRecursivo(int a, int b){
    if(b == 0){
        return a;
    }
    return mcdRecursivo(b, a%b);

}

int main(){
    int a= 120, b = 156;
    cout << "MCD("<<a << "," << b <<") = " << mcdIterativo(a,b);

    return 0; 
}