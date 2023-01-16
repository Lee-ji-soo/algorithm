#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int A[3][4] = {
        4, 5, 7, 6,
        1, 5, 5, 4,
        1, 1, 1, 1
    };
    
    int B[2][3] = {
        5, 6, 4,
        1, 5, 3
    };
    
    int dat[12]= {0};
    for(int y=0; y<3; y++){
        for(int x=0;x<4;x++){
            dat[A[y][x]]++;
        }
    }    
    for(int y=0; y<2; y++){
        for(int x=0;x<3;x++){
            cout << dat[B[y][x]] << " ";
        }
        cout << endl;
    }
    return 0;
}