//
// Created by chiry on 23/2/2020.
//

#include <iostream>
#include "CharStackArr.h"

CharStackArr::CharStackArr() {
    capacity = INITIAL_CAPACITY;
    array = new char[capacity];
    count = 0;
}

CharStackArr::~CharStackArr() {
    delete[] array;
}

int CharStackArr::size() const {
    return count;
}

bool CharStackArr::isEmpty() const {
    return count == 0;
}

void CharStackArr::clear() {
    count = 0;
}

void CharStackArr::push(char c) {
    if (count == capacity) expandCapacity();
    array[count++] = c;
}

char CharStackArr::pop() {
    if (isEmpty()) {
        std::cerr << "pop: Attempting to pop an empty stack." << std::endl;
    }
    return array[--count];
}

char CharStackArr::peek() const {
    if (isEmpty()) {
        std::cerr << "peek: Attempting to peek an empty stack." << std::endl;
    }
    return array[count - 1];
}

void CharStackArr::expandCapacity() {
    char *oldArr = array;
    capacity *= 2;
    array = new char[capacity];
    for (int i = 0; i < count; ++i) {
        array[i] = oldArr[i];
    }
    delete oldArr;
}

CharStackArr::CharStackArr(const CharStackArr &src) {
    deepCopy(src);
}

CharStackArr &CharStackArr::operator=(const CharStackArr &src) {
    if (this != &src) {
        delete[] array;
        deepCopy(src);
    }
    return *this;
}

void CharStackArr::deepCopy(const CharStackArr &src) {
    array = new char[src.count];
    for (int i = 0; i < src.count; ++i) {
        array[i] = src.array[i];
    }
    count = src.count;
    capacity = src.capacity;
}
