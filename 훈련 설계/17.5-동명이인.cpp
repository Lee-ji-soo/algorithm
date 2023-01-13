#include<iostream>
#include<string>
using namespace std;

int isSame(string name[2]){
    if(name[0] == name[1]){
        return 1;
    }else{
        return 0;
    }
} 
int main() {
    string name[2] = {""};
    for(int i= 0; i<2; i++){
        cin >> name[i];
    }
    
    string has = isSame(name) ? "동명" : "남남";
    cout << has;
    return 0;
}