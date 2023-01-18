#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 };
    int team[3] = { 0 };
    for (int y = 0; y < 3; y++) {
        cin >> team[y];
    }

    int dat2[10] = { 0 };
    
    for (int i = 0; i < 3; i++) {
        dat2[team[i]]++;
    }

    int min = 99;
    int max = -99;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (count >= 3) {
            break;
        }
        if (dat2[train[i]] > 0) {
            count++;
            if (i > max) {
                max = i;
            }
            if (i < min) {
                min = i;
            }
        }

    }

    cout << min << "번~" << max << "번 칸";
    return 0;
}