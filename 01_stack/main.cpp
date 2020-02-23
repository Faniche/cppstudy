#include <iostream>
#include "CharStack.h"
#include "CharStackArr.h"

struct test4 {
    test4() {}

    test4(int i, const char string[3]) {
        this->id = i;
        this->name = string;
    }

    /* auto call when function finished */
    ~test4() {}

    int id;
    std::string name;
};

void split(std::string method);

void test1();

void test2();

void test3();

void test4();

void test5();

void test6();

void test7();

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    return 0;
}

void split(std::string method) {
    std::cout << std::endl << "-----" << method << "-----" << std::endl;
}

void test1() {
    split("test1");
    int arr[10];
    int *pArr = arr;
    for (int i = 0; i < 10; ++i) {
        // same
//        *pArr++ = i;
        *(pArr++) = i;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
}

void test2() {
    split("test2");
    int *ip = new int;
    std::cout << ip << std::endl;
    std::cout << *ip << std::endl;
    int *np;
    std::cout << np << std::endl;
    std::cout << *np << std::endl;
}

void test3() {
    split("test3");
//    int intArr[10];
//    for (int i = 0; i < 10; ++i) {
//        std::cout << "intArr[" << i << "] = " << intArr[i] << std::endl;
//    }
//    int *pIntArr[10];
//    for (int i = 0; i < 10; ++i) {
//        std::cout << "pIntArr[" << i << "] = " << pIntArr[i] << std::endl;
//    }
    int intArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (int i = 0; i < 10; ++i) {
        std::cout << "intArr[" << i << "] = " << intArr[i] << std::endl;
    }
    // dynamic array
//    int *pIntArr = new int[10];   all elements default value is 0
    int *pIntArr = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (int i = 0; i < 10; ++i) {
        std::cout << "pIntArr[" << i << "] = " << pIntArr[i] << std::endl;
    }
}

void test4() {
    split("test4");

    struct ::test4 a;
    a.id = 1;
    a.name = "care";
    std::cout << a.id << ", " << a.name << std::endl;

    struct ::test4 *b = new struct::test4(1, "qe");
    (*b).id = 1;
    (*b).name = "care";
    std::cout << (*b).id << ", " << (*b).name << std::endl;
    std::cout << "size of *b = " << sizeof(*b) << std::endl;
    delete b;
    std::cout << "deleting b ......" << std::endl;
    std::cout << "size of *b = " << sizeof(*b) << std::endl;
}

void test5() {
    split("test5");
    std::cout << "char stack implemented by vector" << std::endl;
    CharStack *charStack = new CharStack();
    charStack->push('o');
    charStack->push('l');
    charStack->push('l');
    charStack->push('e');
    charStack->push('h');
    while (!charStack->isEmpty()) {
        std::cout << charStack->pop();
    }
}

void test6() {
    split("test6");
    std::cout << "char stack implemented by dynamic array." << std::endl;
    CharStackArr *charStack = new CharStackArr();
    charStack->push('d');
    charStack->push('l');
    charStack->push('r');
    charStack->push('o');
    charStack->push('w');

    charStack->push(',');

    charStack->push('o');
    charStack->push('l');
    charStack->push('l');
    charStack->push('e');
    charStack->push('h');
    while (!charStack->isEmpty()) {
        std::cout << charStack->pop();
    }
    std::cout << std::endl;
    // pop error
//    charStack->pop();
//    charStack->pop();
//    std::cout << std::endl << "capacity = " << charStack->capacity << std::endl;
    std::cout << "size(or length) = " << charStack->size() << std::endl;
}

void test7() {
    split("test7");
    std::cout << "copy constructor." << std::endl;
    CharStackArr *src = new CharStackArr();
    src->push('o');
    src->push('l');
    src->push('l');
    src->push('e');
    src->push('h');

    CharStackArr *cp1 = new CharStackArr();
    *cp1 = *src;

    CharStackArr *cp2 = new CharStackArr(*src);

    std::cout << "src addr = " << &src->array << std::endl;     // 0x560bdf8603 8 8
    std::cout << "cp1 addr = " << &cp1->array << std::endl;     // 0x560bdf8603 e 8
    std::cout << "cp2 addr = " << &cp2->array << std::endl;     // 0x560bdf8604 2 8

}