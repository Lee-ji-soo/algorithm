#include<iostream>

using namespace std;

int main() {
    string str[3];
    for (int i = 0; i<3; i++){
        cin >> str[i];
    }
    
    bool flag = false;
    
    for(int i = 0; i<3;i++){
        for(int j = 0; j<11; j++){
            if(str[i][j] == 'M'){
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    
    if(flag == true){
        cout <<  "M이 존재합니다";
    }else{
        cout <<  "M이 존재하지 않습니다";
    }
    return 0;
}