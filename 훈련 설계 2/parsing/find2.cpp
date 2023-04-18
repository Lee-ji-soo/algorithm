/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input = "";
    cin >> input;

    int index = -1;
    int i = 0;

    index = input.find('#', index + 1);
    while (1)
    {
        if (i > input.length() - 1)
        {
            break;
        }
        if (index == i)
        {
            index = input.find('#', index + 1);
            cout << endl;
        }
        else
        {
            cout << input[i];
        }
        i++;
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
using namespace std;

int main()
{
    string input = "";
    cin >> input;

    int index = -1;
    int i = 0;

    int a = input.find("#", 0);
    int b = input.find("#", a + 1);

    cout << input.substr(0, a) << endl;
    cout << input.substr(a + 1, b - a - 1) << endl;
    cout << input.substr(b + 1, input.length() - b - 1) << endl;

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
using namespace std;

int main()
{
    string input = "ABC[BTS]KK[KFC]GGR[TT]";

    int aindex = -1;
    int bindex = -1;
    while (1)
    {
        aindex = input.find("[", aindex + 1);
        bindex = input.find("]", bindex + 1);
        if (aindex == -1 && bindex == -1)
        {
            break;
        }
        cout << input.substr(aindex + 1, bindex - aindex - 1) << endl;
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input = "ABC[BTS]KK[KFC]GGR[TT]RR[STKR]";

    int a = -1;
    int b = 0;

    while (1)
    {
        a = input.find("[", a + 1);
        b = input.find("]", a + 1);

        if (a == -1)
        {
            break;
        }

        string sub = input.substr(a + 1, b - a - 1);
        cout << sub << endl;

        a = b + 1;
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "1942|1995|87";
    // 마지막 파싱을 위해 |를 추가
    str += "|";

    int a = -1;
    int i = 0;
    while (1)
    {
        a = str.find('|', a + 1);
        if (a == -1)
        {
            break;
        }
        cout << str.substr(i, a - i) << endl;
        i = a + 1;
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "123-32-43543-12";
    str += "-";
    // stoi

    int sum = 0;

    int index = -1;
    int i = 0;

    while (1)
    {

        index = str.find("-", index + 1);

        if (index == -1)
        {
            break;
        }

        string temp = str.substr(i, index - i);
        sum += stoi(temp);

        i = index + 1;
    }

    cout << sum;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "ID:48,BTS:56,HHTT:99";
    a += ",";

    int opener = -1;
    int closer = -1;
    int sum = 0;

    while (1)
    {

        opener = a.find(":", opener + 1);
        closer = a.find(",", opener + 1);

        if (opener == -1)
        {
            break;
        }

        string temp = a.substr(opener + 1, closer - opener - 1);
        int q = 0;
        sum += stoi(temp);

        opener = closer + 1;
    }
    cout << sum;
}