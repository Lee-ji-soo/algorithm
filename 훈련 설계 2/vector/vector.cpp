/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 7, 4, 2, 9};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    cout << endl;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 7, 4, 2, 9};

    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    arr.pop_back();
    arr.pop_back();
    int q = 1;
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(4);

    arr[0].push_back(4);
    arr[0].push_back(2);
    arr[0].push_back(5);
    arr[0].push_back(1);
    arr[0].push_back(1);

    arr[1].push_back(3);
    arr[1].push_back(4);
    arr[1].push_back(2);

    arr[3].push_back(1);
    arr[3].push_back(1);
    arr[3].push_back(2);
    arr[3].push_back(3);
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(4);

    arr[0] = {
        4,
        2,
        5,
        1,
        1,
    };
    arr[1] = {3, 4, 2};
    arr[2] = {1, 1, 2};

    return 0;
}

/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<vector<char>> arr(3);
    arr[0] = {'A', 'B', 'T'};
    arr[2] = {'R', 'S'};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = arr[i].size() - 1; j >= 0; j--)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}