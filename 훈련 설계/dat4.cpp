#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
//direct address table
int main(){
    int arr[4][5] ={
        1, 9, 1, 11, 1,
        2, 2, 4, 2, 2,
        9, 0, 1, 0, 1,
        0, 1, 11, 1, 0
    };
    
    int y = 0;
    int x = 0;
    cin >> y >> x;
    
    int max = -99;
    
    int direct[4][2] = {
        0, 1,
        0, -1,
        1, 0,
        1, 1
    };
    
    for(int i=0;i<4;i++){
        int dy = y + direct[i][0];
        int dx = x + direct[i][1];
        
        if(dy <0 || dx <0 || dy >=4 || dx>=5){
            continue;
        }
        if(arr[dy][dx] > max){
            max = arr[dy][dx];
        }
    }
    
    cout << max;
    return 0;
}
