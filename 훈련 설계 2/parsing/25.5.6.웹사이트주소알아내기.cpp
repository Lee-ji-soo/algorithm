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

string str = "";
string protocol = "";

int isStartWithProtocol(int index)
{
    string protocols[2] = {"https://", "http://"};

    int j = 0;
    for (int i = 0; i < 2; i++)
    {
        j = str.find(protocols[i], index);
        protocol += protocols[i];
        if (j >= 0)
        {
            return j;
        }
    }
    return -1;
}

int isEndWithDomain(int index)
{
    string domains[4] = {".com", ".co.kr", ".org", ".net"};

    int j = 0;
    for (int i = 0; i < 2; i++)
    {
        j = str.find(domains[i], index);
        if (j >= 0)
        {
            return j;
        }
    }
    return -1;
}

int main()
{

    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }

    int protocolIndex = 0;
    int domainIndex = 0;
    int cnt = 0;
    while (true)
    {
        protocolIndex = isStartWithProtocol(protocolIndex);
        if (protocolIndex == -1)
        {
            break;
        }
        domainIndex = isEndWithDomain(protocolIndex);
        if (protocolIndex == -1)
        {
            break;
        }

        int isValid = 0;
        int protocolEndIndex = protocol.length() + 1;
        string temp = str.substr(protocolEndIndex, domainIndex - protocolEndIndex);
        isValid = temp.length() >= 3;

        if (isValid == 1)
        {
            cnt++;
        }
        protocolIndex = domainIndex;
    }
    cout << cnt << "개";
    return 0;
}