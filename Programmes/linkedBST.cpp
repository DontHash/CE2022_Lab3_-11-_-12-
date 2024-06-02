#include "../Include/LinkedListBST.h"
#include <iostream>
int main()
{
    LinkedListBST list;
    if (list.isEmpty())
    {
        std::cout << "The Binary search Tree is empty";
    }
    list.add(12);
    if (!list.isEmpty())
    {
        std::cout << "\nThe Binary search Tree is not empty";
    }

    list.add(24);
    list.add(2);
    if (list.search(2))
    {
        std::cout << "\nThe element is found";
    }
    list.remove(2);
    if (!list.search(2))
    {
        std::cout << "\nThe element was deleted";
    }
}