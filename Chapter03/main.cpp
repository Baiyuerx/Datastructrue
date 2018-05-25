//
// Created by selwb on 18-5-24.
//
#include <iostream>
#include "Vector.h"

int main()
{
    Vector<int> a(3);
    a.push_back(3);
    std::cout<< a[2] << a.empty();
    return  0;
}

