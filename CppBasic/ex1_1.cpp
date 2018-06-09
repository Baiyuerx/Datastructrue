//
// Created by selwb on 18-5-24.
//
#include <iostream>
#include "ex1_1.h"

int main()
{
   std::vector<int> a = {1,2,3,4};
   std::vector<int> r = findK(a, 2);
   for(auto i : r)
      std::cout<<i;
   return 0;
}
