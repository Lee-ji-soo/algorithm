#include <iostream>
#include <cstring>
using namespace std;

void BBQ(int* a, int* b ){
    
    int arr[5] = {0};
    for(int i =0;i<5; i++){
        cin >> arr[i];
    }
    
    int max = -99;
    int min = 99;
    for(int i=0;i<5;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    *a = max;
    *b = min;
}
int main() {
    int a;
    int b;
    
    BBQ(&a, &b);
    cout << "a="<<a << endl;
    cout << "b="<<b;
    
    return 0;
}