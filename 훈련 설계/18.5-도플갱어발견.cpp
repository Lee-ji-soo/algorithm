#include <iostream>
#include <cstring>
using namespace std;

int dat[100];
int a[6] = {0};
    
int hasDopple(){
    for(int i=0; i<6;i++){
        if(dat[a[i]] > 1){
            return 1;
        }
    }
    return 0;
}

int main() {
    
    for(int y=0; y<6; y++){
        cin >> a[y];
    };
    
    for(int i=0; i<6;i++){
        dat[a[i]]++;
    }
    
    
    
    string has = hasDopple() == 1 ? "도플갱어 발견": "미발견";
    cout << has;
    return 0;
}