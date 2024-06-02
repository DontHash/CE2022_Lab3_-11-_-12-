#include "../Include/ArrayBST.h"
#include <iostream>

int main()
{
    ArrayBST tree;
    if (tree.isEmpty())
    {
        std::cout << "The Binary search Tree is empty" << std::endl;
    }
    tree.add(12);
    if (!tree.isEmpty())
    {
        std::cout << "The Binary search Tree is not empty" << std::endl;
    }

    tree.add(24);
    tree.add(2);
    if (tree.search(2))
    {
        std::cout << "The element is found" << std::endl;
    }
    tree.remove(2);
    if (!tree.search(2))
    {
        std::cout << "The element was deleted" << std::endl;
    }

    std::cout << "Inorder traversal: ";
    tree.inorderTraversal(0);
    std::cout << std::endl;

    return 0;
}
