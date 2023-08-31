#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Node
{
    int step;
    string direct;
};
vector<Node> vect = {
    {3, ">>"},
    {2, ">>"},
    {1, "<<"},
    {3, ">>"},
    {2, "<<"},
    {0, "bomb"},
    {1, "<<"}};

void run(int index)
{
    if (index == 5)
    {
        cout << "5번" << endl;
        return;
    }

    if (vect[index].direct == ">>")
    {
        run(index + vect[index].step);
    }
    else if (vect[index].direct == "<<")
    {
        run(index - vect[index].step);
    }
    cout << index << "번" << endl;
}

int main()
{
    int n = 0;
    cin >> n;
    run(n);
    return 0;
}