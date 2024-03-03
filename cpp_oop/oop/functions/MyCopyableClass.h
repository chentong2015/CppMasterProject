#ifndef CPP_MASTER_MYCOPYABLECLASS_H
#define CPP_MASTER_MYCOPYABLECLASS_H

// 自定义可以用于Copy拷贝的类型
class MyCopyableClass {
public:
    MyRefType () {}

    MyRefType(const MyRefType &);
    MyRefType & operator=(const MyRefType &);
};

#endif //CPP_MASTER_MYCOPYABLECLASS_H
