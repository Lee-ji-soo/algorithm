#include<iostream>
#include<string>
using namespace std;

int main() {
    int level[4][2] = {
        10, 20,
        30, 60,
        100, 150,
        200, 300
    };

    int input[6] = {0};
    for(int i=0;i<6;i++){
        cin >> input[i];
    }
  
    int result[4]= {0};
    for (int i = 0; i<6; i++){
        for(int y=0;y<4;y++){
            if(input[i] >= level[y][0] && input[i] <= level[y][1]){
                result[y] += 1;
            }            
        }
    }
    
    for(int i =0 ;i<4; i++){
        cout << "lev"<<i<<":"<<result[i]<<endl;
    }
    return 0;
}