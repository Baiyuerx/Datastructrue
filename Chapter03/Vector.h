//
// Created by selwb on 18-5-24.
//

#ifndef BASICDATASTRUCTURES_VECTOR_H
#define BASICDATASTRUCTURES_VECTOR_H

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include "dsexceptions.h"

template<typename Object>
class Vector {
public:
    explicit Vector(int initSize = 0) : theSize{initSize}, theCapacity{initSize + SPARE_CAPACITY} {
        objects = new Object[theCapacity];
    }

    Vector(const Vector &rhs) : theSize{rhs.theSize}, theCapacity{rhs.theCapacity},
                                objects{nullptr}  //类模板内部使用模板，模板本身参数默认在使用模板身上
    {
        objects = new Object[theCapacity];
        for (int i = 0; i < theSize; ++i)
            objects[i] = rhs.objects[i];
    }

    Vector(Vector &&rhs) : theSize{rhs.theSize}, theCapacity{rhs.theCapacity}, objects{rhs.objects} {
        rhs.objects = nullptr;
        rhs.theSize = 0;
        rhs.theCapacity = 0;
    }

    Vector &operator=(const Vector &rhs) {
        Vector copy = rhs;
        std::swap(*this, rhs);
        return *this;
    }

    Vector &operator=(Vector &&rhs) {
        std::swap(theSize, rhs.theSize);
        std::swap(theCapacity, rhs.theCapacity);
        std::swap(objects, rhs.objects);
        return *this;
    }

    ~Vector() {
        delete[] objects;
    }

    bool empty() const {
        return theSize == 0;
    }

    int size() const {
        return theSize;
    }

    int capacity() const {
        return theCapacity;
    }

    Object &operator[](int index) {
        if (index < 0 || index >= size())
            throw ArrayIndexOutOfBoundsException{};
        return objects[index];
    }

    const Object &operator[](int index) const {
        if (index < 0 || index >= size())
            throw ArrayIndexOutOfBoundsException{};
        return objects[index];
    }

    void resize(int newSize) {
        if (newSize > theCapacity)
            reserve(newSize * 2);
        theSize = newSize;
    }

    void reserve(int newCapacity) {
        if (newCapacity < theCapacity)
            return;
        Object *newArray = new Object[newCapacity];
        for (int i = 0; i < theSize; ++i)
            newArray[i] = std::move(objects[i]);

        theCapacity = newCapacity;
        std::swap(objects, newArray);
        delete (newArray);
    }

    void push_back(const Object &rhs) {
        if (theSize == theCapacity)
            reserve(theCapacity * 2 + 1);
        objects[theSize++] = rhs;
    }

    void push_back(Object &&rhs) {
        if (theSize == theCapacity)
            reserve(theCapacity * 2 + 1);
        objects[theSize++] = std::move(rhs);
    }

    void pop_back() {
        if (empty())
            throw UnderflowException{};
        --theSize;
    }

    const Object &back() {
        if (empty())
            throw UnderflowException{};
        return objects[theSize - 1];
    }

    typedef Object *iterator;
    typedef const Object *const_iterator;

    iterator begin() {
        return &objects[0];
    }

    const_iterator begin() const {
        return &objects[0];
    }

    iterator end() { return &objects[size()]; }

    const_iterator end() const { return &objects[size()]; }


    static const int SPARE_CAPACITY = 2;
private:
    int theSize;
    int theCapacity;
    Object *objects;
};

#endif //BASICDATASTRUCTURES_VECTOR_H
