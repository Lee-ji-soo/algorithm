#include<iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int index;
    cin >> index;
    int len = 0;
    for (int i =0; i<8; i++){
        if(str[i] == '\0'){
            len = i;
            break;
        }
    }
    
    for (int i = index; i < len; i++){
        str[i] = str[i + 1];
    }
    
        
    for (int i = 0; i < len -1; i++){
        cout<< str[i];
    }
    return 0;
}