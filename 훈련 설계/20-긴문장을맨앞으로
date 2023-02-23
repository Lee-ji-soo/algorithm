#include <iostream>
#include <cstring>
using namespace std;

char arr[3][10] = {""};

void swap(int a, int b){
    char temp[10];
    strcpy(temp, arr[b]);
    strcpy(arr[b], arr[a]);
    strcpy(arr[a], temp);
}

int main() {
    for(int y=0;y<3;y++){
        cin >> arr[y];
    }
    
    int max =-99;
    int maxIndex = 0;
    
    for(int i=0;i<3;i++){
        int len;
        len = strlen(arr[i]);
        if(max < len){
            max =len;
            maxIndex=i;
        }
    }
    
    swap(0, maxIndex);
    
    for(int i=0;i<3;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
