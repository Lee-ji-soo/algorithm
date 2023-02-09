#include <iostream>
using namespace std;

int x = 0;
void abc()
{
  cout << x;
  if (x == 2)
  {
    cout << "#";
    return;
  }
  cout << x;
  x++;
  abc();
  cout << x;
  int d = 1;
}
int main()
{
  abc();
  return 0;
}

// 00112#22
