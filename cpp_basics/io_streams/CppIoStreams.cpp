#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myFile;
    myFile.open("../example.txt"); // 相对路径创建文件
    myFile << "Writing this to a file.\n"; // 写入数据
    myFile.close();
    return 0;
}