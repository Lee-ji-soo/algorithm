#include <iostream>

using namespace std;

namespace KFC
{
  int x;
  int sum;
}

using namespace KFC;

namespace BTS
{
  int x;
  int sum;
}

int main()
{
  x = 10;
  BTS::x = 340;

  std::cout << KFC::x;
  std::cout << "HI";

  return 0;
}