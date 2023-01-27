#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char c[11] ={""};
    
    cin >> c;

    int len = strlen(c);

    int dat[200] = {0};
    for(int x=0; x<len; x++){
        dat[c[x]]++;
    }
    
    for(int x=65; x<200;x++){
        if(dat[x] > 0){
            cout << (char)x;
        }       
    }
}