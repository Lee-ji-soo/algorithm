#include <iostream>
using namespace std;

int main(){
    int vect[5] = {4, 4, 2, 4, 4};
    int dat[5] = {0};
    for(int i =0; i<5;i++){
        int index = vect[i];
        dat[index]++;
        // dat[vect[i]]++;
    }
    
    for(int i =0;i <5; i++){
        if(dat[i]>0){
            cout << i << ":" << dat[i]<<endl;
        }
    }
    return 0;
}