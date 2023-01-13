#include<iostream>
#include<string>
using namespace std;

int main() {
    int vect[7] = {3, 5, 4, 2, 6, 6, 5};
    int bit[7] = {0};
    for(int i=0;i<7;i++){
        cin >> bit[i];
    }
  
    for(int i=0; i<7;i++){
        if(vect[i] && bit[i]){
            cout << 7;
        }else{
            cout << 0;
        }
    }
    return 0;
}