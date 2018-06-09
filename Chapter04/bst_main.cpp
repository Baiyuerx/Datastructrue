//
// Created by lwb85 on 2018/6/4.
//
#include <iostream>
#include "BinarySearchTree.h"
#include "Avl.h"

using namespace std;

int main()
{
    BinarySearchTree<int> bst;
    bst.insert(1);
    bst.insert(2);
    bst.insert(3);
    bst.printTree();
    return  0;
}
