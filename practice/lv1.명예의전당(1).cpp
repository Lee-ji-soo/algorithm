// 삽입정렬
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> result;
    int temp = 0;

    for (int y = 0; y < score.size(); y++)
    {
        if (y >= k)
        {
            temp = k - 1;
            if (score[y] > answer[temp])
            {
                answer[temp] = score[y];
            }
        }
        else
        {
            temp = y;
            answer.push_back(score[y]);
        }

        for (int x = temp; x > 0; x--)
        {
            if (answer[x - 1] < answer[x])
            {
                swap(answer[x - 1], answer[x]);
            }
        }

        int lastIndex = answer.size() - 1;
        result.push_back(answer[lastIndex]);
    }
    for (int i = 0; i < score.size(); i++)
    {
        cout << result[i] << ", ";
    }
    return result;
}

int main()
{
    solution(3, {10, 100, 20, 150, 1, 100, 200});
    return 0;
}

// 문제풀이 : https: // sooleeandtomas.tistory.com/119