//
// Created by lwb85 on 2018/5/29.
//
#include "List.h"
#include <iostream>

int main()
{
    List<int> a ;
    a.push_back(1);
    a.push_back(2);
    a.erase(--a.end());
    for (auto i: a)
        std::cout << i << std::endl;
    return 0;
}
