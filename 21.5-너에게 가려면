#include <iostream>
using namespace std;

int main() {
    char arr[4][4] = {""};
    for(int y=0; y<4;y++){
        cin >> arr[y];
    }
    
    int ax;
    int ay;
    int bx;
    int by;
    
    for(int y=0; y<4;y++){
        for(int x=0; x<3;x++){
            if((int)arr[y][x] == (int)'A'){
                ax = x;
                ay= y;
            }
        
            if((int)arr[y][x] == (int)'B'){
                bx = x;
                by= y;
            }
        }
    }
    
    cout << abs(by - ay) + abs(bx - ax);
    return 0;
}
