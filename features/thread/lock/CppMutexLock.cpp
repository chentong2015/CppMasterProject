#include <iostream>
#include <mutex>

using namespace std;

mutex mx;
// guarded by mx 以下数据将有mutex保护
bool shared_flag = true;

int main() {

    // 使用Mutex来加锁保证同步，防止共享数据被多线程同时修改
    // if-condition带有初始值设定，并且flag为true满足执行的条件
    if (lock_guard<mutex> lock(mx); shared_flag) {
        cout << "setting shared_flag to false \n";
        shared_flag = false;
    }
}

