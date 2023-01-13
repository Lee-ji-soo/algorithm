#include<iostream>
#include<string>
using namespace std;

int main() {
    int hard[5][5] = { 0 };
    int t = 0;
    int dx = 0;
    int dy = 0;
    int M = int('M');
  
    for(int y=0; y<5; y++){
      for(int x=0; x<5; x++){
        hard[y][x] = 65 + t;
        t++;
        if(hard[y][x] == M){
          dx = x;
          dy = y; 
        }
      }
    }


    char input;
    cin >> input;
    int tx = 0;
    int ty = 0;
    int flag = 0;
    for(int y=0; y<5; y++){
      for(int x=0; x<5; x++){
        if(hard[y][x] == int(input)){
          tx = x - dx;
          ty = y - dy;
          flag = 1;
          break;
        }   
      }
      if(flag == 1){
          break;
      }
    }

    cout << ty<<','<< tx;
    return 0;
}