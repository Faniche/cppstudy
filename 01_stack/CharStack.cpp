//
// Created by chiry on 23/2/2020.
//

#include <iostream>
#include "CharStack.h"

CharStack::CharStack() {}

CharStack::~CharStack() {

}

int CharStack::size() {
    return elements.size();
}

bool CharStack::isEmpty() {
    return elements.size() == 0;
}

void CharStack::clear() {
    elements.clear();
}

void CharStack::push(char c) {
    elements.push_back(c);
}

char CharStack::pop() {
    if (isEmpty()) {
        std::cerr << "pop: Attempting to pop an empty stack." << std::endl;
    }
    char result = elements[elements.size() - 1];
    elements.pop_back();
    return result;
}

char CharStack::peek() {
    if (isEmpty()) {
        std::cerr << "peek: Attempting to peek an empty stack." << std::endl;
    }
    return elements[elements.size() - 1];
}