/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

struct Max {
    int num;
    int y;
    int x;
};

int a = 0;
int b = 0;
int ab[10][100] = {0};
vector<Max> result;

int main()
{
    cin >> a >> b;
    for(int y=0;y<a;y++){
        for (int x=0;x<b;x++){
            cin >> ab[y][x];
        }
    }
    
    
    for(int i=0;i<3;i++){
        int max = -2e6;
        int maxX = 0;
        int maxY = 0;
        for(int y=0;y<a;y++){
            for (int x=0; x<b; x++){
                if(max < ab[y][x]){
                    max = ab[y][x];
                    maxX = x;
                    maxY = y;
                }
            }
        }
        result.push_back({max, maxY, maxX});
        ab[maxY][maxX] = -2e6;
    }
    
    for(int i=0;i<3;i++){
        cout << result[i].num << '(' << result[i].y << ',' << result[i].x << ')' << endl; 
    }
    return 0;
}
