#include <iostream>
#include <cstring>
using namespace std;
int arr1[4][4] = {0};
int arr2[4][4] = {0};

int hasSame()
{
  int flag = 0;
  for (int y = 0; y < 4; y++)
  {
    for (int x = 0; x < 4; x++)
    {
      if (arr1[y][x] == 1 && arr2[y][x] == 1)
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
  return flag;
}
int main()
{

  for (int y = 0; y < 4; y++)
  {
    for (int x = 0; x < 4; x++)
    {
      cin >> arr1[y][x];
    }
  }

  for (int y = 0; y < 4; y++)
  {
    for (int x = 0; x < 4; x++)
    {
      cin >> arr2[y][x];
    }
  }

  if (hasSame())
  {
    cout << "걸리다";
  }
  else
  {
    cout << "걸리지않는다";
  }

  return 0;
}