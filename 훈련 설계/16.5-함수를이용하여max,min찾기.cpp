#include <iostream>

using namespace std;


int main() {
    char a[10];
    cin >> a;
    
    int maxIndex = 0;
    int minIndex = 0;
    
    int len = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] == '\0') {
            len = i;
            break;
        }
    }

    int max = -999;
    int min = 999;

    for (int i = 0; i< len; i++){
        if(a[i] > max){
            max = a[i];
            maxIndex = i;
        }
        if(a[i] < min){
            min = a[i];
            minIndex = i;
        }
    }
    
    cout << maxIndex << endl;
    cout << minIndex;
    return 0;
}