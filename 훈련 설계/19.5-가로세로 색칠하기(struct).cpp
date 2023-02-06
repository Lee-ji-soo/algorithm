#include <iostream>
#include <cstring>
using namespace std;

int main() {
    struct GS {
        char direction;
        int index;
    };
    
    GS input[3];
    
    for(int i=0;i<3;i++){
        cin >> input[i].direction >> input[i].index;
    }
    
    int result[4][4] = {0};
    
    
    for(int i=0; i<3; i++){
        if(input[i].direction == 'G'){
            for(int j=0;j<4;j++){
                result[input[i].index][j] = 1;
            }
        }else{
            for(int j=0;j<4;j++){
                result[j][input[i].index] = 1;
            }
        }
    } 

    for(int y=0;y<4;y++){
        for(int x=0; x<4;x++){
            cout << result[y][x] << " ";
        }
        cout << endl;
    }
    return 0;
}