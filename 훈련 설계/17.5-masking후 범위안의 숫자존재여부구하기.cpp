#include<iostream>
#include<string>
using namespace std;

int main() {
    int hard[3][3] = {
        3, 1, 9,
        7, 2, 1,
        1, 0, 8
    };

    
    int bit[3][3] = {0};
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cin >> bit[i][j];
        }
    }
  
    string result = "미발견";

    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            if(bit[i][j] == 1 && hard[i][j] >= 3 && hard[i][j] <= 5 ){
                result ="발견";
                break;
            }
        }
        if(result == "발견"){
            break;
        }
    }
    
    cout << result;
    return 0;
}