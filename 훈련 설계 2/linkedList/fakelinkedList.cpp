/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    struct Node
    {
        int a;
        Node *p;
    };

    Node c = {3, NULL};
    Node b = {9, &c};
    Node a = {4, &a};

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
using namespace std;

int main()
{
    struct Node
    {
        char ch;
        Node *p;
    };

    Node c = {'Z', NULL};
    Node b = {'9', &c};
    Node a = {'3', &b};
    Node *t = &a;

    cout << t->ch;
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
using namespace std;

int main()
{
    struct Node
    {
        int a;
        Node *p;
    };

    Node *head;
    Node a, b, c;

    a.a = 3;
    b.a = 4;
    c.a = 5;
    head = &a;

    head->p = &b;
    head->p->p = &c;
    head->p->p->p = NULL;
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
using namespace std;

int main()
{
    struct Node
    {
        int i;
        Node *p;
    };

    Node *head;
    Node a, b, c;

    head = &a;
    head->i = 3;
    head->p = &b;
    head->p->i = 4;
    head->p->p = &c;
    head->p->p->i = 5;
    head->p->p->p = NULL;
    return 0;
}