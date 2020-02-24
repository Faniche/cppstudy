//
// Created by chiry on 24/2/2020.
//

#ifndef INC_02_TEMPLATE_LISTSTACK_H
#define INC_02_TEMPLATE_LISTSTACK_H

#include <iostream>

template<typename ValueType>
class ListStack {
public:
    ListStack();

    virtual ~ListStack();

    int size() const;

    bool isEmpty() const;

    void clear();

    void push(ValueType value);

    ValueType pop();

    ValueType peek() const;

    ListStack(const ListStack<ValueType> &src);

    ListStack<ValueType> &operator=(const ListStack<ValueType> &src);

/* private section */
private:
    /* Type for linked list cell */
    struct Cell {
        ValueType data;
        Cell *link;
    };

    /* Instance variables */
    Cell *list;
    int count;

    /* private method prototypes */
    void deepCopy(const ListStack<ValueType> &src);
};

template<typename ValueType>
ListStack<ValueType>::ListStack() {
    list = nullptr;
    count = 0;
}

template<typename ValueType>
ListStack<ValueType>::~ListStack() {
    clear();
}

template<typename ValueType>
int ListStack<ValueType>::size() const {
    return count;
}

template<typename ValueType>
bool ListStack<ValueType>::isEmpty() const {
    return count == 0;
}

template<typename ValueType>
void ListStack<ValueType>::clear() {
    while (count > 0) {
        pop();
    }
}

template<typename ValueType>
void ListStack<ValueType>::push(ValueType value) {
    Cell *cell = new Cell;
    cell->data = value;
    cell->link = list;
    list = cell;
    count++;
}

template<typename ValueType>
ValueType ListStack<ValueType>::pop() {
    if (count == 0) {
        std::cerr << "Pop: Attempting to pop an empty stack. " << std::endl;
    }
    Cell *cell = list;
    ValueType result = cell->data;
    list = list->link;
    count--;
    delete cell;
    return result;
}

template<typename ValueType>
ValueType ListStack<ValueType>::peek() const {
    if (count == 0) {
        std::cerr << "Peek: Attempting to peek an empty stack. " << std::endl;
    }
    return list->data;
}

template<typename ValueType>
ListStack<ValueType>::ListStack(const ListStack<ValueType> &src) {
    deepCopy(src);
}

template<typename ValueType>
ListStack<ValueType> &ListStack<ValueType>::operator=(const ListStack<ValueType> &src) {
    if (this != &src) {
        clear();
        deepCopy(src);
    }
    return *this;
}

/* Implement has nothing to do with stack, just linked list */
template<typename ValueType>
void ListStack<ValueType>::deepCopy(const ListStack<ValueType> &src) {
    count = src.count;
    Cell *tail = nullptr;
    for (Cell *cell = src.list; cell != nullptr; cell = cell->link) {
        Cell *corsor = new Cell;
        corsor->data = cell->data;
        if (tail == nullptr) {
            // initialize 'this.list', refer to head element of 'src.list'
            list = corsor;
        } else {
            // make tail element point to current element.
            tail->link = corsor;
        }
        // tail move to the next to current cursor, new tail element.
        tail = corsor;
    }
    if (tail != nullptr) {
        tail->link = nullptr;
    }
}

#endif //INC_02_TEMPLATE_LISTSTACK_H