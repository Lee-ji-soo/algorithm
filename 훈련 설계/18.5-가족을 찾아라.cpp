#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[2][3] = {
        {'G', 'K', 'G'},
        {""}
    };
    
    for(int y=1; y<2; y++){
        for(int x=0; x<3; x++){
            cin >> c[y][x];
        }
    };
    
    int dat[200] = {0};
    for(int y=0; y<2;y++){
        for(int x=0; x<3;x++){
            dat[c[y][x]]++;
        }
    }
    
    int flag = 0;
    for(int i=65; i<200;i++){
        if(dat[i] >=3){
            flag = 1;
            break;
        }
    }
    
    string has = flag == 1 ? "있음": "없음";
    cout << has;
    return 0;
}