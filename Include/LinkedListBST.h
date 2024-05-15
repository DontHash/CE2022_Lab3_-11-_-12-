#pragma once
#include "BST.h"

class LinkedListBST : public BST
{
    bool isEmpty();
    void add(int data);
    void remove(int data);
    void search(int data);
};