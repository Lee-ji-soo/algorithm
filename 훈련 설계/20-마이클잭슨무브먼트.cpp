#include <iostream>

using namespace std;

int arr[6];

void mj(int x)
{
  cout << arr[x] << " ";
  if (x == 5)
  {
    return;
  }
  mj(x + 1);
  cout << arr[x] << " ";
}

int main()
{
  for (int i = 0; i < 6; i++)
  {
    cin >> arr[i];
  }

  int n = 0;
  mj(n);
  return 0;
}