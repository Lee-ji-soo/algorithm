#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main(){
    char ID[4] ="BBQ";
    char PASS[5] ="1234";

    char a[10] = {""};
    char b[10] = {""};
    
    cin >> a >> b;
    if(strcmp(a, ID) != 0 ){
      cout << "ID FAIL";
    }else if(strcmp(b, PASS) != 0 ){
      cout << "PASSWORD FAIL";
    }else{
        cout << "LOGIN SUCCESS";
    }
    
    
    return 0;
}
