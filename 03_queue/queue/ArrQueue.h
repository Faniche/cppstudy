//
// Created by chiry on 25/2/2020.
//

#ifndef INC_03_QUEUE_ARRQUEUE_H
#define INC_03_QUEUE_ARRQUEUE_H

#include <iostream>

template<typename ValueType>
class ArrQueue {
public:
    ArrQueue();

    virtual ~ArrQueue();

    int size() const;

    bool isEmpty() const;

    void clear();

    void enqueue(ValueType value);

    ValueType dequeue();

    ValueType peek() const;

    ArrQueue(const ArrQueue<ValueType> &src);

    ArrQueue<ValueType> &operator=(const ArrQueue<ValueType> &src);

/* Private section */
private:
    static const int INITIAL_CAPACITY = 10;
    /* Instance variables */
    ValueType *array;
    int capacity;
    int head;
    int tail;

    /* Private method prototypes */
    void deepCopy(const ArrQueue<ValueType> &src);

    void expandCapacity();
};

template<typename ValueType>
ArrQueue<ValueType>::ArrQueue() {
    capacity = INITIAL_CAPACITY;
    array = new ValueType[capacity];
    head = 0;
    tail = 0;
}

template<typename ValueType>
ArrQueue<ValueType>::~ArrQueue() {
    delete[] array;
}

template<typename ValueType>
int ArrQueue<ValueType>::size() const {
    return (tail + capacity - head) % capacity;
}

template<typename ValueType>
bool ArrQueue<ValueType>::isEmpty() const {
    return head == tail;
}

template<typename ValueType>
void ArrQueue<ValueType>::clear() {
    head = tail = 0;
}

template<typename ValueType>
void ArrQueue<ValueType>::enqueue(ValueType value) {
    if (size() == capacity - 1) {
        expandCapacity();
    }
    array[tail] = value;
    tail = (tail + 1) % capacity;
}

template<typename ValueType>
ValueType ArrQueue<ValueType>::dequeue() {
    if (isEmpty()) {
        std::cerr << "dequeue: Attempting to dequeue an empty queue. " << std::endl;
    }
    ValueType result = array[head];
    head = (head + 1) % capacity;
    return result;
}

template<typename ValueType>
ValueType ArrQueue<ValueType>::peek() const {
    if (isEmpty()) {
        std::cerr << "peek: Attempting to peek an empty queue. " << std::endl;
    }
    return array[head];
}

template<typename ValueType>
ArrQueue<ValueType>::ArrQueue(const ArrQueue<ValueType> &src) {
    deepCopy(src);
}

template<typename ValueType>
ArrQueue<ValueType> &ArrQueue<ValueType>::operator=(const ArrQueue<ValueType> &src) {
    if (this != &src) {
        delete[] array;
        deepCopy(src);
    }
    return *this;
}

template<typename ValueType>
void ArrQueue<ValueType>::deepCopy(const ArrQueue<ValueType> &src) {
    int count = src.size();
    capacity = count + INITIAL_CAPACITY;
    array = new ValueType[capacity];
    for (int i = 0; i < count; ++i) {
        /* copy from head to tail. */
        array[i] = src.array[(src.head + i) % src.capacity];
    }
    head = 0;
    tail = count;
}

template<typename ValueType>
void ArrQueue<ValueType>::expandCapacity() {
    int count = size();
    ValueType *oldArray = array;
    array = new ValueType[2 * INITIAL_CAPACITY];
    for (int i = 0; i < count; ++i) {
        /* copy from head to tail. */
        array[i] = oldArray[(head + i) % capacity];
    }
    capacity *= 2;
    head = 0;
    tail = count;
    delete[] oldArray;
}

#endif //INC_03_QUEUE_ARRQUEUE_H
