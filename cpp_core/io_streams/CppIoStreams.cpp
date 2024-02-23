#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

class FileSource {
public:
    // Constructor opens a file.
    FileSource(const char *szDev) {
        errno_t err = fopen_s(&outputFile, szDev, "w" );
    }

    // Destructor closes the file.
    ~FileSource() {
        fclose(outputFile);
    }

    void write(char *szData) {
        fputs(szData, outputFile);
    }
private:
    FILE *outputFile;
};

int main() {
    // The file output is directed to a file called "HELLO.DAT"
    FileSource fileSource = "hello.dat";

    ofstream myFile;
    myFile.open("../example.txt"); // 根据相对路径创建文件
    myFile << "Writing this to a file.\n"; // 写入数据
    myFile.close();
    return 0;
}