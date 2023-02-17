#include <iostream>
#include <cstring>
using namespace std;
int a[7] = {0};

void print(int index)
{
  if (index == 8)
  {
    return;
  }
  for (int i = 0; i < index; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  print(index + 1);
}
int main()
{
  for (int i = 0; i < 7; i++)
  {
    cin >> a[i];
  }
  print(4);
  return 0;
}