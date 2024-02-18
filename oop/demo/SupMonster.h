#ifndef CPP_MASTER_SUPMONSTER_H
#define CPP_MASTER_SUPMONSTER_H

#include "Monster.h"

class SupMonster : public Monster {

public:
    SupMonster(int size, int power, const std::string &name);

    void testPower() override;
};

#endif //CPP_MASTER_SUPMONSTER_H
