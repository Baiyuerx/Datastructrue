//
// Created by selwb on 18-5-23.
//
#include <iostream>
#include <algorithm>

class IntCell {
public:
    explicit IntCell(int initialValue = 0) {
        std::cout<<"In constructor\n";
        storedValue = new int{initialValue};
    }

    ~IntCell() {
        std::cout<<"In destructor\n";
        delete (storedValue);
    }

    IntCell(const IntCell &rhs) {
        std::cout<<"In copy constructor\n";
        storedValue = new int{*rhs.storedValue};
    }

    IntCell(IntCell &&rhs) : storedValue{rhs.storedValue} {
        std::cout<<"In move constructor\n";
        rhs.storedValue = nullptr;
    }

    IntCell &operator=(IntCell &&rhs) {
        std::cout << "In move assigned\n";
        std::swap(storedValue, rhs.storedValue);
        return *this;
    }

    IntCell &operator=(const IntCell &rhs) {
        std::cout<<"In copy assigned\n";
        IntCell copy = rhs;
        std::swap(*this, copy);
        return *this;
    }

    int read() const {
        return *storedValue;
    }

    void write(int x) {
        *storedValue = x;
    }

private:
    int *storedValue;
};

int main()
{
    IntCell a;
    IntCell b;
    b = a;
//    IntCell();
    return  0;
}