//
// Created by selwb on 18-3-23.
//

#ifndef BASICDATASTRUCTURES_BST_H
#define BASICDATASTRUCTURES_BST_H

#include "BinNodePtr.h"

template <class Elem>
class BST {
private:
    BinNodePtr<Elem>* root;
    int nodecount;

    void clearhelp(BinNodePtr<Elem>*);
    BinNodePtr<Elem>* inserthelp(BinNodePtr<Elem>*, const Elem&);
    BinNodePtr<Elem>* deletemin(BinNodePtr<Elem>*, BinNodePtr<Elem>*&);
    BinNodePtr<Elem>* removehelp(BinNodePtr<Elem>*, const Elem&, BinNodePtr<Elem>*&);
    bool findhelp(BinNodePtr<Elem>*, const Elem&) const ;
    void printhelp(BinNodePtr<Elem>*, int) const;


public:
    BST() { root = NULL; nodecount = 0; }
    ~BST() { clear(); }

    void clear() {
        clearhelp(root); root = NULL; nodecount = 0;
    }

    bool insert(const Elem& e) {
        root = inserthelp(root, e);
        nodecount++;
        return true;
    }

    bool remove(const Elem& e){
        BinNodePtr<Elem>* t = NULL;
        root = removehelp(root, e, t);
        if ( t == NULL ) return false;
//        e = t -> element();
        nodecount--;
        delete t;
        return true;

    }

    bool removeAny(Elem& e){
        if (root == NULL) return false;
        BinNodePtr<Elem>* t;
        root = deletemin(root, t);
        e = t -> element();
        delete t;
        nodecount--;
        return true;
    }

    bool find(const Elem& e) const {
        return findhelp(root, e);
    }

    int size() { return nodecount;}

    void print() const {
        if (root == NULL) std::cout << "The BST is empty.\n";
        else printhelp(root, 0);
    }
};


template <class Elem>
void BST<Elem>::clearhelp(BinNodePtr<Elem> * root) {
    if (root == NULL) return;
    clearhelp(root -> left());
    clearhelp(root -> right());
    delete root;
}


template <class Elem>
BinNodePtr<Elem>* BST<Elem>::inserthelp(BinNodePtr<Elem> * root, const Elem & e) {
    if (root == NULL)
        return new BinNodePtr<Elem>(e);
    if (e < root -> element())
        root -> setLeft(inserthelp(root -> left(), e));
    else root -> setRight(inserthelp(root -> right(), e));
    return root;
}

template <class Elem>
BinNodePtr<Elem>* BST<Elem>::deletemin(BinNodePtr<Elem> * subroot, BinNodePtr<Elem> *& min) {
   if (subroot -> left() == NULL) {
       min = subroot;
       return subroot -> right();
   } else {
       subroot -> setLeft(deletemin(subroot -> left(), min));
       return subroot;
   }
}

template <class Elem>
BinNodePtr<Elem>* BST<Elem>::removehelp(BinNodePtr<Elem> * subroot, const Elem& k, BinNodePtr<Elem> *& it) {
    if (subroot == NULL) return NULL;
    else if (k < subroot -> element())
        subroot -> setLeft(removehelp(subroot -> left(), k, it));
    else if (k > subroot -> element())
        subroot -> setRight(removehelp(subroot -> right(), k, it));
    else{
        BinNodePtr<Elem>* temp;
        it = subroot;
        if (subroot -> left() == NULL) subroot = subroot -> right();
        else if(subroot -> right() == NULL) subroot = subroot -> left();
        else {
            subroot -> setRight(deletemin(subroot -> right(), temp));
            Elem ite = subroot -> element();
            subroot -> setElement(temp -> element());
            temp->setElement(ite);
            it = temp;
        }
    }
    return subroot;
}

template <class Elem>
bool BST<Elem>::findhelp(BinNodePtr<Elem> * subroot, const Elem &e) const {
    if (subroot == NULL) return false;
    else if (e < subroot->element()) return findhelp(subroot->left(), e);
    else if (e > subroot->element()) return findhelp(subroot->right(), e);
    else{
        return true;
    }
}

template <class Elem>
void BST<Elem>::printhelp(BinNodePtr<Elem> * subroot, int level) const {
    if (subroot == NULL) return;
    printhelp(subroot->left(), level + 1);
    for (int i=0; i < level; i++)
        std::cout << "   ";
    std::cout << subroot->element() << "\n";
    printhelp(subroot->right(), level + 1);
}
#endif //BASICDATASTRUCTURES_BST_H
