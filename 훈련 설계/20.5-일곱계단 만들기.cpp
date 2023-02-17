#include <iostream>
#include <cstring>
using namespace std;
int minusT = 0;
void minusFunc(int index)
{
  minusT += 1;
  if (minusT == 4)
    return;
  if (index <= (int)'A')
  {
    minusFunc((int)'Z');
  }
  else
  {
    minusFunc(index - 1);
  }
  cout << (char)index;
}

int plusT = 0;
void plusFunc(int index)
{
  plusT += 1;
  if (plusT == 4)
    return;
  cout << (char)index;
  if (index >= (int)'Z')
  {
    plusFunc((int)'A');
  }
  else
  {
    plusFunc(index + 1);
  }
}

int main()
{
  char c;
  cin >> c;

  minusFunc(((int)c) - 1);
  cout << c;
  plusFunc(((int)c) + 1);
  return 0;
}