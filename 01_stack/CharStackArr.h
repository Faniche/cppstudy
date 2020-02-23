//
// Created by chiry on 23/2/2020.
//

#ifndef CPPTEST_CHARSTACKARR_H
#define CPPTEST_CHARSTACKARR_H

class CharStackArr {
public:
    char *array;

    CharStackArr();

    CharStackArr(const CharStackArr &src);

    virtual ~CharStackArr();

    int size() const;

    bool isEmpty() const;

    void clear();

    void push(char c);

    char pop();

    char peek() const;

    CharStackArr &operator=(const CharStackArr &src);

private:
    /* Private constants */
    static const int INITIAL_CAPACITY = 10;

    /* Instance variables */
    int capacity;
    int count;

    /* Private function prototype */
    void expandCapacity();

    void deepCopy(const CharStackArr &src);
};


#endif //CPPTEST_CHARSTACKARR_H
