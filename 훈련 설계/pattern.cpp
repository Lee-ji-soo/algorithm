#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int cnt = 0;
int num[9] = {1,2,3,1,2,3,1,2,3};
int an[3] = {1,2,3};


void countSame(int index){
    int has = 0;
    for(int i =0; i<3;i++){
        if(num[i+index] != an[i]){
            has = 0;
        }else{
            has = 1;
        }
    }
    
    if(has == 1){
        cnt++;
    }
}

int main(){
    
    int len = 9;
    for(int i =0 ; i<= len - 3;i++ ){
        if(num[i] == an[0]){
            countSame(i);
        }
    }
    
    cout << cnt;
    return 0;
}
