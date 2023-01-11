#include<iostream>
#include<string>
using namespace std;

bool isExist(char arr[5], char a){
    for(int i = 0; i<4; i++){
        if(arr[i] == a){
            return true;
            break;
        }
    }
    return false;
}

int main() {
    char arr[5] = { "MTKC" };
    char a;
    cin >> a;
    
    bool exist;
    exist = isExist(arr, a);
    string has = exist ? "발견" : "미발견";
    cout << has;
    return 0;
}