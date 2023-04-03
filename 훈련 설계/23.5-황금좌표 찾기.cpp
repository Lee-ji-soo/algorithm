#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  char right[4][5] = {
      "ABCD",
      "BBAB",
      "CBAC",
      "BAAA"};

  char left[4][5] = {""};
  int count[100] = {0};

  for (int i = 0; i < 4; i++)
  {
    cin >> left[i];
  }

  for (int y = 0; y < 4; y++)
  {
    for (int x = 0; x < 4; x++)
    {
      if (left[y][x] == right[y][x])
      {
        count[(int)left[y][x]] += 1;
      }
    }
  }

  int max = -99;
  int maxIndex = 0;

  for (int i = 65; i < 100; i++)
  {
    if (max < count[i])
    {
      max = count[i];
      maxIndex = i;
    }
  }

  cout << (char)maxIndex;

  return 0;
}