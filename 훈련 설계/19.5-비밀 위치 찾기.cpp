#include <iostream>
using namespace std;

char map[3][5] = {
        "ABGK",
        "TTAB",
        "ACCD"
    };
    
char pattern[2][3] = {
    ""
};

int isPattern(int dy, int dx){
    for(int y=0;y<2;y++){
        for(int x=0; x<2; x++){
            if(map[y+dy][x+dx] != pattern[y][x]){
                return 0;
            }        
        }
    }
    return 1;
}

int main(){
    
    for(int y=0;y<2;y++){
        cin >> pattern[y];
    }
    
    int count = 0;
    for(int y=0;y<3;y++){
        for(int x=0;x<4;x++){
            count += isPattern(y, x);
        }
    };
    
    if(count == 0){
        cout << "미발견";
    }else{
        cout << "발견("<<count<<"개)";
    }
	return 0;
}