//
// Created by lwb85 on 2018/5/30.
//
#include <iostream>
#include <sstream>

void foo(std::istream *s) {
    int n;
    while (!s->eof()) {
        *s >> n;
        if (!s->fail()) {
            std::cout << n << std::endl;
        }
    }
}

int main(void) {
    std::istringstream ss("1 2 3 4 5");
    foo(&ss);
    foo(&std::cin);
    return 0;
}

