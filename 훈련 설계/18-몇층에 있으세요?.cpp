#include <iostream>
#include <cstring>
using namespace std;

int familiy[3] = {0};
int apt[5][3] = { 
    {15, 18, 17},
    {4, 6, 9},
    {10, 1, 3},
    {7, 8, 9},
    {15, 2, 6}
};
    
int isPattern(int y) {
    for(int i=0;i<3;i++){
        if(apt[y][i] != familiy[i]){
            return 0;
        }
    }
    return 1;
};

int main() {
    for(int i=0; i<3; i++){
        cin >> familiy[i];
    };
    
    int fl = 1;
    int flag = 0;
    for(int y = 4; y >=0; y--){
        if(isPattern(y)){
            cout << fl <<"층";
            flag = 1;
            break;
        }   
        fl++;
    }
    
    
    return 0;
}