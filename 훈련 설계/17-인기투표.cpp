#include<iostream>
#include<string>
using namespace std;

int main() {
    int arr[3][3] = { 
        3, 7, 4,
        2, 2, 4,
        2, 2, 5
    };
    
    int target[3] = {0};
    
    for (int i=0;i<3;i++){
        cin >> target[i];
    }
    
    int result[3] = {0};
    for (int i =0 ;i <3;i++){
        for(int y =0; y<3;y++){
            for(int x =0; x<3; x++){
                if(arr[y][x] == target[i]){
                    result[i] += 1;
                }
            }
        }
    }
    
    int max = -999;
    int maxIndex = 0;
    for(int i=0;i<3;i++){
        if (max < result[i]){
            max = result[i];
            maxIndex=i;
        }
    }
    
    cout << target[maxIndex];
    return 0;
}