#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int A[2][4] = {
        5, 7, 9, 55,
        30, 10, 6, 8
    };
    
    int B[2][4] = {
        1, 2, 3, 4,
        5, 7, 10, 15
    };
    
    int dat[60] = {0};
    for(int y=0;y<2;y++){
        for(int x=0; x<2; x++){
            dat[A[y][x]]++;
        }
    }
    
    int person=0;
    int crimer=0;
    
    for(int y=0;y<2;y++){
        for(int x=0; x<4; x++){
            if(dat[B[y][x]]){
                crimer+=1;
            }else{
                person +=1;
            }
        }
    }
    
    
    cout << "crimer:"<< crimer << endl;
    cout << "person:" << person;
    return 0;
}