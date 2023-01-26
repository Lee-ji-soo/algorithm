#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[10]={"ATKPTCABC"};
    int len = 0;
    len = strlen(a);

    char b, c;
    cin >> b >> c;
    
    int index0=0;
    int index1=0;
    for(int x=0; x<len; x++){
        if(a[x] == b){
            index0=x;
            break;
        }
    }
    
    for(int x=len - 1; x>0; x--){
        if(a[x] == c){
            index1= x;
            break;
        }
    }
    
    
    int result = index1 - index0;
    cout << result;
    
    return 0;
}