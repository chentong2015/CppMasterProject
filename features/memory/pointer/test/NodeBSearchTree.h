#include "Node.h"

class BinarySearchTree {

public:
	// 通过指针来遍历Tree中的所有元素
	static bool contains(Node& root, int value){
		Node *p = &root;
		if (root.getValue() == value) {
			return true;
		} else {
			while (p != nullptr) {
				if (p->getValue() == value) {
					return true;
				} else if (p->getValue() > value) {
					p = p->getLeft();
				}else{
					p = p->getLeft();
				}				
			}
		}
		return false;
	}
};