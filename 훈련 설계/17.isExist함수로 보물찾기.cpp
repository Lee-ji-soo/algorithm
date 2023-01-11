#include<iostream>
#include<string>
using namespace std;

int isExist(int arr[3][3] ,int i){
    for(int y = 0; y<3;y++){
        for(int x = 0; x<3; x++){
            if(arr[y][x] == i){
                return 1;
                break;
            }                            
        }
    }
    return 0;
}

int main() {
    int arr[3][3] = {
        3, 5, 9,
        4, 2, 1,
        5, 1, 5
    };
    
    int input[3] = {0};
    int result[3] = {0};
    for (int i =0;i<3;i++){
        cin >> input[i];
    }
    
    for (int i =0;i<3;i++){
        result[i] = isExist(arr, input[i]);
    }
    
    
    for (int i =0;i < 3;i++){
        string exist = result[i] ? "존재" : "미발견";
        cout << input[i] << ":" << exist << endl;  
    }
    
    
    return 0;
}