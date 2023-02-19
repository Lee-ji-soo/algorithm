#include <iostream>
#include <cstring>
using namespace std;

void abc(int lev)
{
  if (lev == 2)
    return;
  cout << '#';
  abc(lev + 1);
  abc(lev + 1);
  int d = 1;
}
int main()
{
  abc(0);
  return 0;
}
// ###

void abc(int lev)
{
  cout << '#';
  if (lev == 2)
    return;
  abc(lev + 1);
  abc(lev + 1);
  int d = 1;
}
int main()
{
  abc(0);
  return 0;
}
// #######