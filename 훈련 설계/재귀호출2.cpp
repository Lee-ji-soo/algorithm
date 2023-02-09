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

#include <iostream>
using namespace std;

void abc(int x)
{
  cout << x;
  if (x == 2)
  {
    return;
    cout << "#";
  }
  abc(x + 1);
  cout << x;
  int d = 1;
}

int main()
{
  abc(0);
  return 0;
}

// 01210