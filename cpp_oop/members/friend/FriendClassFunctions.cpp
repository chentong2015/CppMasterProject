
class B;

class A {
public:
    int func1(B& b);
    int func2(B& b);
};

class B {
    // A::Func1 is a friend function to class B
    // A::Func1 has access to all members of B
    friend int A::func1(B&);
private:
    int num;
};

// 只有func1作为B的友元函数才能访问B的私有属性
int A::func1(B& b) { return b.num; }
// int A::func2(B& b) { return b.num; }
