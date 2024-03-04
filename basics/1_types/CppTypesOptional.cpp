#include <iostream>
#include <optional>

// optional can be used to return type of factory that may fail
std::optional<std::string> create(bool b) {
    if (b) {
        return "done";
    }
    return {};
}

// std::nullopt can be used to create any (empty) std::optional
auto create2(bool b) {
    return b ? std::optional<std::string>{"done"} : std::nullopt;
}

// C++ 17 Optional<> 可空类型
int main() {
    std::optional<std::string> value;
    std::optional<int> v1;
    std::optional<int> v2(3);
    v1.has_value(); // false
    if (v2) {
        std::cout << "v2 = " + std::to_string(v2.value()) << '\n';
    }

    // 返回非空的值或者默认值
    std::cout << create(false).value_or("empty") << '\n';

    // 可通过指针取Optional<>中的数据
    if (auto str = create2(true)) {
        std::cout << "returned: " << *str << '\n';
        std::cout << "returned: " << str.value() << '\n';
    }
}
