//
// Created by selwb on 18-3-30.
//

#include <iostream>
#include "Sort.h"


int main(void){
    int a[] = {2,1,3};
    int tmp[3];
//    insertSort(a, sizeof(a)/sizeof(a[0]));
//    BubbleSort(a, sizeof(a)/sizeof(a[0]));
//    SelectSort(a, sizeof(a)/sizeof(a[0]));
//    ShellSort(a, sizeof(a)/sizeof(a[0]));
//    QuickSort(a, 0, 8);
    MergeSort(a, tmp, 0, 2);
    for(auto i : a)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}