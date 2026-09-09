#include <iostream>

class BaseClass {
public:
    // 对继承类开放，对外的可访问性取决于何种继承方式
    void PublicFunc() {};
protected:
    // 对继承类开放，对外部的访问不开放
    void ProtectedFunc() {};
private:
    // 私有的成员不可能通过继承来访问到，对继承类不开放
    void PrivateFunc() {};
};

class DerivedClass1 : public BaseClass {
    void foo() {
        PublicFunc();
        ProtectedFunc();
        // PrivateFunc(); inaccessible
    }
};

class DerivedClass2: protected BaseClass {
    void foo() {
        PublicFunc();
        ProtectedFunc();
        // PrivateFunc(); inaccessible
    }
};

class DerivedClass3 : private BaseClass {
    void foo() {
        PublicFunc();
        ProtectedFunc();
        // PrivateFunc(); inaccessible
    }
};

int main() {
    DerivedClass1 derivedClass1;
    derivedClass1.PublicFunc();
    // derivedClass1.ProtectedFunc(); inaccessible
    // derivedClass1.PrivateFunc(); inaccessible

    DerivedClass2 derivedClass2;
    // derivedClass2.PublicFunc(); inaccessible
    // derivedClass2.ProtectedFunc(); inaccessible
    // derivedClass1.PrivateFunc(); inaccessible

    DerivedClass3 derivedClass3;
    // derivedClass3.PublicFunc(); inaccessible
    // derivedClass3.ProtectedFunc(); inaccessible
    // derivedClass3.PrivateFunc(); inaccessible
    
    return 0;
}
