#include <iostream>
using namespace std;
#include <cstring>

char ox[6] = {""};
char path[3] = {""};
int a;
int len;

void abc(int lev)
{
  if (lev == a)
  {
    cout << path << endl;
    return;
  }

  for (int i = 0; i < len; i++)
  {
    path[lev] = ox[i];
    abc(lev + 1);
  }
}
int main()
{
  cin >> ox >> a;
  len = strlen(ox);
  abc(0);
  return 0;
}