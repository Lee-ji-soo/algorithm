#include <iostream>
using namespace std;
#include <cstring>

int arr[3][4] = {
    4,
    5,
    1,
    9,
    9,
    5,
    3,
    3,
    4,
    4,
    5,
    6,
};

int path[3] = {0};

void abc(int lev, int sum)
{
  if (lev == 3)
  {
    for (int i = 0; i < 3; i++)
    {
      cout << path[i];
    }
    cout << "=" << sum << endl;
    return;
  }

  for (int i = 0; i < 4; i++)
  {
    path[lev] = arr[lev][i];
    // sum += arr[lev][i];
    abc(lev + 1, sum + arr[lev][i]);
    // sum -= arr[lev][i];
    path[lev] = 0;
  }
}

int main()
{
  abc(0, 0);
  return 0;
}