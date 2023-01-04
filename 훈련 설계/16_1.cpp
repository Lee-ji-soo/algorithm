#include<iostream>

using namespace std;

int main() {
    
    char kfcarr[10];
    cin >> kfcarr;
    
    int len =0;
    for (int i=0; i<10;i++){
        if (kfcarr[i] == '\0'){
            len = i;
            break;
        }
    }
    
    if(len % 2 == 0){
        cout << "ERROR\n";
        return 0;
    }
    
    int last = len - 1;
    int mid = len / 2;
    
    int temp = kfcarr[last];
    kfcarr[last] = kfcarr[mid];
    kfcarr[mid]= temp;
    
    for (int i = len -1; i>=0; i--){
        cout << kfcarr[i];
    }
    
    return 0;
}