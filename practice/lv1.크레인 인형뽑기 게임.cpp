/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;

    vector<int> result;
    for (int i = 0; i < moves.size(); i++)
    {
        int moveI = moves[i] - 1;
        int boardSize = board[moveI].size();
        for (int y = 0; y < boardSize; y++)
        {
            if (board[y][moveI] == 0)
                continue;
            else
            {
                result.push_back(board[y][moveI]);
                board[y][moveI] = 0;
                if (result.size() >= 2 && result[result.size() - 2] == result[result.size() - 1])
                {
                    result.pop_back();
                    result.pop_back();
                    answer += 2;
                }
                break;
            }
        }
    }
    cout << answer;
    return answer;
}

int main()
{
    solution({{0, 0, 0, 0, 0},
              {0, 0, 1, 0, 3},
              {0, 2, 5, 0, 1},
              {4, 2, 4, 4, 2},
              {3, 5, 1, 3, 1}},
             {1, 5, 3, 5, 1, 2, 1, 4});
    return 0;
}