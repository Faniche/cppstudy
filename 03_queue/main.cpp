#include <iostream>
#include "tools/tools.h"
#include "queue/ArrQueue.h"
#include "queue/ListQueue.h"

void testArrQueue();

void testListQueue();

int main() {
//    testArrQueue();
    testListQueue();
    return 0;
}

void testArrQueue() {
    splitLine("testArrQueue");
    ArrQueue<char> charQueue;
    charQueue.enqueue('H');
    charQueue.enqueue('e');
    charQueue.enqueue('l');
    charQueue.enqueue('l');
    charQueue.enqueue('o');

    /* deep copy, reload '='
     * the array of two arrqueue has different address.
     * */
    ArrQueue<char> cpDes1 = charQueue;

    /* deep copy, use copy constructor */
    ArrQueue<char> cpDes2 = ArrQueue(charQueue);

    /* dequeue */
    std::cout << "dequeue src." << std::endl;
    while (!charQueue.isEmpty()) {
        std::cout << charQueue.dequeue();
    }

    std::cout << std::endl << "dequeue cpDes1." << std::endl;
    while (!cpDes1.isEmpty()) {
        std::cout << cpDes1.dequeue();
    }

    std::cout << std::endl << "dequeue cpDes2." << std::endl;
    while (!cpDes2.isEmpty()) {
        std::cout << cpDes2.dequeue();
    }
    std::cout << std::endl;
}

void testListQueue() {
    splitLine("testListQueue");
    ListQueue<char> charQueue;
    charQueue.enqueue('H');
    charQueue.enqueue('e');
    charQueue.enqueue('l');
    charQueue.enqueue('l');
    charQueue.enqueue('o');

    /* deep copy, reload '='
     * the array of two arrqueue has different address.
     * */
    ListQueue<char> cpDes1 = charQueue;

    /* deep copy, use copy constructor */
    ListQueue<char> cpDes2 = ListQueue(charQueue);

    /* dequeue */
    std::cout << "dequeue src." << std::endl;
    while (!charQueue.isEmpty()) {
        std::cout << charQueue.dequeue();
    }

    std::cout << std::endl << "dequeue cpDes1." << std::endl;
    while (!cpDes1.isEmpty()) {
        std::cout << cpDes1.dequeue();
    }

    std::cout << std::endl << "dequeue cpDes2." << std::endl;
    while (!cpDes2.isEmpty()) {
        std::cout << cpDes2.dequeue();
    }
    std::cout << std::endl;
}
