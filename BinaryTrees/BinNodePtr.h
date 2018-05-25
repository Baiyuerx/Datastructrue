//
// Created by selwb on 18-3-23.
//

#ifndef BASICDATASTRUCTURES_BSTNODEPTR_H
#define BASICDATASTRUCTURES_BSTNODEPTR_H

#include "BinNode.h"

template <typename E>
class BinNodePtr : public BinNode<E> {
private:
    E it;
    BinNodePtr* lc;
    BinNodePtr* rc;


public:
    BinNodePtr(){lc = rc = NULL; }
    BinNodePtr(E e, BinNodePtr* l = NULL, BinNodePtr* r = NULL){
        it = e; lc = l; rc = r;
    }
    ~BinNodePtr() {}


    E& element() { return it;}
    void setElement(const E& e) { it = e; }


    inline BinNodePtr* left() const { return lc;}
    void setLeft(BinNode<E>* b) { lc = (BinNodePtr*)b; }              //为何setLeft函数的参数是BinNode<E>*?
    inline BinNodePtr* right() const { return rc;}
    void setRight(BinNode<E>* b) { rc = (BinNodePtr*)b; }
    bool isLeaf() { return (lc == NULL) && (rc == NULL); }


};

#endif //BASICDATASTRUCTURES_BSTNODEPTR_H
