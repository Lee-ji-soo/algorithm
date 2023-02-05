#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int count = 1;
    int num[4] = {0};
    int result[4][4] = {0};
    int arr[4][4] = {0};
    
    for(int y=0;y<4;y++){
        for(int x=0;x<4;x++){
            result[y][x] = 0;
            arr[y][x] = count;
            count++;
        }    
    }
    

    for (int i =0; i<4;i++){
        cin >> num[i];
    }

    for (int y = 0; y< 4;y++){
        for (int x=0;x<4;x++){
            int flag = 0; 
            for(int i=0;i<4;i++){
                if(flag == 1) continue;
                if(arr[y][x] == num[i]){
                    result[y][x] = i+1;
                    flag = 1;
                }else{
                    result[y][x] = 0;
                }
            }            
        }
    } 
    
    for(int y=0;y<4;y++){
        for(int x=0;x<4;x++){
            cout << result[y][x] << " ";
        }
        cout << endl;
    }
    return 0;
}