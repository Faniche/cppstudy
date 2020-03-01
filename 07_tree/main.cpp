#include <iostream>
#include "tree/bst.h"
#include <grp.h>

void bstTest();

int main() {
    bstTest();
    return 0;
}

void bstTest() {
    BSTNode *family = nullptr;
    insertNode(family, "Grumpy");
    insertNode(family, "Doc");
    insertNode(family, "Bashful");
    insertNode(family, "Dopey");
    insertNode(family, "Sleepy");
    insertNode(family, "Happy");
    insertNode(family, "Sneezy");

    BSTNode *result = findNode(family, "Dopey");
//    std::cout << result << std::endl;
//    deleteNode(family, "Dopey");
//    result = findNode(family, "Dopey");
//    std::cout << result << std::endl;

//    result = findNode(family, "Grumpy");
//    std::cout << result << std::endl;
//    deleteNode(family, "Grumpy");
//    result = findNode(family, "Grumpy");
//    std::cout << result << std::endl;
    preOrderTraversal(family);
    std::cout << std::endl;
    postOrderTraversal(family);
    std::cout << std::endl;
    midOrderTraversal(family);
}
