/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n = 0;
char nums[10];
char path[10] = {""};
int used[10] = {0};

int minNum = 26e2;

void abc(int lev){
    if(lev == 3){
        if(path[0] == '0') return;
        int pathInt = stoi(path);
        if(minNum > pathInt){
            minNum = pathInt;
        }
        return;
    }
    
    for(int i=0; i<n; i++){
        if(used[i] == 1) continue;
        used[i] = 1;
        path[lev] = nums[i];
        abc(lev + 1);
        used[i] = 0;
    }
}

int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    abc(0);   
    cout << minNum;
    return 0;
}
