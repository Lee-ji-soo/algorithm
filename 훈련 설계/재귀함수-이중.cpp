#include <iostream>

using namespace std;

void abc(int lev)
{
  if (lev == 2)
  {
    return;
  };

  for (int i = 0; i < 2; i++)
  {
    cout << i;
    abc(lev + 1);
    cout << i;
  }
}
int main()
{
  abc(0);
  return 0;
}

// 000110100111