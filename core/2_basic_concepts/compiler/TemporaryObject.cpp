
// 临时对象是由编译器创建的未命名对象，用于存储临时值，方便临时计算
int function(int value) {
    return value + 1;
}

int main() {
    // 1. 丢弃的函数返回值将会被存储到临时对象中
    function(10);

    // 2. 创建临时对象来存储第一个运算符的结果
    // ComplexResult = Complex1 + Complex2 + Complex3
    return 0;
}
