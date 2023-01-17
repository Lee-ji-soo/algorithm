#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int A[3][3] = {0};
    
    for(int y=0;y<3;y++){
        for(int x=0; x<3; x++){
            cin >> A[y][x]; 
        }
    }
 
    int dat[10] = {0};
    
    for(int y=0;y<3;y++){
        for(int x=0; x<3; x++){
            dat[A[y][x]]++; 
        }
    }
    
    for(int i=1;i<10;i++){
        if(dat[i] == 0){
            cout << i << " ";
        }
    }
    return 0;
}