#include<iostream>

using namespace std;

int main() {
    char arr[4][4] = { 
        {'A','B','K','T'},
        {'K','F','C','F'},
        {'B','B','Q','Q'},
        {'T','P','Z','F'}
    };
    
    char input[2] = {""};
    for (int i =0; i<2; i++){
        cin >> input[i]; 
    }

    char number[2] = {0};
    
    for (int i = 0; i<4; i++){
        for (int j =0; j<4; j++){
            if(arr[i][j] == input[0]){
                number[0] += 1;
            }
            if(arr[i][j] == input[1]){
                number[1] += 1;
            }
        }
    }
    
    cout << number[0] + number[1];
    return 0;
}