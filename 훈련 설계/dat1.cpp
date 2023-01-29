#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

int main(){
    int y = 1;
    int x = 1;
    int arr[4][5] ={
        1, 1, 1, 1, 1,
        2, 2, 2, 2, 2,
        1, 0, 1, 0, 1,
        0, 1, 0, 1, 0
    };
    
    int sum = 0;
    sum += arr[y - 1][x + 0];
    sum += arr[y + 1][x + 0];
    sum += arr[y + 0][x + 1];
    sum += arr[y + 0][x - 1];
    
    int direct[4][2] = {
        -1, 0,
        1, 0,
        0, 1,
        0, -1
    };
    
    sum = 0;
    for(int t=0; t<4; t++){
        //dy, dx는 좌표, t=0:위, t=1:아래, t=2:오른쪽, t=3:왼쪽)
        int dy = y + direct[t][0];
        int dx = x + direct[t][1];
        sum += arr[dy][dx];
    }
    cout << sum;
    return 0;
}
