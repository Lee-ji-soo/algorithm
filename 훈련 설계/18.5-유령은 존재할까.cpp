#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

char c[11] = {""};
char fix[6] = "GHOST";
int len = 0;

int checkSame(int index){
    for(int i= 0; i<5; i++){
        if(fix[i] != c[index + i]){
            return 0;
        } 
    }
    return 1;
}

int main(){
    cin >> c;
    len = strlen(c);
    
    int a = 0;
    int has = 0;
    for(int i =0;i<len;i++){
        if(c[a] == fix[0]){
            has = checkSame(a);
        }else{
            a++;
        }
        if(len - a < 5){
            break;
        }
        if(has){
            break;
        }
    }
    
    string str = has ? "존재" : "존재하지 않음";
    cout << str;
    return 0;
}
