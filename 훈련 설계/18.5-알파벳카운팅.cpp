#include <iostream>
#include <cstring>
using namespace std;

int dat[200];
char a[11] = {""};
int len = 0;

int getMax(){
    int max = -99;
    int maxIndex = -99;

    for(int i=0; i<len; i++){
        if(dat[a[i]] > max){
            max = dat[a[i]];
            maxIndex = a[i];
        }
    }
    return maxIndex;
} 

int main() {
    cin >> a;
    len = strlen(a);
    for(int i=0; i<len;i++){
        dat[a[i]]++;
    }
    
    int maxI = getMax();
    cout << (char)maxI;
    return 0;
}