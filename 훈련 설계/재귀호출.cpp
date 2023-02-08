#include <iostream>
using namespace std;

int n;
char path[10];

void recur(int m)
{
  if (m == n)
  {
    cout << path << endl;
    return;
  }

  for (int y = 1; y <= 3; y++)
  {
    path[m] = '0' + y;
    recur(m + 1);
  }
}

int main()
{
  cin >> n;
  // 재귀호출
  recur(0);
}