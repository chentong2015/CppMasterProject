#include "Node.h"
#include <iostream>

class BinarySearchTree {

public:
	// 通过指针来遍历Tree中的所有元素
	static bool contains(Node& root, int value){
		Node *p = &root;
		if (root.getValue() == value) {
            std::cout << "find value";
			return true;
		} else {
			while (p != nullptr) {
				if (p->getValue() == value) {
                    std::cout << "find value";
					return true;
				} else if (p->getValue() > value) {
					p = p->getLeft();
				}else{
					p = p->getRight();
				}				
			}
		}
		return false;
	}

    // TODO. 由于不能判断node为null, node遍历会使得算法极其复杂
    static bool contains2(Node& root, int value){
        Node node = root;
        if (root.getValue() == value) {
            std::cout << "find value 2";
            return true;
        } else {
            while (node.getLeft() != nullptr && node.getRight() != nullptr) {
                if (node.getValue() == value) {
                    std::cout << "find value 2";
                    return true;
                }

                if (node.getLeft() == nullptr) {
                    if (node.getValue() < value) {
                        node = *node.getRight();
                    } else {
                        return false;
                    }
                }  else if (node.getRight() == nullptr) {
                    if (node.getValue() > value) {
                        node = *node.getLeft();
                    } else {
                        return false;
                    }
                } else {
                    if (node.getValue() < value) {
                        node = *node.getRight();
                    } else {
                        node = *node.getLeft();
                    }
                }
            }

            // while循环结束后还需要再判断
            bool case1 = node.getValue() == value;
            bool case2 = node.getLeft() != nullptr && node.getLeft()->getValue() == value;
            bool case3 = node.getRight() != nullptr && node.getRight()->getValue() == value;
            if (case1 || case2 || case3) {
                std::cout << "find value 2";
                return true;
            }
        }
        return false;
    }
};