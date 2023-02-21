#include <iostream>

using namespace std;

int path[2] = {0};

void run(int lev)
{
  if (lev == 2)
  {
    cout << '[' << path[0] << ',' << path[1] << ']' << endl;
    return;
  };

  for (int i = 0; i < 2; i++)
  {
    path[lev] = i + 1;
    run(lev + 1);
    path[lev] = 0;
  }
}
int main()
{
  run(0);
  return 0;
}