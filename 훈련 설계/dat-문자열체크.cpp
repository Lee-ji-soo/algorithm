#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[6] = { "ABCDE" };
    char c2[4] = { "ABZ" };
    
    int dat[200] = { 0 };
    int len = strlen(c);

    for (int i = 0; i < len; i++) {
        dat[c[i]] = 1;
    }

    for (int i = 0; i < 3; i++) {
        char has = dat[c2[i]] > 0 ? 'O' : 'X';
        cout << has << " ";
    }

    return 0;
}