#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

int main(){
    int arr[4][5] ={
        1, 1, 1, 1, 1,
        2, 2, 2, 2, 2,
        1, 0, 1, 0, 1,
        0, 1, 0, 1, 0
    };
    
    int y = 2;
    int x = 2;
    int sum = 0;
    
    int direct[4][2] = {
        -1, 0,
        1, 0,
        0, 1,
        0, -1
    };
    
    for(int i=0; i<4; i++){
        int dy = y + direct[i][0];
        int dx = x + direct[i][1];
        
        if(dy < 0 || dy >=4 || dx <0 || dx>=5){
            continue;
        }
        
        sum += arr[dy][dx];
    }
    cout << sum;
    return 0;
}
