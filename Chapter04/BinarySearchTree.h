//
// Created by lwb85 on 2018/6/3.
//

#ifndef BASICDATASTRUCTURES_BINARYSEARCHTREE_H
#define BASICDATASTRUCTURES_BINARYSEARCHTREE_H

#include <algorithm>
#include "dsexceptions.h"

template<typename Comparable>
class BinarySearchTree {
public:
    BinarySearchTree() : root{nullptr} {}

    BinarySearchTree(const BinarySearchTree &rhs) : root{nullptr} {
        root = clone(rhs.root);
    }

    BinarySearchTree(BinarySearchTree &&rhs) : root{rhs.root} {
        rhs.root = nullptr;
    }

    ~BinarySearchTree() {
        makeEmpty();
    }

    BinarySearchTree operator=(const BinarySearchTree &rhs) {
        BinarySearchTree copy = rhs;
        std::swap(*this, copy);
        return *this;
    }

    BinarySearchTree operator=(BinarySearchTree &&rhs) {
        std::swap(root, rhs.root);
        return *this;
    }

    const Comparable &findMin() const {
        if (isEmpty())
            throw UnderflowException{};
        return findMin(root)->element;
    }

    const Comparable &findMax() const {
        if (isEmpty())
            throw UnderflowException{};
        return findMax(root)->element;
    }

    bool contains(const Comparable &x) const {
        return contains(x, root);
    }

    bool isEmpty() const {
        return root == nullptr;
    }

    void printTree(std::ostream &out = std::cout) const {
        if (isEmpty())
            out << "Empty tree" << std::endl;
        else
            printTree(root, out);
    }

    void insert(const Comparable &x) {
        insert(x, root);
    }

    /**
     * Insert x into the tree; duplicates are ignored.
     */
    void insert(Comparable &&x) {
        insert(std::move(x), root);
    }

    /**
     * Remove x from the tree. Nothing is done if x is not found.
     */
    void remove(const Comparable &x) {
        remove(x, root);
    }

    void makeEmpty() {
        makeEmpty(root);
    }


private:
    struct BinaryNode {
        Comparable element;
        BinaryNode *left;
        BinaryNode *right;

        BinaryNode(const Comparable &theElement, BinaryNode *lt, BinaryNode *rt) : element{theElement}, left{lt},
                                                                                   right{rt} {}

        BinaryNode(Comparable &&theElement, BinaryNode *lt, BinaryNode *rt) : element{std::move(theElement)}, left{lt},
                                                                              right{rt} {}
    };

    BinaryNode *root;

    void insert(const Comparable &x, BinaryNode *&t) {
        if (t == nullptr)
            t = new BinaryNode{x, nullptr, nullptr};
        else if (x < t->element)
            insert(x, t->left);
        else if (t->element < x)
            insert(x, t->right);
        else;
    }

    void remove(const Comparable &x, BinaryNode *&t) {
        if (t == nullptr)
            return;
        if (x < t->element)
            remove(x, t->left);
        if (t->element < x)
            remove(x, t->right);
        else if (t->left != nullptr && t->right != nullptr) {
            t->element = findMin(t->right)->element;
            remove(t->element, t->right);
        } else {
            BinaryNode *old = t;
            t = (t->left != nullptr) ? t->left : t->right;
            delete old;
        }
    }

    BinaryNode *findMin(BinaryNode *&t) const {
        if (t == nullptr)
            return nullptr;
        if (t->left == nullptr)
            return t;
        return findMin(t->right);
    }

    BinaryNode *findMax(BinaryNode *&t) const {
        if (t == nullptr)
            return nullptr;
        if (t->right == nullptr)
            return t;
        return findMax(t->right);
    }

    bool contains(const Comparable &x, BinaryNode *t) const {
        if (t == nullptr)
            return false;
        else if (x < t->element)
            return contains(x, t->left);
        else if (t->element < x)
            return contains(x, t->right);
        else
            return true;
    }

    void makeEmpty(BinaryNode *&t) {
        if (t != nullptr) {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        t = nullptr;
    }

    void printTree(BinaryNode *t, std::ostream &out) const {
        if (t != nullptr) {
            printTree(t->left, out);
            out << t->element << std::endl;
            printTree(t->right, out);
        }
    }

    BinaryNode *clone(BinaryNode *t) const {
        if (t == nullptr)
            return nullptr;
        else
            return new BinaryNode{t->element, clone(t->left), clone(t->right)};
    }
};

#endif //BASICDATASTRUCTURES_BINARYSEARCHTREE_H
