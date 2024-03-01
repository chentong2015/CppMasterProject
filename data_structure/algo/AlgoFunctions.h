#ifndef CPP_MASTER_ALGOFUNCTIONS_H
#define CPP_MASTER_ALGOFUNCTIONS_H

class AlgoFunctions {

public:
    static int fibonacci(int n) {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 2;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }


};

#endif //CPP_MASTER_ALGOFUNCTIONS_H
