#include <iostream>
using namespace std;

// 메모리 영역 전역변수 공간
int v[1000] = {0}; // 4000
char g[400];       // 400
char *p[50];       // 500

// 총 사용 메모리 : 4800byte;

struct Node
{
    int a;
    int b;
};

struct Node2
{
    int a;
    char b;
};

struct Node3
{
    int a;
    char b;
    char *p;
};

int main()
{
    Node v;  // 8byte
    Node2 v; // 8byte
    Node3 v; // 16byte

    // 메모리 영역 중 스택
    // 사이즈 고정된다. max: 2mb // 100,000 byte초과 시 에러
    return 0;
}