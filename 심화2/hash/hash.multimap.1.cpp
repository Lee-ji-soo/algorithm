/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    unordered_multimap<string, int> um;
    um.insert({"BBQ", 15000});
    um.insert({"BBQ", 25000});
    um.insert({"BBQ", 35000});
    um.insert({"KFC", 15000});
    um.insert({"MCd", 20000});
    um.insert({"Dunkin", 17800});

    auto mi = um.equal_range("BBQ");
    for (auto i = mi.first; i != mi.second; ++i)
    {
        cout << i->first << ", " << i->second << endl;
    }
    return 0;
}

// 참고자료 cppreference