//
// Created by selwb on 18-3-24.
//
#include <iostream>
#include "BST.h"


// Warning: This test driver has horrible memory leaks.
// Everytime the program does a remove to "it", the next time "it"
// gets used, that previous Int object gets clobbered.
int main()
{
    BST<int> tree;
    std::cout << "Size: " << tree.size() << "\n";
    tree.insert(37);
    tree.insert(24);
    tree.insert(42);
    tree.insert(7);
    tree.insert(2);
    tree.insert(40);
    tree.insert(42);
    tree.insert(32);
    tree.insert(120);
    tree.remove(42);
    tree.print();
    int i = 0 ;
    tree.removeAny(i);
    std::cout << i << std::endl;
    return 0;
}