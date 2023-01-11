#include<iostream>
#include<string>
using namespace std;


int main() {
    int mask[2][5] = {
        0, 0, 1, 0, 0,
        0, 0, 1, 1, 1
    };
    
    int num[2][5] = {
        3, 5, 4, 1, 1,
        3, 5, 2, 5, 6
    };
    
    int c;
    cin >> c;
    

    int flag = 0;    
    for (int y = 0; y<2; y++){
        for(int x = 0; x<5; x++){
            if(num[y][x] == c){
                if(mask[y][x] == 1){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1){
            break;
        }
    }
    
    string has = flag == 1 ? "존재" : "없음"; 
    cout << c << " "<< has;
    return 0;
}