//
// Created by selwb on 18-3-24.

#include <iostream>
#include "MaxHeap.h"

int main(void) {
    int a[20] = {7, 4, 6, 1, 2, 3, 5};
    maxheap<int> mh(a, 7, 20);
    mh.insert(8);
    int max ;
    mh.removemax(max);
    std::cout << max << '\n';
    return 0;
}
//

