
#include "BinarySearchTree.h"

int main() {
    Node node1(5, nullptr, nullptr);
    Node node2(20, nullptr, nullptr);
    Node root(10, &node1, &node2);
    BinarySearchTree::contains(root, 20);
    BinarySearchTree::contains2(root, 20);

    return 0;
}
