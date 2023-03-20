#include <iostream>
using namespace std;
#include <cstring>

int n = 0;
char arr[5] = {"BGTK"};
char path[5] = {""};

void abc(int lev)
{
  if (lev == n)
  {
    for (int i = 0; i < n; i++)
    {
      cout << path[i];
    }
    cout << endl;
    return;
  }

  for (int i = 0; i < 4; i++)
  {
    path[lev] = arr[i];
    abc(lev + 1);
  }
}
int main()
{
  cin >> n;
  abc(0);
  return 0;
}