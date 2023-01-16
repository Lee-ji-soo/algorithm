#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[10] = { "BBQBHSBTS" };
    int dat[200] = { 0 };

    for (int i = 0; i < 10; i++) dat[c[i]]++;
    
    int max = -999;
    int maxIndex = 0;
    for(int i =0;i<200;i++){
        if (dat[i] > max) {
            max = dat[i];
            maxIndex = i;
        }
    }

    cout << (char)maxIndex;
    return 0;
}