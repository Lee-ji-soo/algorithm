#include <iostream>
using namespace std;

void abc(int x)
{
  if (x == 5)
  {
    return;
  }
  cout << x;
  abc(x + 1);
  cout << x;
}

int main()
{
  abc(0);
  return 0;
}

// 0123443210