#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int num[3][5] = {
    4, 5, 1, 9, 1,
    2, 2, 3, 1, 9,
    1, 3, 1, 9, 1
};

int an[3] = {1,9,1};

int cnt =0;

int isSame(int y, int x){
    for(int i =0; i<3;i++){
        if(num[y][i + x] != an[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    for(int y= 0; y<3;y++){
        for(int x =0 ; x<= 5 - 3; x++ ){
            if(num[y][x] == an[0]){
                cnt += isSame(y, x);
            }
        }
    }
    
    cout << cnt;
    return 0;
}
