#include<iostream>
#include<string>
using namespace std;

bool isExist(char c[7], char b){
    for(int i = 0;i <6;i++){
        if(c[i] == b){
            return true;
            break;
        }
    }
    return false;
}

int main() {
    char c[7] = {"BTKIGZ"};
    char t[4] = {""};
    
    for (int i = 0; i<4;i++){
        cin >> t[i];
    }
    
    int result =0;
    
    for(int i =0; i<4;i++){
        if(isExist(c, t[i])){
            result += 1;
        }
    }
    
    cout << result;
    
    return 0;
}