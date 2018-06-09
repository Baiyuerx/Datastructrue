//
// Created by lwb85 on 2018/6/4.
//

#ifndef BASICDATASTRUCTURES_AVL_H
#define BASICDATASTRUCTURES_AVL_H

#include <algorithm>
#include "dsexceptions.h"

template<typename Comparable>
class AvlTree {
public:
    AvlTree() : root{nullptr} {}

    AvlTree(const AvlTree &rhs) : root{nullptr} {
        root = clone(rhs.root);
    }

    AvlTree(AvlTree &&rhs) : root{rhs.root} {
        rhs.root = nullptr;
    }

    ~BinarySearchTree() {
        makeEmpty();
    }

    AvlTree operator=(const AvlTree &rhs) {
        AvlTree copy = rhs;
        std::swap(*this, copy);
        return *this;
    }

    AvlTree operator=(AvlTree &&rhs) {
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
    struct AvlNode {
        Comparable element;
        AvlNode *left;
        AvlNode *right;
        int height;

        AvlNode(const Comparable &theElement, AvlNode *lt, AvlNode *rt) : element{theElement}, left{lt},
                                                                          right{rt}, height{0} {}

        AvlNode(Comparable &&theElement, AvlNode *lt, AvlNode *rt) : element{std::move(theElement)}, left{lt},
                                                                     right{rt}, height{0} {}
    };

    AvlNode *root;

    void insert(const Comparable &x, AvlNode *&t) {
        if (t == nullptr)
            t = new AvlNode{x, nullptr, nullptr};
        else if (x < t->element)
            insert(x, t->left);
        else if (t->element < x)
            insert(x, t->right);
        else;
        balance(t);
    }

    static const int ALLOWED_IMBALANCE = 1;

    void balance(AvlNode *&t) {
        if (t == nullptr)
            return;
        if (height(t->left) - height(t->right) > ALLOWED_IMBALANCE)
            if (height(t->left->left) >= height(t->left->right))
                rotateWithLeftChild(t);
            else
                doubleWithleftChild(t);
        else if (height(t->right) - height(t->left) >= ALLOWED_IMBALANCE)
            if (height(t->right->right) > height(t->right->left))
                rotateWithRightChild(t);
            else
                doubleWithRightChild(t);

        t->height = max(height(t->right), height(t->left)) + 1;
    }

    void remove(const Comparable &x, AvlNode *&t) {
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
            AvlNode *old = t;
            t = (t->left != nullptr) ? t->left : t->right;
            delete old;
        }
        balance(t);
    }

    AvlNode *findMin(AvlNode *t) const {
        if (t == nullptr)
            return nullptr;
        if (t->left == nullptr)
            return t;
        return findMin(t->right);
    }

    AvlNode *findMax(AvlNode *t) const {
        if (t == nullptr)
            return nullptr;
        if (t->right == nullptr)
            return t;
        return findMax(t->right);
    }

    bool contains(const Comparable &x, AvlNode *t) const {
        if (t == nullptr)
            return false;
        else if (x < t->element)
            return contains(x, t->left);
        else if (t->element < x)
            return contains(x, t->right);
        else
            return true;
    }

    void makeEmpty(AvlNode *&t) {
        if (t != nullptr) {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        t = nullptr;
    }

    void printTree(AvlNode *t, std::ostream &out) const {
        if (t != nullptr) {
            printTree(t->left, out);
            out << t->element << std::endl;
            printTree(t->right, out);
        }
    }

    AvlNode *clone(AvlNode *t) const {
        if (t == nullptr)
            return nullptr;
        else
            return new AvlNode{t->element, clone(t->left), clone(t->right), t->height};
    }

    int height(AvlNode *t) const {
        return t == nullptr ? -1 : t->height;
    }

    int max(int lns, int rhs) const {
        return lns ? lns : rhs;
    }

    void rotateWithLeftChild(AvlNode *&k2) {
        AvlNode *k1 = k2->left;
        k2->left = k1->right;
        k1->right = k2;
        k2->height = max(height(k2->left), height(k2->right)) + 1;
        k1->height = max(height(k1->left), height(k1->right)) + 1;
        k2 = k1;
    }

    void rotateWithRightChild(AvlNode *&k2) {
        AvlNode *k1 = k2->right;
        k2->right = k1->left;
        k1->left = k2;
        k2->height = max(height(k2->left), height(k2->right)) + 1;
        k1->height = max(height(k1->left), height(k1->right)) + 1;
        k2 = k1;
    }

    void doubleWithleftChild(AvlNode *&t) {
        rotateWithRightChild(t->left);
        rotateWithLeftChild(t);
    }

    void doubleWithRightChild(AvlNode *&k1) {
        rotateWithLeftChild(k1->right);
        rotateWithRightChild(k1);
    }
};

#endif //BASICDATASTRUCTURES_AVL_H
