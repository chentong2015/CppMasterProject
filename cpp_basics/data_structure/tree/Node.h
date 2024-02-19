#include <stdexcept>
#include <string>
#include <iostream>

// 可直接在Header文件中实现函数
class Node{

private:
	int value;
	Node* left;
	Node* right;

public:

	Node(int value, Node* left, Node* right) {
		this->value = value;
		this->left = left;
		this->right = right;
	}

	int getValue() const{
		return value;
	}

	Node* getLeft() const{
		return left;
	}

	Node* getRight() const{
		return right;
	}
};

