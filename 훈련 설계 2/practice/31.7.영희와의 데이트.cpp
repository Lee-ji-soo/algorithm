/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

string date[3] = {""};
string men[3] = {""};

void abc(int lev){
    if(lev == 3){
        for(int i=0;i<3;i++){
            cout<< date[i] << " ";
        }
        cout<<endl;
        return;
    }    
    
    for(int i=0;i<3;i++){
        date[lev] = men[i];
        abc(lev + 1);
    }
}

int main()
{
    for(int i =0;i <3;i++){
        cin >> men[i];
    }
    abc(0);    
    return 0;
}
