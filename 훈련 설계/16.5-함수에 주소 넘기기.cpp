#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

int num[2][3] = {0};

void getMax(int* dy, int* dx) {
    int max = -99;
    for(int y=0;y<2;y++){
        for(int x=0;x<3;x++){
            if(num[y][x] > max){
                max = num[y][x];
                *dy = y;
                *dx = x;
            }
        }
    }
}


void getMin(int* dy, int* dx) {
    int min = 99;
    for(int y=0;y<2;y++){
        for(int x=0;x<3;x++){
            if(num[y][x] < min){
                min = num[y][x];
                *dy = y;
                *dx = x;
            }
        }
    }
}


int main(){
    for(int y=0;y<2;y++){
        for(int x=0;x<3;x++){
            cin >> num[y][x];
        }
    }
    
    int maxY = 0;
    int maxX = 0;
    int minY = 0;
    int minX = 0;
    
    getMax(&maxY, &maxX);
    getMin(&minY, &minX);
    
    cout << '(' << maxY << ',' << maxX << ')'<<endl;
    cout << '(' << minY << ',' << minX << ')'<<endl;
    return 0;
}
