#include<iostream>
#include<string>
using namespace std;

int main() {
    char arr[2][4] = {
        "GKT",
        "PAC"
    };
    
    char name[2] = {""};
    for(int i= 0; i<2; i++){
        cin >> name[i];
    }
    
    int has = 0;
    for(int i =0 ; i<2;i++){
        for(int y=0; y<2;y++){
            for(int x=0; x<3; x++){
                if(name[i] == arr[y][x]){
                    has += 1;
                }
            }
        }
    }


    string str = "미발견";
    if(has > 1){
        str = "대발견";
    }else if(has > 0){
        str = "중발견";
    }
    cout << str;
    return 0;
}