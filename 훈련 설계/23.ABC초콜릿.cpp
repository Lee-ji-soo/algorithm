#include <iostream>
#include <cstring>
using namespace std;

char arr[4] = {"ABC"};
char path[10] = {""};
int used[3] = {0};
int n = 0;
int cnt = 0;

void abc(int lev)
{
  if (lev == n)
  {
    cnt++;
    return;
  }

  for (int i = 0; i < 3; i++)
  {
    if (lev >= 2 && path[lev - 2] == path[lev - 1] &&
        path[lev - 2] == arr[i] && path[lev - 1] == arr[i])
      continue;
    path[lev] = arr[i];
    used[i]++;
    abc(lev + 1);
    used[i]--;
  }
}

int main()
{
  cin >> n;
  abc(0);
  cout << cnt;
}