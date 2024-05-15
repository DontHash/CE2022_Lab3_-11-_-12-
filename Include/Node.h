#pragma once
class Node
{
    public:
        Node *Parent;
        Node *Left;
        Node *Right;
        int info;
    public:
        Node():Parent(nullptr),Left(nullptr),Right(nullptr) {}
        ~Node(){}
};