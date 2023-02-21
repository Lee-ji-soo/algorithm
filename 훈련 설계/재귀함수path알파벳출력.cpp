#include <iostream>
using namespace std;

char path[2] = {0};

void run(int lev)
{
  if (lev == 2)
  {
    for (int i = 0; i < 2; i++)
    {
      cout << (char)path[i] << " ";
    }
    cout << endl;
    return;
  };
  for (int i = 65; i < 69; i++)
  {
    path[lev] = i;
    run(lev + 1);
    path[lev] = 0;
  }
}

int main()
{
  run(0);
  return 0;
}