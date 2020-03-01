//
// Created by chiry on 27/2/2020.
//

#ifndef INC_07_TREE_BST_H
#define INC_07_TREE_BST_H

#include <string>

struct BSTNode {
    std::string key;
    BSTNode *left, *right;
};

void insertNode(BSTNode *&t, const std::string &key) {
    if (t == nullptr) {
        t = new BSTNode;
        t->key = key;
        t->left = t->right = nullptr;
    } else {
        if (key != t->key) {
            if (key < t->key) {
                insertNode(t->left, key);
            } else {
                insertNode(t->right, key);
            }
        }
    }
}

BSTNode *findNode(BSTNode *t, const std::string &key) {
    if (t == nullptr) return nullptr;
    if (key == t->key) return t;
    if (key < t->key) {
        return findNode(t->left, key);
    } else {
        return findNode(t->right, key);
    }
}

BSTNode *findParentNode(BSTNode *t, const std::string &key) {
    if (t->key == key)return nullptr;
    if (key == t->left->key || key == t->right->key) return t;
    if (key < t->key) {
        return findParentNode(t->left, key);
    } else {
        return findParentNode(t->right, key);
    }
}

void deleteNode(BSTNode *&t, const std::string &key) {
    /* 找到要删除的节点 */
    BSTNode *dest = findNode(t, key);
    /*  */
    /* 如果是要删除的是叶子节点 */
    if (dest->left == nullptr && dest->right == nullptr) {
        /* 找到要删除节点的父节点 */
        BSTNode *prntNode = findParentNode(t, dest->key);
        /* 将父节点的左孩子或右孩子设为空 */
        if (prntNode->left == dest) {
            prntNode->left = nullptr;
        } else {
            prntNode->right = nullptr;
        }
        /* 删除 */
        delete dest;
    } else {
        BSTNode *tmp = dest;
        /* find rightest node of left subtree*/
        if (tmp->left != nullptr) {
            tmp = tmp->left;
            while (tmp->right) {
                tmp = tmp->right;
            }
            BSTNode *prntNode = findParentNode(t, tmp->key);
            prntNode->right = nullptr;
        } else if (tmp->left != nullptr) {
            /* find leftest node of right subtree*/
            tmp = tmp->right;
            while (tmp->left) {
                tmp = tmp->left;
            }
            BSTNode *prntNode = findParentNode(t, tmp->key);
            prntNode->left = nullptr;
        }
        dest->key = tmp->key;
        delete tmp;
    }
}

void preOrderTraversal(BSTNode *t) {
    if (t != nullptr){
        std::cout << t->key << std::endl;
        preOrderTraversal(t->left);
        preOrderTraversal(t->right);
    }
}

void midOrderTraversal(const BSTNode *t) {
    if (t != nullptr){
        midOrderTraversal(t->left);
        std::cout << t->key << std::endl;
        midOrderTraversal(t->right);
    }
}

void postOrderTraversal(BSTNode *t) {
    if (t != nullptr){
        postOrderTraversal(t->left);
        postOrderTraversal(t->right);
        std::cout << t->key << std::endl;
    }
}


#endif //INC_07_TREE_BST_H
