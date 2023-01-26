#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char min[10] ={"MINCODING"};
    
    int a = 0;
    cin >> a;
    
    char b[a+1] = {""};
    for(int i=0;i<a;i++){
        cin >> b[i];
    }

    
    int dat[200] = {0};
    
    for(int i=0;i<10;i++){
        dat[min[i]]++;
    }
    
    for(int i=0;i<a;i++){
        if(dat[b[i]] >0){
            cout << 'O';
        }else{
            cout << 'X';
        }
    }
    
    return 0;
}