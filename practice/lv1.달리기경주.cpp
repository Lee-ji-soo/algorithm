#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    vector<string> answer;
    for (int i = 0; i < callings.size(); i++)
    {
        int callIndex = 0;
        for (int x = 0; x < players.size(); x++)
        {
            if (players[x] == callings[i])
            {
                callIndex = x;
            }
        }

        swap(players[callIndex], players[callIndex - 1]);
    }

    for (int i = 0; i < players.size(); i++)
    {
        answer.push_back(players[i]);
    }
    return answer;
}
