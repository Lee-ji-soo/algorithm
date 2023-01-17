#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char A[9] = { "" };
    
    cin >> A; 
 
    int len = strlen(A);
    int dat[200] = {0};

    int max = -999;
    int maxIndex = 0;
    for(int y=0;y<len;y++){
        dat[A[y]]++; 
        if(max < dat[A[y]]){
            max = dat[A[y]];
            maxIndex = A[y];
        }
    }
    
    cout << char(maxIndex);
    return 0;
}