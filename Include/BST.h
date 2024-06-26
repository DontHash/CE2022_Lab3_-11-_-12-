#pragma once
class BST
{
    virtual bool isEmpty() = 0;
    virtual void add(int data) = 0;
    virtual void remove(int data) = 0;
    virtual bool search(int data) = 0;
};