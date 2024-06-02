#pragma once
#include "BST.h"

const int MAX_SIZE = 100;

class ArrayBST : public BST
{
private:
    int nodes[MAX_SIZE];
    int size;

public:
    ArrayBST();
    bool isEmpty();
    void add(int data);
    void remove(int data);
    bool search(int data);
    void inorderTraversal(int index);
};
