#include <iostream>
#include <cstring>
using namespace std;

char arr[5] = {""};
char path[5] = {""};
int cnt = 0;

void abc(int lev)
{
  if (lev == 4)
  {
    cnt += 1;
    return;
  }

  for (int i = 0; i < 4; i++)
  {
    if (lev > 0 && path[lev - 1] == 'B' && arr[i] == 'T')
      continue;
    if (lev > 0 && path[lev - 1] == 'T' && arr[i] == 'B')
      continue;
    path[lev] = arr[i];
    abc(lev + 1);
  }
}

int main()
{
  cin >> arr;
  abc(0);
  cout << cnt;
  return 0;
}
