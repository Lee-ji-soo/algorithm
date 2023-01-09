#include <iostream>

using namespace std;

int main() {
    int y, x;
    char c;
    
    cin >> y >> x >> c;

    
    for( int i = 0; i < 2; i++){
        for (int j = 0; j<y; j++){
            for(int k=0; k<x; k++){
                cout << c;
            }
            cout <<endl;
        }
        if(i == 1){
            break;
        }
        cout <<endl;
    }
    
    return 0;
}