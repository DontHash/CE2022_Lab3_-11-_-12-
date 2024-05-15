#include "../Include/LinkedListBST.h"
#include <iostream>
LinkedListBST::LinkedListBST() : ROOT(nullptr) {}

bool LinkedListBST::isEmpty()
{
    if (ROOT == nullptr)
    {
        return true;
    }
    else
    {
        std::cout << "The list is Empty \n";
        return false;
    }
}

void LinkedListBST::add(int data)
{
    if (isEmpty())
    {
        ROOT->info = data;
        ROOT->Parent = nullptr;
    }
    else
    {
        Node *newNode;
        Node *temp = ROOT;
        if (data > temp->info)
        {
            if (temp->Right == nullptr)
            {
                newNode->Parent = temp;
                newNode->info = data;
            }
            else
                temp = temp->Right;
        }
        else if (data < temp->info)
        {
            if (temp->Left == nullptr)
            {
                newNode->Parent = temp;
                newNode->info = data;
            }
            else
                temp = temp->Left;
        }
    }
}