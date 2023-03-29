#include <iostream>
#include <cstring>
using namespace std;

int arr[3][3] = {
    4, 5, -1,
    2, -3, -4,
    0, 1, 2};

int path[4] = {0};
int used[3][3] = {0};
int dat[3000] = {0};
int cnt = 0;

void abc(int lev, int multi)
{
  if (lev == 4)
  {
    if (dat[multi + 1000] == 0)
      cnt++;
    dat[multi + 1000]++;
    return;
  }

  for (int y = 0; y < 3; y++)
  {
    for (int x = 0; x < 3; x++)
    {
      if (used[y][x] == 1)
        continue;
      used[y][x] = 1;
      path[lev] = arr[y][x];
      abc(lev + 1, multi * arr[y][x]);
      used[y][x] = 0;
    }
  }
}

int main()
{
  abc(0, 1);
  cout << cnt;
  return 0;
}
