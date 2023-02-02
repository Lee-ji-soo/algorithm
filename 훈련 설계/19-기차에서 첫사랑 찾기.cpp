#include <iostream>
#include <cstring>
using namespace std;

int len = 0;
int isSame(char trainName[9], char name[9]){
    for(int i=0; i<len; i++){
        if(trainName[i] != name[i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    struct SEAT {
        int win;
        char name[9];
    };
    
    char name[9]= {""};
    int win = 0;
    cin >> name;
    cin >> win;
    
    len = strlen(name);
     
    SEAT train[7] = {
        {win: 15, name:"summer"},
        {win: 33, name:"cloe"},
        {win: 24, name:"summer"},
        {win: 28, name:"niki"},
        {win: 32, name:"jenny"},
        {win: 20, name:"summer"},
        {win: 40, name:"coco"},
    };
    
    for(int i=0; i<6;i++){
        if(win != train[i].win) continue;
        if(isSame(train[i].name, name)){
            cout << i;
        }
    }
    return 0;
}