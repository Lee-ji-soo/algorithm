#include <iostream>
using namespace std;

char a[6] = {""};

void abc(int index)
{
  if (index == 5)
  {
    cout << endl;
    return;
  }
  cout << a[index];
  abc(index + 1);
  cout << a[index];
}

int main()
{
  cin >> a;
  abc(0);
  return 0;
}