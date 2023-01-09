#include <iostream>

using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int arr[6][4] = {0};
    int t = 1;
    for (int y = 0; y < 7; y++) {
        for(int x = 0; x < 4; x++){
            if(y == a || y == b || y == c){
                arr[y][x] = 0;
            }else{
                arr[y][x] = t;
            }
            cout << arr[y][x] << " ";
            t++;    
        }
        cout << endl;
    }

    return 0;
}