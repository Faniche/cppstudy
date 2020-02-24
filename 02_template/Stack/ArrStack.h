//
// Created by chiry on 24/2/2020.
//

#ifndef INC_02_TEMPLATE_ARRSTACK_H
#define INC_02_TEMPLATE_ARRSTACK_H

template<typename ValueType>
class ArrStack {
public:
    ArrStack();

    virtual ~ArrStack();

    int size() const;

    bool isEmpty() const;

    void clear();

    void push(ValueType value);

    ValueType pop();

    ValueType peek() const;

    ArrStack(const ArrStack<ValueType> &src);

    ArrStack<ValueType> &operator=(const ArrStack<ValueType> &src);

private:
    static const int INITIAL_CAPACITY = 10;
    /* Instance variables */
    ValueType *array;
    int capacity;
    int count;

    /* private method prototypes */
    void deepCopy(const ArrStack<ValueType> &src);

    void expandCapacity();
};

/* implements */

template<typename ValueType>
ArrStack<ValueType>::ArrStack() {
    capacity = INITIAL_CAPACITY;
    array = new ValueType[capacity];
    count = 0;
}

template<typename ValueType>
ArrStack<ValueType>::~ArrStack() {
    delete[] array;
}

template<typename ValueType>
int ArrStack<ValueType>::size() const {
    return count;
}

template<typename ValueType>
bool ArrStack<ValueType>::isEmpty() const {
    return count == 0;
}

template<typename ValueType>
void ArrStack<ValueType>::clear() {
    count = 0;
}

template<typename ValueType>
void ArrStack<ValueType>::push(ValueType value) {
    if (count == capacity) {
        expandCapacity();
    }
    array[count++] = value;
}

template<typename ValueType>
ValueType ArrStack<ValueType>::pop() {
    if (count == 0) {
        std::cerr << "Pop: Attempting to pop an empty stack. " << std::endl;
    }
    return array[--count];
}

template<typename ValueType>
ValueType ArrStack<ValueType>::peek() const {
    if (count == 0) {
        std::cerr << "Peek: Attempting to peek an empty stack. " << std::endl;
    }
    return array[count - 1];
}

template<typename ValueType>
ArrStack<ValueType>::ArrStack(const ArrStack<ValueType> &src) {
    deepCopy(src);
}

template<typename ValueType>
ArrStack<ValueType> &ArrStack<ValueType>::operator=(const ArrStack<ValueType> &src) {
    if (this != &src) {
        delete[] array;
        deepCopy(src);
    }
    return this;
}

template<typename ValueType>
void ArrStack<ValueType>::deepCopy(const ArrStack<ValueType> &src) {
    capacity = src.count + INITIAL_CAPACITY;
    this->array = new ValueType[capacity];
    for (int i = 0; i < src.count; ++i) {
        array[i] = src.array[i];
    }
    count = src.count;
}

template<typename ValueType>
void ArrStack<ValueType>::expandCapacity() {
    ValueType *oldArray = array;
    capacity *= 2;
    array = new ValueType[capacity];
    for (int i = 0; i < count; ++i) {
        array[i] = oldArray[i];
    }
    delete[] oldArray;
}

#endif //INC_02_TEMPLATE_ARRSTACK_H