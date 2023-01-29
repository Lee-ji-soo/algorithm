#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main(){
    char buf[] = "ACC";
    cout << strcmp(buf, "ABC");
    //앞에 있는 문자열이 사전순으로 더 크면 1
    //앞에 있는 문자열이 사전순으로 더 작으면 -1
    //완전 똑같으면 0
    
    string str;
    str = "ABCDE";
    
    cout << str.length() << endl;
    if(str == "ABCDE"){
        cout << "같네";
    }
    return 0;
}
