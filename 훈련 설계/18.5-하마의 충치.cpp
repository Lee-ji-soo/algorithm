#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a[2][5]={0};
    
    for(int y=0; y<2;y++){
        for(int x=0;x<5;x++){
            cin >> a[y][x];
        }
    }
    
    int count = 0;
    for(int x=0; x<5; x++){
        if(a[0][x] == 0 || a[1][x] == 0){
            continue;
        }
        if(a[0][x] == a[1][x]){
            count ++;
        }
    }

    cout << count << "개";
    return 0;
}