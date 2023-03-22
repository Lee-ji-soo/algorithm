/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int map[3][6] = {
      3, 5, 4, 2, 2, 3,
      1, 3, 3, 3, 4, 2,
      5, 4, 4, 2, 3, 5};

  char price[6] = {
      "TPGKC"};

  char a;
  int b;
  cin >> a >> b;

  int anum = (int)a - 65;
  int index = map[anum][b - 1];
  cout << price[index - 1];
}
