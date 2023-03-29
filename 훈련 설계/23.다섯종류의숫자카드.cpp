#include <iostream>
#include <stdlib.h>
using namespace std;

char arr[6] = {""};
char path[6] = {""};
int cnt = 0;
void abc(int lev)
{
  if (lev == 4)
  {
    cnt++;
    return;
  }

  for (int i = 0; i < 5; i++)
  {
    if (lev >= 1 && abs((int)path[lev - 1] - (int)arr[i]) > 3)
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