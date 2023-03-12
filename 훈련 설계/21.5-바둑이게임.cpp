#include <iostream>
#include <array>
using namespace std;

int main()
{
  int arr[5][5] = {
      0, 1, 0, 1, 0,
      1, 2, 0, 2, 1,
      0, 1, 2, 1, 0,
      0, 2, 1, 0, 1,
      1, 1, 0, 0, 0};

  int y, x;
  cin >> y >> x;
  x = x - 1;
  y = y - 1;

  arr[y][x] = 1;

  int dir[4][2] = {
      -1, 0,
      1, 0,
      0, -1,
      0, 1};

  int count = 0;
  for (int i = 0; i < 4; i++)
  {
    int dy = 0;
    int dx = 0;
    dy = y + dir[i][0];
    dx = x + dir[i][1];
    if (dy > 5 || dx > 5)
      continue;

    if (arr[dy][dx] == 2)
    {
      int flag = 1;
      for (int i = 0; i < 4; i++)
      {
        int ddy = 0;
        int ddx = 0;
        ddy = dy + dir[i][0];
        ddx = dx + dir[i][1];
        if (ddy > 5 || ddx > 5)
          continue;
        if (arr[ddy][ddx] != 1)
        {
          flag = 0;
          break;
        }
      }
      count += flag;
    }
  }

  cout << count;

  return 0;
}

// 문제풀이: https://sooleeandtomas.tistory.com/106