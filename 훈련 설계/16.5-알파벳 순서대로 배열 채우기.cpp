#include<iostream>

using namespace std;

int main() {
    char a[3][6] = {0};
    int i = 65;
    
    int c,d;
    cin >> c >> d;
    
    for (int x=2; x>=0; x--){
        for (int y=5; y>=0; y--){
            a[x][y] = i;
            i++;
        }
        
    }
    

    cout << char(a[d][c]);
}