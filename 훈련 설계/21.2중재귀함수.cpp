#include <iostream>
#include <cstring>
using namespace std;

void abc(int lev)
{
  if (lev == 2)
    return;
  cout << '#';
  abc(lev + 1);
  abc(lev + 1);
  int d = 1;
}
int main()
{
  abc(0);
  return 0;
}
// ###

void abc(int lev)
{
  cout << '#';
  if (lev == 2)
    return;
  abc(lev + 1);
  abc(lev + 1);
  int d = 1;
}
int main()
{
  abc(0);
  return 0;
}
// #######

#include <iostream>
#include <cstring>
using namespace std;

void abc(int lev)
{
  if (lev == 2)
  {
    return;
  }
  abc(lev + 1);
  cout << '#';
  abc(lev + 1);
  cout << '%';
  int d = 1;
}
int main()
{
  abc(0);
  return 0;
}
// #%##%%

#include <iostream>
#include <cstring>
using namespace std;

void abc(int lev)
{
  if (lev == 2)
  {
    return;
  }
  cout << 'I' << lev << ',';
  abc(lev + 1);
  cout << 'T' << lev << ',';
  abc(lev + 1);
  cout << 'X' << lev << ',';
  int d = 1;
}
int main()
{
  abc(0);
  return 0;
}
// I0,I1,T1,X1,T0,I1,X1,T1,X0

#include <iostream>
#include <cstring>
using namespace std;

int cnt;
void abc(int lev)
{
  if (lev == 2)
  {
    return;
  }

  cout << cnt;
  for (int i = 0; i < 2; i++)
  {
    cnt++;
    abc(lev + 1);
    cnt--;
  }
}

int main()
{
  abc(0);
}

# 011