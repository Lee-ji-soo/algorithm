#include <iostream>
using namespace std;

char path[4] = {""};
char level[4] = {"LMR"};
void run(int lev)
{
  if (lev == 3)
  {
    cout << path << endl;
    return;
  }

  for (int i = 0; i < 3; i++)
  {
    path[lev] = level[i];
    run(lev + 1);
    path[lev] = 0;
  }
}
int main()
{
  run(0);
  return 0;
}