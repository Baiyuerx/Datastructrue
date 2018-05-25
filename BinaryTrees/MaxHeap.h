//
// Created by selwb on 18-3-24.
//

#ifndef BASICDATASTRUCTURES_MAXHEAP_H
#define BASICDATASTRUCTURES_MAXHEAP_H

#include "../lib/book.h"

template <class Elem>
class maxheap{
private:
    Elem* Heap;
    int size;
    int n;
    void shiftdown(int);

public:
    maxheap(Elem* h, int num, int max){
        Heap = h; n = num; size = max;
    }

    int heapsize() const {
        return n;
    }

    bool isLeaf(int pos) {
        return (pos > n/2) && (pos < n);
    }

    int leftchild(int pos) const {
        return 2 * pos + 1;
    }

    int rightchild(int pos) const {
        return 2 * pos + 2;
    }

    int parent(int pos) const {
        return (pos - 1) / 2;
    }

    bool insert(const Elem& e);

    bool removemax(Elem& e);

    bool remove(int, Elem&);

    void buildHeap(){
        for (int i = n/2 - 1; i >= 0; i--)
            shiftdown(i);
    }
};

template <class Elem>
void maxheap<Elem>::shiftdown(int pos) {
    while (!isLeaf(pos)){
        int j = leftchild(pos);
        int rc = rightchild(pos);
        if (rc > j)
            j = rc;
        if (Heap[j] < Heap[pos]) return;
        swap(Heap, j, pos);
        pos = j;
    }
}

template <class Elem>
bool maxheap<Elem>::insert(const Elem &e) {
    if (n >= size) return false;
    int curr = n++;
    Heap[curr] = e;
    while ((curr != 0) && (Heap[curr] > Heap[parent(curr)])){
        swap(Heap, curr, parent(curr));
        curr = parent(curr);
    }
    return true;
}

template <class Elem>
bool maxheap<Elem>::remove(int pos, Elem & e) {
    if ((pos < 0) || (pos >= n)) return false;
    swap(Heap, pos, --n);
    while ((pos != 0) && (Heap[pos] > Heap[parent(pos)]))
        swap(Heap, pos, parent(pos));
    shiftdown(pos);
    e = Heap[n];
    return true;
}

template <class Elem>
bool maxheap<Elem>::removemax(Elem &e) {
    if (n == 0) return false;
    swap(Heap, 0, --n);
    if (n != 0) shiftdown(0);
    e = Heap[n];
    return true;
}

#endif //BASICDATASTRUCTURES_MAXHEAP_H
