//
// Created by chiry on 25/2/2020.
//

#ifndef INC_03_QUEUE_LISTQUEUE_H
#define INC_03_QUEUE_LISTQUEUE_H


#include <iostream>

template<typename ValueType>
class ListQueue {
public:
    ListQueue();

    virtual ~ListQueue();

    int size() const;

    bool isEmpty() const;

    void clear();

    void enqueue(ValueType value);

    ValueType dequeue();

    ValueType peek() const;

    ListQueue(const ListQueue<ValueType> &src);

    ListQueue<ValueType> &operator=(const ListQueue<ValueType> &src);

/* Private section */
private:
    struct Cell {
        ValueType data;
        Cell *link;
    };

    /* Instance variables */
    Cell *head;
    Cell *tail;
    int count;

    /* Private method prototypes */
    void deepCopy(const ListQueue<ValueType> &src);
};

template<typename ValueType>
ListQueue<ValueType>::ListQueue() {
    head = tail = nullptr;
    count = 0;
}

template<typename ValueType>
ListQueue<ValueType>::~ListQueue() {
    clear();
}

template<typename ValueType>
int ListQueue<ValueType>::size() const {
    return count;
}

template<typename ValueType>
bool ListQueue<ValueType>::isEmpty() const {
    return count == 0;
}

template<typename ValueType>
void ListQueue<ValueType>::clear() {
    while (count > 0) {
        dequeue();
    }
}

template<typename ValueType>
void ListQueue<ValueType>::enqueue(ValueType value) {
    Cell *cell = new Cell;
    cell->data = value;
    cell->link = nullptr;
    if (head == nullptr) {
        head = cell;
    } else {
        tail->link = cell;
    }
    tail = cell;
    count++;
}

template<typename ValueType>
ValueType ListQueue<ValueType>::dequeue() {
    if (isEmpty()) {
        std::cerr << "dequeue: Attempting to dequeue an empty queue. " << std::endl;
    }
    Cell *cell = head;
    ValueType result = head->data;
    head = cell->link;
    if (head == nullptr) tail = nullptr;
    delete cell;
    count--;
    return result;
}

template<typename ValueType>
ValueType ListQueue<ValueType>::peek() const {
    if (isEmpty()) {
        std::cerr << "peek: Attempting to peek an empty queue. " << std::endl;
    }
    return head->data;
}

template<typename ValueType>
ListQueue<ValueType>::ListQueue(const ListQueue<ValueType> &src) {
    deepCopy(src);
}

template<typename ValueType>
ListQueue<ValueType> &ListQueue<ValueType>::operator=(const ListQueue<ValueType> &src) {
    if (this != &src) {
        clear();
        deepCopy(src);
    }
    return *this;
}

template<typename ValueType>
void ListQueue<ValueType>::deepCopy(const ListQueue<ValueType> &src) {
    head = nullptr;
    tail = nullptr;
    count = 0;
    for (Cell *cursor = src.head; cursor != nullptr; cursor = cursor->link) {
        enqueue(cursor->data);
    }
}

#endif //INC_03_QUEUE_LISTQUEUE_H