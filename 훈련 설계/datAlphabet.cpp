#include <iostream>
using namespace std;

int main(){
    char vect[10] = {""};
    cin >> vect;
    int len = 0;
    for(int i =0; i<10; i++){
        if(vect[i] =='\0'){
            len = i;
            break;
        }
    }
    int dat[200] = {0};
    for(int i=0;i<len;i++){
        int index = vect[i];
        dat[index] = dat[index] + 1;
    }
    
    for(int i=0; i<200; i++){
        if(dat[i] == 0) continue;
        cout << (char)i << " : " << dat[i] << "\n";
    }
    return 0;
}