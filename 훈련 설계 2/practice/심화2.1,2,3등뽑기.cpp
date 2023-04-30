/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int path[3] = {0};
int n = 0;
int cnt =0;
int used[10];
void run(int lev){
    if (lev == 3){
        cnt++;
        return;
    }    
    
    for(int i=0;i<n;i++){
        if(used[i] == 1) continue;
        path[lev] = i;
        used[i] = 1;
        run(lev + 1);
        used[i] = 0;
    }
}

int main()
{
    cin >> n;
    run(0);
    cout << cnt;
    return 0;
}