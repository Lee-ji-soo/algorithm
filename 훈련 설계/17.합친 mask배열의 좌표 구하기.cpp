#include<iostream>
#include<string>
using namespace std;


int main() {
    int a[4][4] = {
        0, 0, 0, 1,
        1, 1, 0, 1,
        1, 0, 0, 1,
        1, 1, 1, 1
    };
    
    int b[4][4] = {
        1, 1, 1, 1,
        1, 0, 1, 1,
        1, 0, 0, 0,
        1, 0, 0, 0
    };
    
    int result[16][2]= {0};
    int temp = 0;
    for (int y = 0;y<4;y++){
        for (int x = 0; x<4; x++){
            if(a[y][x] + b[y][x] == 0){
                result[temp][0] = y;
                result[temp][1] = x;
                temp ++;
            }
        }
    }
    
    for(int i=0; i<temp; i++){
        cout << "(" << result[i][0] << "," << result[i][1] << ")" << endl; 
    }
    return 0;
}