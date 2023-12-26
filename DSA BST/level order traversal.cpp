#include<iostream>
using namespace std;

struct Tree
{
    int data;

    Tree* address;
    Tree* Left;
    Tree* Right;
};

Tree* Root = NULL;
Tree* Front = NULL;

void insertRoot(int value)
{
    Tree* Node = new Tree;
    Node->data = value;
    Node->address = NULL;
    if(Root == NULL)
    {
        Root = Node;
    }
}
