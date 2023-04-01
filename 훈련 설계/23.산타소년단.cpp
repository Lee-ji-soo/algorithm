#include <iostream>
using namespace std;

char name[6] = {"EWABC"};
int used[5] = {0};
char path[4] = {""};
int cnt = 0;
int a = 0;

void run(int lev)
{
  if (lev == a)
  {
    if (used[2] == 1)
    {
      cnt++;
    }
    return;
  }

  for (int i = 0; i < 5; i++)
  {
    if (used[i] == 1)
      continue;
    used[i] = 1;
    path[lev] = name[i];
    run(lev + 1);
    used[i] = 0;
  }
}

int main()
{
  cin >> a;
  run(0);
  cout << cnt;
  return 0;
}