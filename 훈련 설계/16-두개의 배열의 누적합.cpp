#include<iostream>

using namespace std;

int main() {
    int a[6];
    int b[6] = {0};
    
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    
    b[0] = a[0];
    for(int i = 1; i < 6;i++){
        b[i] = a[i] + b[i - 1];
    }
    
    for (int i =0; i<6; i++){
        cout << b[i] << " ";
    }
    return 0;
}