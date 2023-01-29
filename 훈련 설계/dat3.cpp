#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
//direct Address table;

int main(){
    int arr[4][5] ={
        1, 1, 1, 1, 1,
        2, 2, 2, 2, 2,
        1, 0, 1, 0, 1,
        0, 1, 0, 1, 0
    };
    
    int y = 0;
    int x = 0;
    cin >> y >> x;
    
    int multi = 1;
    
    int direct[5][2]={
        -1, -1,
        -1, 1,
        0, 0,
        1, -1,
        1, 1
    };

    for(int i =0; i<5; i++){
        int dy = y + direct[i][0];
        int dx = x + direct[i][1];
        
        if(dy < 0 || dy >= 4 || dx < 0 || dx >= 5){
            continue;
        }
        multi *= arr[dy][dx]; 
    }
    
    cout << multi;
    return 0;
}
