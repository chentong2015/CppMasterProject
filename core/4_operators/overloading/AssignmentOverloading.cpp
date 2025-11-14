#include <iostream>
#include <string>

class Buf {
public:
    char* buffer;
    size_t sizeOfBuffer;

    // TODO. buffer字符指针指向的字符数组需要末尾多存储一个null的结尾字符
    Buf(const char* sourceBuffer, size_t size) {
        sizeOfBuffer = size + 1;
        buffer = new char[sizeOfBuffer];
        std::strcpy(buffer, sourceBuffer);
    }

    // TODO. 重写类型对象的赋值操作符, 深度拷贝数据
    Buf& operator=(const Buf& otherBuffer) {
        // 判断this指针指向的地址是否为参数对象的地址，防止自我赋值
        if(this != &otherBuffer){
            if (buffer) {
                delete [] buffer;
            }
            sizeOfBuffer = strlen(otherBuffer.buffer) + 1;
            buffer = new char[sizeOfBuffer];
            std::strcpy(buffer, otherBuffer.buffer);
        }
        return *this;
    }

    void Display() {
        std::cout << buffer << std::endl;
        std::cout << sizeOfBuffer << std::endl;
    }

    ~Buf() {
        delete buffer;
    }
};

int main() {
    Buf myBuf("my buffer", 10);
    Buf yourBuf("your buffer", 12);
    myBuf.Display();

    // 赋值运算将类型的字符串成员数据拷贝赋值
    myBuf = yourBuf;
    myBuf.Display();
    
    return 0;
}
