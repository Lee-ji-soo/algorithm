#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int arr[5][4] = {0};
    for (int y = 0; y<5; y++){
        for(int x= 0;x<4; x++){
            cin >> arr[y][x];     
        }
    }

    int direct[8][2] = {
        -1, -1, 
        -1, 0,
        -1 ,1, 
        0, -1,
        0, 1,
        1, -1,
        1, 0,
        1, 1
    };
    
    
    int flag = 1;
    for (int y=0; y<5;y++){
        for(int x= 0;x<4; x++){
            int sum = 0;
            if(arr[y][x] == 0) continue;
            for(int i=0;i<8;i++){
                if(sum >= 1){
                    flag = 0;
                    break;
                };
                int dy = y + direct[i][0];
                int dx = x + direct[i][1];
                
                if(dy < 0 || dx <0 || dy >= 5 || dx>=4) continue;
                sum += arr[dy][dx];
            }
            if(flag == 0) break;
        }
        if(flag== 0) break;
        
    }
    string has = flag == 1 ? "안정된 상태" : "불안정한 상태";
    cout << has;
    return 0;
}