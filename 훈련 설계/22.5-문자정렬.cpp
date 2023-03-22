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
  string arr[100] = {""};
  char input[4][11] = {""};

  for (int i = 0; i < 4; i++)
  {
    cin >> input[i];
  }

  for (int i = 0; i < 4; i++)
  {
    int len = 0;
    len = strlen(input[i]);
    arr[len] = input[i];
  }

  for (int i = 0; i < 11; i++)
  {
    if (arr[i] != "")
    {
      cout << arr[i] << endl;
    }
    else
      continue;
  }
}