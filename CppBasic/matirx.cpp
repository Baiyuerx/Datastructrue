//
// Created by selwb on 18-5-24.
//
#include <iostream>
#include <vector>

template<typename Object>
class matrix {
public:
    matrix(int rows, int cols) : array(rows) {
        for (auto &thisRow : array)
            thisRow.resize(cols);
    }

private:
    std::vector<std::vector<Object>> array;
};

int main() {
    matrix<int> a(2,3);
//    std::cout << a.size() << std::endl;
    return 0;
}
