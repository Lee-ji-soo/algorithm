#include <iostream>
using namespace std;

int arr[8] = {3, 5, 4, 2, 6, 1, 9, 0};

void abc(int index, int sum)
{
  if (index == 7)
  {
    cout << "호우";
    return;
  }
  abc(index + 1, sum + arr[index + 1]);
  cout << sum << ' ';
  // 30 21 20 14 12 7 3
}
int main()
{
  abc(0, arr[0]);
  return 0;
}