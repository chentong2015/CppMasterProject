// TODO. inline 建议编译器使用函数定义中的代码替换对该函数的每次调用
// 对函数的每个调用替换为"函数代码"本身以快速执行
// 在性能关键代码段中重复调用的情况下，内联可以帮助提高性能，消除函数调用的开销

class Account {
public:
    explicit Account(double initial_balance) {
        balance = initial_balance;
    }
    double GetBalance() const;
    double Deposit(double amount);
    double Withdraw(double amount);
private:
    double balance;
};

// inline所实现的方法必须和它声明的方法原型一致
inline double Account::GetBalance() const {
    return balance;
}

inline double Account::Deposit(double amount) {
    balance += amount;
    return balance;
}

inline double Account::Withdraw(double amount) {
    balance -= amount;
    return balance;
}