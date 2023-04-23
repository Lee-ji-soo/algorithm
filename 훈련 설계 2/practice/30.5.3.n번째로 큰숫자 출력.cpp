/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> swap(int a, int b, vector<int> vect)
{
    int temp = vect[b];
    vect[b] = vect[a];
    vect[a] = temp;
    return vect;
}

int main()
{
    int n = 0;
    cin >> n;
    vector<int> vect(6);
    vect = {1, 5, 4, 2, -5, -7};

    int num = 0;

    for (int i = 0; i < n; i++)
    {
        int max = -2e2;
        int maxIndex = 0;
        int size = vect.size();
        for (int k = 0; k < size; k++)
        {
            if (max < vect[k])
            {
                max = vect[k];
                maxIndex = k;
            }
        }

        vect = swap(maxIndex, size - 1, vect);
        num = vect[size - 1];
        vect.pop_back();
    }

    cout << num;

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {
        1, 5, 4, 2, -5, -7};
    int n;
    cin >> n;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6 - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << arr[n - 1];
    return 0;
}