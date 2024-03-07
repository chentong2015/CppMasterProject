#include <queue>
#include <iostream>

int main() {
    std::queue<std::string> inputs;
    inputs.push("first");
    inputs.emplace("second");

    while (!inputs.empty()) {
        // 取队列的第一个数据
        std::string str = inputs.front();
        // 弹出队列的第一个数据，无返回
        inputs.pop();
    }
}