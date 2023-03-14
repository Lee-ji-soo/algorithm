#include <iostream>
using namespace std;
#include <cstring>

int arr[4][3] = {
    1, 3, -5,
    -7, 3, 4,
    -2, -5, -9,
    5, 5, 4};

int path[4] = {0};
int maxnum = -99;
void abc(int lev, int multi)
{
  if (lev == 4)
  {
    for (int i = 0; i < 4; i++)
    {
      cout << path[i] << "*";
    }
    if (maxnum <= multi)
    {
      maxnum = multi;
    }
    cout << '=' << multi << endl;
    return;
  }

  for (int i = 0; i < 3; i++)
  {
    path[lev] = arr[lev][i];
    abc(lev + 1, multi * arr[lev][i]);
    path[lev] = 0;
  }
}

int main()
{
  abc(0, 1);
  cout << maxnum;
  return 0;
}