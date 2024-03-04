#ifndef JDK_JVM_MASTER_DOG_H
#define JDK_JVM_MASTER_DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    Dog(std::string name, std::string subName);
    virtual ~Dog();
    virtual void move();
private:
    std::string sub_name;
};

#endif //JDK_JVM_MASTER_DOG_H
