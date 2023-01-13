#include<iostream>
#include<string>
using namespace std;

int isExist(int map[2][3], int pix){
    int flag = 0;
    for(int y=0; y<2; y++){
        for (int x= 0; x<3; x++){
            if(map[y][x] == pix){
                flag =1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    return flag;
}

int main() {
    int map[2][3] = {
        3, 55, 42,
        -5, -9, -10
    };

    int pix[2][2] = {0};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> pix[i][j];
        }
    }
  
    int result[2][2]= {0};
    for (int y = 0; y<2; y++){
        for(int x=0;x<2;x++){
            result[y][x] = isExist(map, pix[y][x]);            
        }
    }
    
    for(int y =0 ;y<2; y++){
        for(int x= 0; x<2;x++){
            char has = result[y][x] == 1 ? 'Y' : 'N';
            cout << has << " ";
        }
        cout << endl;
    }
    return 0;
}