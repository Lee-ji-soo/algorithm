#include <iostream>
#include <stdlib.h>
using namespace std;

int arr[6] = {3, 5, 1, 9, 7};
char p[5] = {""};

int main()
{
  for (int i = 0; i < 4; i++)
  {
    cin >> p[i];
  }

  for (int i = 0; i < 4; i++)
  {

    if (p[i] == 'L')
    {
      arr[5] = arr[0];
      for (int i = 0; i < 5; i++)
      {
        arr[i - 1] = arr[i];
      }
      arr[4] = arr[5];
    }

    if (p[i] == 'R')
    {
      for (int i = 4; i >= 0; i--)
      {
        arr[i + 1] = arr[i];
      }
      arr[0] = arr[5];
    }
  }

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << ' ';
  }
  return 0;
}

// 문제풀이:https://sooleeandtomas.tistory.com/108