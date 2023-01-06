#include<iostream>

using namespace std;

int main() {
    int a[4];
    int b[4];
    int result[4];
    
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> b[i];
    }
    
    for (int i = 0; i<4; i++){
        result[i] = a[i] + b[3-i];
    }
    
    for (int i = 0; i < 4; i++) {
        cout << result[i] << ' ';
    }

    return 0;
}