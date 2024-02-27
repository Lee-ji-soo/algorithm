#include <string>
#include <iostream>
#include <vector>
using namespace std;

bool solution(string s)
{
    vector<char> vect;
    int len = s.length();
    bool answer = true;
    for (int i = 0; i < len; i++)
    {
        cout << s[i];
        if (s[i] == '(')
        {
            vect.push_back(s[i]);
        }
        else
        {
            int vectSize = vect.size();
            if (vectSize <= 0)
            {
                return false;
            }
            vect.pop_back();
        }
    }

    int vectLen = vect.size();
    if (vectLen > 0)
    {
        return false;
    }
    return true;
}