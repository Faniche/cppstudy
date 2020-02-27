#include <iostream>
#include "tools/tools.h"
#include "ArrVector.h"

int main() {
    ArrVector<char> v1;
    ArrVector<char> v2(10, 'a');
    for (int i = 0; i < v1.size(); ++i) {
        std::cout << v1[i] << ", ";
    }
    std::cout << std::endl;
    for (int i = 0; i < v2.size(); ++i) {
        std::cout << v2[i] << ", ";
    }
    splitLine("");


    v1.add('H');
    v1.add('e');
    v1.add('l');
    v1.add('l');
    v1.add('o');
    for (int i = 0; i < v1.size(); ++i) {
        std::cout << v1[i];
    }
    std::cout << std::endl << "v1 size = " << v1.size() << std::endl;
    std::cout << "v1.get(0) = " << v1.get(0) << std::endl;
//    std::cout << "v1[0] = " << v1.remove() << std::endl;
    splitLine("");
    v1.remove(2);
    std::cout << "v1.remove(2) : ";
    for (int i = 0; i < v1.size(); ++i) {
        std::cout << v1[i];
    }
    std::cout << std::endl;

    std::cout << "v1.insert(2) : ";
    v1.insert(2, 'L');
    for (int i = 0; i < v1.size(); ++i) {
        std::cout << v1[i];
    }
    std::cout << std::endl;
    return 0;
}
