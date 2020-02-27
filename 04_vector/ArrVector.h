//
// Created by chiry on 25/2/2020.
//

#ifndef INC_04_VECTOR_ARRVECTOR_H
#define INC_04_VECTOR_ARRVECTOR_H

#include <iostream>

template<typename ValueType>
class ArrVector {
public:
    ArrVector();

    ArrVector(int n, ValueType value = ValueType());

    virtual ~ArrVector();

    int size() const;

    bool isEmpty() const;

    void clear();

    ValueType get(int index);

    void set(int index, ValueType valueType);

    void insert(int index, ValueType value);

    void remove(int index);

    void add(ValueType value);

    ValueType &operator[](int index);

    ArrVector(const ArrVector<ValueType> &src);

    ArrVector<ValueType> &operator=(const ArrVector<ValueType> &src);

/* Private section */
private:
    static const int INITIAL_CAPACITY = 10;

    /* Instance variables */
    ValueType *array;
    int capacity;
    int count;

    /* Private method prototypes */
    void deepCopy(const ArrVector<ValueType> &src);

    void expandCapacity();
};

template<typename ValueType>
ArrVector<ValueType>::ArrVector() {
    capacity = INITIAL_CAPACITY;
    count = 0;
    array = new ValueType[capacity];
}

template<typename ValueType>
ArrVector<ValueType>::ArrVector(int n, ValueType value) {
    capacity = (n > INITIAL_CAPACITY) ? n : INITIAL_CAPACITY;
    array = new ValueType[capacity];
    count = n;
    for (int i = 0; i < n; ++i) {
        array[i] = value;
    }
}

template<typename ValueType>
ArrVector<ValueType>::~ArrVector() {
    delete[] array;
}

template<typename ValueType>
int ArrVector<ValueType>::size() const {
    return count;
}

template<typename ValueType>
bool ArrVector<ValueType>::isEmpty() const {
    return count == 0;
}

template<typename ValueType>
void ArrVector<ValueType>::clear() {
    count = 0;
}

template<typename ValueType>
ValueType ArrVector<ValueType>::get(int index) {
    if (index < 0 || index >= count) std::cerr << "get: index out of range." << std::endl;
    return array[index];
}

template<typename ValueType>
void ArrVector<ValueType>::set(int index, ValueType value) {
    if (index < 0 || index > count) std::cerr << "set: index out of range." << std::endl;
    array[index] = value;
}

template<typename ValueType>
ValueType &ArrVector<ValueType>::operator[](int index) {
    if (index < 0 || index > count) std::cerr << "Vector index out of range." << std::endl;
    return array[index];
}

template<typename ValueType>
void ArrVector<ValueType>::add(ValueType value) {
    insert(count, value);
}

template<typename ValueType>
void ArrVector<ValueType>::insert(int index, ValueType value) {
    if (count == capacity) expandCapacity();
    if (index < 0 || index > count) std::cerr << "insert: index out of range." << std::endl;
    for (int i = count; i > index; i--) {
        array[i] = array[i - 1];
    }
    array[index] = value;
    count++;
}

template<typename ValueType>
void ArrVector<ValueType>::remove(int index) {
    if (index < 0 || index > count) std::cerr << "remove: index out of range." << std::endl;
    for (int i = index; i < count - 1; i++) {
        array[i] = array[i + 1];
    }
    count--;
}

template<typename ValueType>
ArrVector<ValueType>::ArrVector(const ArrVector<ValueType> &src) {
    deepCopy(src);
}

template<typename ValueType>
ArrVector<ValueType> &ArrVector<ValueType>::operator=(const ArrVector<ValueType> &src) {
    if (this != &src) {
        delete[]array;
        deepCopy(src);
    }
    return *this;
}

template<typename ValueType>
void ArrVector<ValueType>::deepCopy(const ArrVector<ValueType> &src) {
    capacity = src.count + INITIAL_CAPACITY;
    this->array = new ValueType[capacity];
    for (int i = 0; i < src.count; ++i) {
        array[i] = src.array[i];
    }
    count = src.count;
}

template<typename ValueType>
void ArrVector<ValueType>::expandCapacity() {
    ValueType *oldArray = array;
    capacity *= 2;
    array = new ValueType[capacity];
    for (int i = 0; i < count; ++i) {
        array[i] = oldArray[i];
    }
    delete[] oldArray;
}


#endif //INC_04_VECTOR_ARRVECTOR_H
