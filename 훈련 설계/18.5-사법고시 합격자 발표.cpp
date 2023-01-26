#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int win[2][3]={
        3, 5, 1,
        4, 2, 6
    };

    int people[4] ={0};
    for(int i= 0;i<4;i++){
        cin>> people[i];
    }
    
    int dat[50] = {0};

    for(int y=0; y<2; y++){
        for(int x=0; x<3;x++){
            dat[win[y][x]]++;
        }
    }
    
    for(int i=0;i<4;i++){
        string won = dat[people[i]] > 0 ? "합격": "불합격";
        cout << people[i] << "번 " << won << endl;
        
    }
    return 0;
}