/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int n;
    int price;
};

int M = 2e8;

int map[4][4] = {
    0, 3, 4, 2,
    M, 0, 10, 1,
    M, M, 0, M,
    M, 2, 6, 0};

int main()

{
    // for 1: 경유
    // for 2: 출발
    // for 3: 도착

    for (int v = 0; v < 4; v++)
    {
        for (int a = 0; a < 4; a++)
        {
            for (int b = 0; b < 4; b++)
            {
                if (map[a][b] > map[a][v] + map[v][b])
                {
                    map[a][b] = map[a][v] + map[v][b];
                }
            }
        }
    }
    return 0;
}