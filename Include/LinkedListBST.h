#pragma once
#include "BST.h"
#include "Node.h"

class LinkedListBST : public BST
{
private:
    Node *ROOT;

public:
    LinkedListBST();
    bool isEmpty();
    void add(int data);
    void remove(int data);
    bool search(int data);
};