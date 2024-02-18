#ifndef CPP_MASTER_SUBMONSTER_H
#define CPP_MASTER_SUBMONSTER_H

#include "Monster.h"

class SubMonster: public Monster {

public:
    // 必须传递参数个父类构造器
    SubMonster(int size, int power, const std::string &name);

    void testPower() override;

    void lostPower();

    int getIncrement() const;

    void makeNoise();
};

#endif //CPP_MASTER_SUBMONSTER_H
