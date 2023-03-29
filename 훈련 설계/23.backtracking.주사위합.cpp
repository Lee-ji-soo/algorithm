#include <iostream>
#include <cstring>
using namespace std;

int path[10] = {0};
int used[6] = {0};
int n = 0;
void abc(int lev, int sum)
{
  if (sum >= 10)
    return;
  if (lev == n)
  {
    for (int i = 0; i < n; i++)
    {
      cout << path[i];
    }
    cout << " = " << sum << endl;
    return;
  }

  for (int i = 0; i < 6; i++)
  {
    if (used[i] == 1)
      continue;
    used[i] = 1;
    path[lev] = i + 1;
    abc(lev + 1, sum + i + 1);
    used[i] = 0;
  }
}
int main()
{
  cin >> n;
  abc(0, 0);
  return 0;
}
