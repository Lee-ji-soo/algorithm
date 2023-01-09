#include<iostream>

using namespace std;

int main() {
    int a[3];

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for (int i = 0; i< a[2]; i++){
        for (int i=a[0]; i<=a[1]; i++){
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}