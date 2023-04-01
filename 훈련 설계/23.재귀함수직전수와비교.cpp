#include <iostream>
#include <cstring>
using namespace std;

int path[3] = {0};

void abc(int lev)
{
  // if(lev >= 2 && path[lev - 1] == path[lev -2]) return;
  if (lev == 3)
  {
    for (int i = 0; i < 3; i++)
    {
      cout << path[i];
    }
    cout << endl;
    return;
  }

  for (int i = 1; i <= 6; i++)
  {
    if (lev > 0 && path[lev - 1] == i)
      continue;
    path[lev] = i;
    abc(lev + 1);
  }
}
int main()
{
  abc(0);
  return 0;
}
