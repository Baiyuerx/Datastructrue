//
// Created by lwb85 on 2018/5/30.
//
#include <iostream>
#include <vector>

using namespace std;

template <typename E, typename P>
void printLots(E &l,  P &p)
{
    for (const auto &i: p)
        cout << l.at(i - 1) << "   ";
    cout << endl;
};

int main()
{
    vector<int> l = {1,2,3,4,5,6,7,8,9};
    string a[] = {"a", "b"};
    printLots(l, a);
    return 0;
}
