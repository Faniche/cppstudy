//
// Created by chiry on 23/2/2020.
//

#ifndef CPPTEST_CHARSTACK_H
#define CPPTEST_CHARSTACK_H


#include <vector>

class CharStack {
public:
    CharStack();

    virtual ~CharStack();

    int size();

    bool isEmpty();

    void clear();

    void push(char c);

    char pop();

    char peek();

private:
    /* Private constants */
    static const int INITIAL_CAPACITY = 10;

    /* Instance variables */
    std::vector<char> elements;
    char *array;
    int capacity;
    int count;

    /* Private function prototype */
//    void expandCapacity();

};


#endif //CPPTEST_CHARSTACK_H
