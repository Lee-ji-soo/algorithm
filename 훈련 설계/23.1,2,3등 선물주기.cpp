#include <iostream>
#include <cstring>
using namespace std;

char path[4] = {""};
int used[4] = {0};
char arr[5] = {""};
void abc(int lev)
{
  if (lev == 3)
  {
    cout << path << endl;
    return;
  }

  for (int i = 0; i < 4; i++)
  {
    if (used[i] > 0)
      continue;
    path[lev] = arr[i];
    used[i]++;
    abc(lev + 1);
    used[i]--;
  }
}

int main()
{
  cin >> arr;
  abc(0);
  return 0;
}
