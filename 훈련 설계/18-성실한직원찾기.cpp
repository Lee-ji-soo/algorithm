#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int A[3][4] = {
        65000, 35, 42, 70,
        70, 35, 65000, 1300,
        65000, 30000, 38, 42
    };
    
    int dat[65536] = {0};
    
    int max =-999;
    int maxIndex = 0;
    for(int y = 0; y<3; y ++){
        for(int x=0; x<4; x++){
            dat[A[y][x]]++;
            if(dat[A[y][x]]> max){
                max = dat[A[y][x]];
                maxIndex = A[y][x];
            }
        }
    }
    
    cout << maxIndex;
    
    
    return 0;
}