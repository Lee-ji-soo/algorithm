#include<iostream>

using namespace std;

int main() {
    char str[10] = {0};
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
    
        
    cout << str; 
    return 0;
}