#include <iostream>
using namespace std;

void abc(int x)
{
  if (x == 2)
  {
    return;
  }
  cout << x;
  abc(x - 1);
  cout << x;
}
int main()
{
  abc(6);
  return 0;
}

// 65433456