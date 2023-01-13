#include<iostream>
#include<string>
using namespace std;

int main() {
    int arr[6] = { 3, 7, 4, 1, 2, 6};
    int univer[2][2] = {0};
    for(int i= 0; i<2; i++){
        for (int j=0;j<2; j++){
            cin >> univer[i][j];
        }
    }
    
    for(int y= 0; y<2; y++){
        for (int x=0;x<2; x++){
            string has = "NO";
            for(int a=0; a<6; a++){
                if(arr[a] == univer[y][x]){
                    has = "OK";
                    break;
                }
            }
            cout << has << ' ';
        }
        cout << endl;
    }
    
    return 0;
}