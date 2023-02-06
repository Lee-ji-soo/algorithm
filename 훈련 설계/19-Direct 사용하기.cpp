#include <iostream>

using namespace std;

int main() {
    int arr[3][3] = {
        3, 5, 4,
        1, 1, 2,
        1, 3, 9
    };
    
    int y = 0;
    int x = 0;
    cin >> y >> x;
    
    int direct[4][2] ={
        -1, 0,
        1, 0,
        0, 1,
        0, -1
    };
    
    int sum = 0;
    for(int i=0;i<4;i++){
        int dy = y + direct[i][0];
        int dx = x + direct[i][1];
        
        if(dy < 0 || dx < 0 || dy >= 3 || dx >= 3){
            continue;
        }
        sum += arr[dy][dx];
    }
    
    cout << sum;
    return 0;
}
