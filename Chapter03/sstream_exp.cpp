//
// Created by lwb85 on 2018/5/30.
//
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string s("1 2 +");
    std::vector<std::string> v;
    std::istringstream ism(s);
    std::string substr;
    while (!ism.eof()){
        ism >> substr;
        v.push_back(substr);
    }
    for (auto i:v)
        std::cout << i << " ";
    std::cout << v.size() << std::endl;
    return 0;
}

