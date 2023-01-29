#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int arr[2][4] = {
    4, 5, 4, 5,
    4, 5, 4, 5
};

int tar[2][2] = {
    4, 5,
    4, 5
};

int cnt =0;

int isSame(int t){
    for(int y=0;y<2;y++){
        for(int x=0; x<2; x++){
            if(tar[y][x] != arr[y][x + t]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    
    for(int x=0; x<=4-2; x++){
        cnt += isSame(x);
    }
    
    cout << cnt;
    return 0;
}
