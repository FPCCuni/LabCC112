#include<iostream>
using namespace std;


//void producto_matrices(int **pa, int **pb,)

int main(){
    int f1 = 4;
    int c1 = 5;
    int c2 = 3;
    int a[f1][c1] ={{1,2,3,4,5},{6,7,8,9,10},{2,2,2,1,1},{1,2,3,4,5}};
    int b[c1][c2] ={{1,0,0},{0,1,0},{0,0,1},{1,0,0},{0,1,0}};
    b
    int (*pa)[c1] = a;
    cout << *pa[c1] <<endl;
    cout << a <<endl;
    cout << &a[0][0] <<endl;
    cout << &(*a) <<endl;
    cout << "*pa = " <<**pa <<endl;
    //int *pa = a[0];
    //int **ppa = &pa;
    return 0;
}