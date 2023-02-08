#include <iostream>
using namespace std;

int main()
{
  int a = 9;
  int t = 7;

  int *g = &a;
  int *r = &a;
  int *kg = &t;
  int **p = &kg;
  int **b = &kg;

  cout << **p;
  cout << *kg;
  cout << g;
  cout << r;
  cout << *p;
  cout << kg;
}