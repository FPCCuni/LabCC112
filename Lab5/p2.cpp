#include <iostream>
using namespace std;
const int FILAS = 3;
const int COLS = 3;

void transpuesta(int (*pa)[COLS],int (*pb)[COLS], int(*ps)[COLS]  ){
    for(int i = 0; i < FILAS; ++i){
        for(int j = 0; j < COLS; ++j){
            *(*(ps + i) + j) = *(*(pa + j) + i) + *(*(pb + i) + j);//ps[i][j] = pa[j][i] + pb[i][j];
        }
    }
}

void imprimir(int a[][COLS]){
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLS ; j++){
            cout << *(*(a + i) + j) << " ";
        }
        cout << endl;
    }
}

int main(){
    int a[FILAS][COLS] = {{1,-1,5},{2,0,1},{-7,3,0}};
    int b[FILAS][COLS] = {{1,2,7},{1,3,4},{5,-1,1}};

    int s[FILAS][COLS];
    
    int (*pa)[COLS] = a;
    int (*pb)[COLS] = b;
    int (*ps)[COLS] = s;

    cout << "\nMatriz A" <<endl;
    imprimir(pa);

    cout << "\nMatriz B" <<endl;
    imprimir(pb);

    cout << "\nMatriz S" <<endl;
    transpuesta(pa,pb,ps);


    imprimir(ps);



    return 0; 
}