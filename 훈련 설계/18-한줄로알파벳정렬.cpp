#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char A[5][3] = { 
      {'A', 'B', 'C'},
      {'A', 'G', 'H'},
      {'H', 'I', 'J'},
      {'K', 'A', 'B'},
      {'A', 'B', 'C'},
    };
    
    int dat[200] = {0};

    for(int y=0; y<5; y++){
        for(int x= 0; x<3; x++){
            dat[A[y][x]]++;
        }
    }
    //dat
    for(int i=65; i<200; i++){
        if(dat[i] > 0){
            for(int j=0; j< dat[i]; j++){
                cout << (char)i;
            }
        }   
    }

    return 0;
}