#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

struct Node{
    int a, b;
};

Node vect[3][4] = {
    {{1,2}, {5,3}, {1,4}, {1,5}},
    {{1,1}, {1,1}, {1,1}, {1,2}},
    {{1,4}, {1,5}, {2,2}, {3,3}},
};


int direct[4][2] = {
    -1 , 0,
    1, 0,
    0, -1,
    0, 1
};
    
int getDirect(int y, int x) {
    int sum = 0;
    int mul = 1;
    for(int i =0; i<4; i++){
        int dy = y + direct[i][0];
        int dx = x + direct[i][1];
        
        if(dx <0 || dx <0 || dy >= 3 || dx>=4) continue;
        sum += vect[dy][dx].a;
        mul *= vect[dy][dx].b;
    }
    return sum + mul;
}

int main(){
    int result = 0;
    result  = getDirect(1, 1);
    cout << result;
    return 0;
}
