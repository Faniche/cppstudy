#include <iostream>
#include "Stack/ArrStack.h"
#include "Stack/ListStack.h"
#include "tools/tools.h"

using namespace std;

/* Template class in C++ is not supported defining in different files.
 * Just define and implement in the same header file.
 * */

void testArrStack();

void testListStack();

int main() {
    testArrStack();
    testListStack();
    return 0;
}

void testArrStack(){
    splitLine("testArrStack");
    ArrStack<int> intArrStack;
    intArrStack.push(1);
    std::cout << intArrStack.pop() << endl;
    intArrStack.clear();
}

void testListStack(){
    splitLine("testListStack");
    ListStack<char> listStack;
    listStack.push('o');
    listStack.push('l');
    listStack.push('l');
    listStack.push('e');
    listStack.push('H');
    while (!listStack.isEmpty()) {
        std::cout << listStack.pop();
    }
    splitLine("");
    ListStack<char> dst;
    dst = listStack;
}