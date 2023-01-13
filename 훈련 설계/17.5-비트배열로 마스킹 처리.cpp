#include<iostream>
#include<string>
using namespace std;

int main() {
    int hard[4] = { 3,5,4,2 };

    int bit[4] = {0};
    for(int i=0;i<4;i++){
        cin >> bit[i];
    }
  
    int temp = 0;
    for(int i=0;i<4;i++){
        if(bit[i] == 1 ){
            temp += hard[i];
        }
    }
    
    cout << temp;
    return 0;
}