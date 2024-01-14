/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
// #include <unordered_map>
using namespace std;
#ifndef NULL
#define NULL 0
#endif
// 1. hash key
// 2. hash function
// 3. hash Code
// 4. hash bucket

struct Node
{
    int key, value;
    Node *next;
};

Node *bucket[4];

int hashFunc(int key)
{
    return key % 3;
};

int arr[] = {5, 6, 9, 1000000000};

void addNode(int from, int key, int value)
{
    if (bucket[from] == NULL)
    {
        bucket[from] = new Node();
        bucket[from]->key = key;
        bucket[from]->value = value;
        bucket[from]->next = NULL;
    }
    else
    {
        bucket[from]->next = new Node();
        bucket[from] = bucket[from]->next;
        bucket[from]->key = key;
        bucket[from]->value = value;
    }
}

void push(int key, int value)
{
    int hashCode = hashFunc(key);
    addNode(hashCode, key, value);
}

int getValue(int tar)
{
    int hashCode = hashFunc(tar);
    for (Node *p = bucket[hashCode]; p != NULL; p = p->next)
    {
        if (p->key == tar)
        {
            return p->value;
        }
    }
    return 0;
}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        push(arr[i], 33);
    }

    cout << getValue(1);
    return 0;
}