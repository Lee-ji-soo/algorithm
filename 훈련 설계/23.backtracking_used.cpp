#include <iostream>
#include <cstring>
using namespace std;

int path[3] = {0};
int used[6] = {0};

void abc(int lev)
{
  if (lev == 3)
  {
    for (int i = 0; i < 3; i++)
    {
      cout << path[i];
    }
    cout << endl;
    return;
  }

  for (int i = 0; i < 6; i++)
  {
    if (used[i] >= 1)
      continue;
    path[lev] = i + 1;
    used[i] += 1;
    abc(lev + 1);
    used[i] -= 1;
  }
}
int main()
{
  abc(0);
  return 0;
}
