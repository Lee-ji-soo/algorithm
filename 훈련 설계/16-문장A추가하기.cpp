#include<iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int index;
    cin >> index;
    
    int len = 0;
    for (int i = 0; i < 6; i++){
        if(str[i] == '\0'){
            len = i;
            break;
        }
    }
    char arr[len + 1];
    for (int i = 0; i < index; i++){
        arr[i] = str[i];
    }
    
    arr[index] = 'A';
    
    for (int i = index + 1 ; i < len + 1; i++){
        arr[i] = str[i - 1];
    }
    
    for (int i = 0; i< len + 1; i++){
        cout << arr[i];
    }
    return 0;
}