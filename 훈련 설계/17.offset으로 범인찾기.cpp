#include<iostream>
#include<string>
using namespace std;

int main() {
    char arr[3][5] = {
        "ATKB",
        "CZFD",
        "HGEI"
    };
    
    char c;
    int yOffset, xOffset;
    
    cin >> c >>  yOffset >> xOffset;
    char result;
    for(int y = 0; y<3;y++){
        for(int x = 0; x<4; x++){
            if(arr[y][x] == c){
                result = arr[y+yOffset][x+xOffset];
            }
        }
    }
    
    cout << result;
    
    return 0;
}