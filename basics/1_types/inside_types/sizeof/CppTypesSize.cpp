
// C++ 能够指定内存中对象的精确对齐方式
// - bool 和 char 在  1字节边界上对齐
// - short 在 2 字节边界上对齐
// - int、long 和 float 在 4 字节边界上对齐
// - long long、double 和 long double 在 8 字节边界上对齐
int main() {
    // 内存中存储数据时会按照大小排齐存储
    char a;            // 1 byte
    char _pad0[3];     // padding to put 'b' on 4-byte boundary

    char d;           // 1 byte
    char _pad1[1];    // padding to make sizeof(x_) multiple of 4

    short c;          // 2 bytes
    int b;            // 4 bytes


}