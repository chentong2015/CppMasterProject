#include <iostream>

class VFuncBase {
public:
    virtual int GetState() {
        std::cout << "Base GetState" << std::endl;
        return state;
    }
protected:
    int state = 10;
};

// 在重写虚函数的时候修改函数的可访问性，仍然满足多态性
class VFuncDerived : public VFuncBase {
private:
    int GetState() override {
        std::cout << "Derived GetState" << std::endl;
        return state;
    }
};

int mainTest() {
    VFuncDerived vfd;

    // TODO. 如果继承类修改了多态函数的可访问性，则只能通过基类指针来调用
    // 只需满足函数在基类中具有可访问性，无论有多少层继承链
    VFuncBase* pvfb = &vfd;
    int state = pvfb->GetState(); // GetState函数对于基类型是public

    VFuncDerived* pvfd = &vfd;
    // int state = pvfd->GetState();  GetState函数对于子类型是private
    
    return 0;
}
