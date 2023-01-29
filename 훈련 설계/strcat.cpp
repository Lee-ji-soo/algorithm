#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

int main(){
    char buf[10] = "ABC";
    char tt[10] = "KFC";
    char temp[10];
    
    strcpy(temp, buf); //temp에 buf를 복사.
    strcpy(buf, tt); // buf에 tt를 복사.
    strcpy(tt, temp); // tt에 temp를 복사.
 
 
    strcat(temp,"HH");
    cout << buf << tt << endl;
    cout << temp;
    return 0;
}
