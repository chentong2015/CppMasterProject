#include <iostream>
#include <string.h>

using namespace std;

class Buf {
public:
    char*   buffer;
    size_t  sizeOfBuffer;

    Buf(char* szBuffer, size_t sizeOfBuffer);
    Buf& operator=(const Buf &);

    void Display() {
        cout << buffer << endl;
    }
};

Buf::Buf(char* szBuffer, size_t sizeOfBuffer) {
    sizeOfBuffer++; // account for a NULL terminator
    buffer = new char[sizeOfBuffer];
    if (buffer) {
        // strcpy_s( buffer, sizeOfBuffer, szBuffer);
        sizeOfBuffer = sizeOfBuffer;
    }
}

// TODO. 自定义同类型对象的赋值操作，this指针用于防止自引用
Buf& Buf::operator=(const Buf &otherbuf) {
    // 判断this指针所指向的地址不是参数对象的地址
    if(this != &otherbuf){
        if (buffer) {
            delete [] buffer;
        }
        sizeOfBuffer = strlen( otherbuf.buffer) + 1;
        buffer = new char[sizeOfBuffer];
        // strcpy_s(buffer, sizeOfBuffer, otherbuf.buffer);
    }
    return *this;
}

int main() {
    Buf myBuf("my buffer", 10 );
    Buf yourBuf("your buffer", 12 );
    myBuf.Display();
    myBuf = yourBuf;
    myBuf.Display();
}
