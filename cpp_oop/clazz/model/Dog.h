#ifndef JDK_JVM_MASTER_DOG_H
#define JDK_JVM_MASTER_DOG_H

#include "Animal.h"

class Dog : public Animal {

public:
    std::string sub_name;

public:
    Dog();
    Dog(std::string name, std::string sub_name);
    virtual ~Dog();
    virtual void move();
};

#endif //JDK_JVM_MASTER_DOG_H
