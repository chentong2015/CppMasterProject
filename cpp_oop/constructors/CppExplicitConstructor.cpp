
// 如果类具有带一个参数的构造函数，或是如果除了一个参数之外的所有参数都具有默认值
// 则参数类型可以隐式转换为类类型
class Box {
public:
    Box(int s): size(s) {}
private:
    int size;
};

class ExplicitBox {
public:
    explicit ExplicitBox(int s): size(s) {}
private:
    int size;
};

int main() {
    Box box(10); // 显式提供特定类型的参数
    Box box1 = 20; // 隐式将提供的int类型转换成Box类类型，并完成赋值

    ExplicitBox explicitBox(10);
    // ExplicitBox explicitBox1 = 10; 不再支持隐式转换

    return 0;
}