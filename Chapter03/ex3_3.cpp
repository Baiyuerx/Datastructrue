//
// Created by lwb85 on 2018/5/30.
//
#include <iostream>
#include "List.h"

//using namespace std;

template <typename Iterator, typename Object>
Iterator find(Iterator start, Iterator end, const Object &x)
{
    while(start != end)
    {
        if(*start != x)
            ++start;
        else
            return start;
    }
    return end;
};

int main()
{
    List<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    List<int>::iterator a;
    a = find(l.begin(), l.end(), 4);
std::cout << *a << std::endl;
    return 0;
}

