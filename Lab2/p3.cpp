#include <iostream>
using namespace std;


const int MAX = 1000;
long long int memo[MAX];

//Iterativa
int fibIterativo(int n){
    if (n<= 1){
        return n;
    }

    int a = 0, b = 1;
    int tn;

    for(int i = 2; i <=n; ++i){
        tn = a+b;
        a = b;
        b = tn;
    }
    return b;
}

//REcursivo
int fibRecursivo(int n){
    if (n<= 1){
        return n;
    }
    return fibRecursivo(n-1) + fibRecursivo(n-2);
}

//REcursiva optimizada (memoizacion)
long long  fibRecMemo(int n){
    if (n<= 1){
        return n;
    }
    
    //
    if(memo[n] != -1)
    	return memo[n];
    	
    
    memo[n] =  fibRecMemo(n-1) + fibRecMemo(n-2);
    
    return memo[n];
}
int main(){

    cout << fibIterativo(10);

    //utilizar las demas implementaciones

    return 0; 
}