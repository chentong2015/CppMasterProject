
class Base {
public:
    void Print() {};
    static void CountOf() {};
};

class Derived1 : private Base {
    // 可访问到当前类型中的private静态函数
    void testCountOf() {
        this->CountOf();
    }
};

class Derived2 : public Derived1 {
    static void ShowCount() {
        // 只能通过全局名称空间方法static成员函数
        ::Base::CountOf();

        // 无法访问到Derived1父类中private成员函数
        // this->CountOf();
    }
};

// 若要在Derived2类中通过this访问CountOf()函数，则必须将this转换为Base *
// 但由于Base是Derived2的private间接基类，因此无法执行转换