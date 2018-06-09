//
// Created by selwb on 18-5-24.
//

#include <iostream>

int ones(unsigned int n) {
    int count = 0;
    while (n)
    {
//        n = n & (n - 1); 位运算对符号是没定义的，这条语句会有警告，用带符号数位运算。
        ++count;
        n = (n - 1) & n;
    }
    return count;
}

int main() {
    std::cout << ones(10) << std::endl;
    return 0;
}
