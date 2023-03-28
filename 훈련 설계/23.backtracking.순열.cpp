#include <iostream>
#include <cstring>
using namespace std;

char arr[7] = {"ERATKZ"};
char path[5] = {""};
int used[6] = {0};

void abc(int lev)
{
  if (lev == 3)
  {
    cout << path << endl;
    return;
  }

  for (int i = 0; i < 6; i++)
  {
    if (used[(int)arr[i]] == 1)
      continue;
    path[lev] = arr[i];
    used[(int)arr[i]] = 1;
    abc(lev + 1);
    used[(int)arr[i]] = 0;
  }
}
int main()
{
  abc(0);
  return 0;
}
