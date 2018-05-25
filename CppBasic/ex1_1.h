//
// Created by selwb on 18-5-24.
//解决选择问题，确定N个数中的最大K个。
//

#ifndef BASICDATASTRUCTURES_EX1_1_H
#define BASICDATASTRUCTURES_EX1_1_H

#include <vector>
#include <algorithm>

template <typename T>
const std::vector<T> findK(const std::vector<T> &input, int K)
{
    std::vector<T> tmp(input);
    std::sort(tmp.begin(), tmp.end(), [](const T &a, const T &b){return a > b;});
    return std::vector<T>(tmp.begin(), tmp.begin()+K);

}

#endif //BASICDATASTRUCTURES_EX1_1_H
