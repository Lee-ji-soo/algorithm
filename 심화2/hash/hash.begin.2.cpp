/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <unordered_map>
using namespace std;

int map[2][3] = {
    {-15, 7, 3},
    {-500, 42, 11}};
struct Node
{
    int y, x;
};

int main()
{
    unordered_map<int, Node> um;
    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            um[map[y][x]] = {y, x};
        }
    }

    int n = -500;
    if (um.count(n) == 0)
        return 0;
    cout << um[n].y << ", " << um[n].x;
    return 0;
}