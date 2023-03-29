#include <iostream>
using namespace std;

char arr[6] = {"EWABC"};
char path[5] = {""};
int used[6] = {0};
char exclude[1] = {""};

void abc(int lev)
{
  if (lev == 4)
  {
    cout << path << endl;
    return;
  }

  for (int i = 0; i < 5; i++)
  {
    if (used[i] == 1)
      continue;
    if (arr[i] == exclude[0])
      continue;
    used[i] = 1;
    path[lev] = arr[i];
    abc(lev + 1);
    used[i] = 0;
  }
}
int main()
{
  cin >> exclude;

  abc(0);
  return 0;
}