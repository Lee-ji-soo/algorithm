#include <iostream>
#include <cstring>
using namespace std;

int isSame(char trainName[9], char name[9], int len){
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
    
    struct SEAT train[7] = {
        {15, "summer"},
        {33, "cloe"},
        {24, "summer"},
        {28, "niki"},
        {32, "jenny"},
        {20, "summer"},
        {40, "coco"},
    };
     
    for(int i=0; i<6;i++){
        int len = strlen(train[i].name);
        if(win != train[i].win) continue;
        if(isSame(train[i].name, name, len)){
            cout << i;
        }
    }
    return 0;
}