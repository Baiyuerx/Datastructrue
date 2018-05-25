//
// Created by selwb on 18-3-23.
//

#ifndef BASICDATASTRUCTURES_TREETRAVELS_H
#define BASICDATASTRUCTURES_TREETRAVELS_H

template <typename E>
void preorder(BinNodePtr<E>* root) {
    if (root == NULL) return; // Empty subtree, do nothing
    std::cout<< root->element() << " ";              // Perform desired action
    preorder(root->left());
    preorder(root->right());
}


template <typename E>
void postorder(BinNodePtr<E>* root) {
    if (root == NULL) return; // Empty subtree, do nothing
    postorder(root->left());
    postorder(root->right());
    std::cout<< root->element() << " ";              // Perform desired action
}


template <typename E>
void inorder(BinNodePtr<E>* root) {
    if (root == NULL) return; // Empty subtree, do nothing
    inorder(root->left());
    std::cout<< root->element() << " ";
    inorder(root->right());
}

#endif //BASICDATASTRUCTURES_TREETRAVELS_H
