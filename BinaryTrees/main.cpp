#include <iostream>
#include "BinNodePtr.h"
#include "TreeTravels.h"

int main() {
    BinNodePtr<std::string> n1("A"), n2("B"), n3("C"), n4("D"), n5("E"), n6("F"), n7("G"), n8("H"), n9("I");
    n6.setRight(&n9);
    n6.setLeft(&n8);
    n5.setLeft(&n7);
    n3.setLeft(&n5);
    n3.setRight(&n6);
    n2.setRight(&n4);
    n1.setLeft(&n2);
    n1.setRight(&n3);
//    std::cout << n1.left()->element() << std::endl;
//    std::cout << n1.isLeaf() << std::endl;
    preorder(&n1);
    std::cout << std::endl;
    inorder(&n1);
    std::cout << std::endl;
    postorder(&n1);
    return 0;
}

