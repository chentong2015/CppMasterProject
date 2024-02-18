#include <stdexcept>
#include <string>
#include <iostream>

class Node{

private:
	int value;
	Node* left;
	Node* right;

public:
	Node(int value, Node* left, Node* right){
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

