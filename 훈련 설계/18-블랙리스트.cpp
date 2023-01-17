#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char A[3][3] = { 
      {'C', 'D', 'A'},
      {'B', 'M', 'Z'},
      {'Q', 'P', 'O'}
    };
    
    char B[5] ={""};
    cin >> B;
 
    int len = strlen(B);
    int dat[200] = {0};

    
    for(int y=0; y<3; y++){
        for(int x= 0; x<3; x++){
            dat[A[y][x]]++;
        }
    }


    int temp = 0;
    for(int i=0; i<len;i++){
        if(dat[B[i]] > 0){
            temp++;
        }
    }
    cout << temp << "명";
    return 0;
}