#include <iostream>
using namespace std;

int arr[7] = {3, 5, 4, 2, 6, 1, 9};

void abc(int index)
{
  if (index == 7)
  {
    cout << "호우";
    return;
  }
  cout << arr[index];
  abc(index + 1);
  cout << arr[index];
}
int main()
{
  abc(0);
  return 0;
}