#ifndef RunTests
#include <iostream>
#include <stdlib.h>
#include "TestInput.h"
#include "NumericInput.h"

//#include "Node.h"
//#include "BinarySearchTree.h"

#include <vector>
using namespace std;

//定义一般的函数  遍历vector的数组即可
static int countNumbers(const std::vector<int>& sortedVector, int lessThan){
	int numberLess = 0;
	int count = sortedVector.size();
	for (int i = 0; i < count; i++){
		if (sortedVector[i] < lessThan) {
			numberLess++;
		}
	}
	return numberLess;
	//throw std::logic_error("Waiting to be implemented");
}

static int countNumber(const std::vector<int>& intvecteur, int t) {
	int num = 0;
	int count = intvecteur.size();
	for (int j = 0; j < count; j++) {
		if (intvecteur[j] > 5) {
			num++;
		}
	}
	if (num >= t) {
		return 1;
	}
	return 0;
}

static int listeV(int n) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return 2;
	}
	return listeV(n - 1) + listeV(n - 2);
}

//使用源文件执行主函数 实例化类并且实现类函数的使用
int main() {
	/* 
	//使用母类的指针来指向子类的实例化的对象
	TestInput* input = new NumericInput();
	input->add('1');
	input->add('a'); 
	input->add('0');
	cout << input->getValue() << endl;
	*/

	/* 
	Node n1(1, NULL, NULL);
	Node n3(3, NULL, NULL);
	Node n2(2, &n1, &n3);
	std::cout << BinarySearchTree::contains(n2, 3);
	*/

	std::vector<int> v{ 1, 3, 5, 7 };
	int num = countNumbers(v, 4);
	cout << num << endl;

	int l = listeV(3); //appele la fonction normale
	cout << l << endl;

	system("pause");
	return 0;
}

#endif