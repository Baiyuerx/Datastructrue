//
// Created by selwb on 18-5-24.
//
#include <iostream>
#include "Vector.h"

int main()
{
    Vector<int> a(3);
    a.push_back(3);
	a.push_back(2);
	a.push_back(1);
	std::cout << a[3] << std::endl << a.size();
    return  0;
}

