#include <iostream>
#include <cstring>
#include <map>
#include <array>
using namespace std;

int main() {
    int num;
    string arr[10];
    cin >> num;
    
    for(int i=0;i<num;i++){
        cin >> arr[i];    
    }
    
    map<string, array<int, 2>> marks{ 
       { "up", {-1,0}},
       { "down", {1,0}},
       { "left", {0, -1}},
       { "right", {0, 1}} };
 
    
    int dy = 5;
    int dx = 5 ;
    for(int i=0; i<num; i++){
        if(arr[i] == "click"){
            cout<< dy << ',' << dx << endl; 
        }
        
        dy = dy + marks[arr[i]][0];
        dx = dx + marks[arr[i]][1];
    }
    
    return 0;
}
