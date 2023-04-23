#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

vector<int> people = {50, 50, 70, 80};
int limit = 100;
int main()
{
    sort(people.begin(), people.end());                  // 배열을 정렬합니다.
    int answer = 0, left = 0, right = people.size() - 1; // 구명보트 수, 왼쪽 포인터, 오른쪽 포인터를 초기화합니다.
    while (left <= right)
    { // 왼쪽 포인터와 오른쪽 포인터가 교차할 때까지 반복합니다.
        if (people[left] + people[right] <= limit)
        {           // 왼쪽 사람과 오른쪽 사람의 몸무게를 더한 값이 구명보트 무게 제한 이하일 경우
            left++; // 왼쪽 포인터를 오른쪽으로 한 칸 이동합니다. (두 명이 같이 타는 경우)
        }
        right--;  // 오른쪽 포인터를 왼쪽으로 한 칸 이동합니다. (한 명만 타는 경우)
        answer++; // 구명보트 수를 증가시킵니다.
    }
    return answer; // 구명보트 수를 반환합니다.
}