#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char min[3][10] ={""};
    
    for(int y=0;y<3;y++){
        cin >> min[y];
    }

    int len[3] = {0};
    
    for(int y=0;y<3;y++){
        len[y] = strlen(min[y]);
    }
    
    int dat[200] = {0};

    for(int y=0; y<3;y++){
        for(int x= 0; x< len[y]; x++){
            dat[min[y][x]]++;
        }
    }
    
    int flag=0;
    for(int i=65;i<200;i++){
        if(dat[i] > 1){
            flag = 1;
            break;
        }
    }
    
    string has = flag == 1 ?  "No" : "Perfect";    
    cout << has;
    return 0;
}