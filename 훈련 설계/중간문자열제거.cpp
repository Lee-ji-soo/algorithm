#include<iostream>

using namespace std;

int main() {
    
    char kfc[11];
    int t;
    cin >> kfc;
    cin >> t;
    
    int len =0;
    for (int i =0; i<11; i++){
        if(kfc[i] == '\0'){
            len = i;
            break;
        }
    }
    // t ~ len - 1
    for (int i = t; i <= len - 1; i++){
        cout << kfc[i] << endl;
        cout << kfc[i+1] << endl;
    
        kfc[i] = kfc[i+1];
    }
    
    len --;
    
    
    cout << kfc << endl;
    for (int i = len - 1; i >= 0 ; i--){
        cout << kfc[i];
    }
    return 0;
}