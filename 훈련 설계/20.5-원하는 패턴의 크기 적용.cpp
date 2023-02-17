#include <iostream>
#include <cstring>
using namespace std;

int a[2] = {0};
int pattern[4][5] = {
    3, 5, 4, 2, 5,
    3, 3, 3, 2, 1,
    3, 2, 6, 7, 8,
    9, 1, 1, 3, 2};

int getSum(int y, int x)
{
  int sum = 0;
  for (int i = 0; i < a[0]; i++)
  {
    for (int j = 0; j < a[1]; j++)
    {
      if (y + i >= 4 || x + j >= 5)
        continue;
      sum += pattern[y + i][x + j];
    }
  }
  return sum;
}

int main()
{
  for (int i = 0; i < 2; i++)
  {
    cin >> a[i];
  }

  int max = -99;
  int maxX = 0;
  int maxY = 0;
  for (int y = 0; y < 4; y++)
  {
    for (int x = 0; x < 5; x++)
    {
      int sum;
      sum = getSum(y, x);
      if (sum > max)
      {
        max = sum;
        maxX = x;
        maxY = y;
      }
    }
  }

  cout << '(' << maxY << ',' << maxX << ')';
  return 0;
}