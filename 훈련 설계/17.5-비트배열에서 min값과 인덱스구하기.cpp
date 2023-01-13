#include<iostream>
#include<string>
using namespace std;

int main() {
    int mask[6] = {1, 0, 1, 0, 1, 0 };

    int input[6] = {0};
    for(int i=0;i<6;i++){
        cin >> input[i];
    }
  
    int result[6]= {0};
    
    for (int y = 0; y < 6; y++){
        if(input[y] && mask[y]){
            result[y] = input[y];
        }else{
            result[y] = 999;
        }
    }
    
    
    int min = 999;
    int index = 0;
    for(int i=0; i<6; i++){
        if(result[i] < min){
            min = result[i];
            index=i;
        }
    }
    
    cout << "arr[" << index << "]=" << min;
    return 0;
}