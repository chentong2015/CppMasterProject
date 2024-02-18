#include "Node.h"

class BinarySearchTree{

public:
	// 传入树的根节点, 在树里面进行查找对应的值
	static bool contains(Node& root, int value){
		Node *p = &root;

		if (root.getValue() == value) {
			return true;
		}else {
			while (p != nullptr) {
				if (p->getValue() == value) {
					return true;
				}else if (p->getValue() > value) {
					p = p->getLeft();
				}else{
					p = p->getLeft();
				}				
			}
		}
		return false;
	}
};