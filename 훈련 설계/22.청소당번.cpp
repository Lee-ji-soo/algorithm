#include <iostream>
using namespace std;
#include <cstring>

int branch = 0;
int path[4] = {0};
void abc(int lev)
{

  if (lev == 4)
  {
    for (int i = 0; i < 4; i++)
    {
      cout << path[i];
    }
    cout << endl;
    return;
  }

  for (int i = 1; i <= branch; i++)
  {
    path[lev] = i;
    abc(lev + 1);
  }
}

int main()
{
  cin >> branch;
  abc(0);
  return 0;
}