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
  char arr[2][2][4] = {
      {"ATB", "CCB"},
      {"AAA", "BBC"}};

  char a;
  cin >> a;

  int flag = 0;
  for (int z = 0; z < 2; z++)
  {
    for (int y = 0; y < 2; y++)
    {
      for (int x = 0; x < 3; x++)
      {
        if (arr[z][y][x] == a) // strcmp("~~~" == "~~~")와 다름.
        {
          flag = 1;
          break;
        }
      }
      if (flag == 1)
      {
        break;
      }
    }
    if (flag == 1)
    {
      break;
    }
  }

  if (flag == 1)
  {
    cout << "발견";
  }
  else
  {
    cout << "미발견";
  }

  return 0;
}
