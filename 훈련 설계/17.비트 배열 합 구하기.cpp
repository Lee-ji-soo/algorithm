#include<iostream>
#include<string>
using namespace std;

int main() {
    int arr[3][3] = { 
        3, 5, 9,
        4, 2, 1,
        1, 1, 5
    };
    
    int bit[3][3] = {0 };
    
    for (int y = 0; y<3; y++){
        for(int x = 0; x<3; x++){
            cin >> bit[y][x];
        }
    }

    int t = 0;
    for (int y = 0; y<3; y++){
        for(int x = 0; x<3; x++){
            if(bit[y][x] == 1){
                t += arr[y][x];
            }
        }
    }
    cout << t;
        
    return 0;
}