//
// Created by selwb on 18-5-23.
//
#include <iostream>
#include <vector>
#include <string>

void swap(std::vector<std::string>&, std::vector<std::string>&);

int main() {
    std::vector<std::string> x{"hello"};
    std::vector<std::string> y{"world"};
    swap(x, y);
    std::cout << x[0] << y[0] << std::endl;
    return 0;
}

void swap(std::vector<std::string>& x, std::vector<std::string>& y)
{
    std::vector<std::string> tmp;
    tmp = std::move(x);
    x = std::move(y);
    y = std::move(tmp);
}
