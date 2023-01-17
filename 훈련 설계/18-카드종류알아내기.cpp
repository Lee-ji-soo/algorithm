#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char A[17] = { "" };
    
    cin >> A; 
 
    int len = strlen(A);
    int dat[200] = {0};
    
    for(int y=0;y<len;y++){
        dat[A[y]]++; 
    }
    
    int temp = 0;
    for(int i=1; i<200; i++){
        if(dat[i] > 0){
            temp++;
        }
    }
    
    cout << temp << "개";
    return 0;
}