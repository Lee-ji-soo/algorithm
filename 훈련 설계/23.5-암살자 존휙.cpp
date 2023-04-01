#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

  int dir[10][2] = {
      -2, 0,
      -1, 0,
      1, 0,
      2, 0,
      0, -3,
      0, -2,
      0, -1,
      0, 1,
      0, 2,
      0, 3};

  int arr[3][2] = {0};
  int dic[3][4] = {0};
  for (int y = 0; y < 3; y++)
  {
    for (int x = 0; x < 2; x++)
    {
      cin >> arr[y][x];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    int y = arr[i][0];
    int x = arr[i][1];
    dic[y][x] = 1;
  }

  int flag = 0;

  for (int y = 0; y < 3; y++)
  {
    int dy = 0;
    int dx = 0;
    for (int i = 0; i < 10; i++)
    {
      dy = arr[y][0] + dir[i][0];
      dx = arr[y][1] + dir[i][1];

      if (dy < 0 || dy > 2 || dx < 0 || dx > 3)
        continue;

      if (dic[dy][dx] == 1)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 1)
      break;
  }

  if (flag == 1)
  {
    cout << "위험";
  }
  else
  {
    cout << "안전";
  }

  return 0;
}

// https://sooleeandtomas.tistory.com/109