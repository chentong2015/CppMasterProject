
constexpr int value { 42 };

constexpr int get_meaning() {
    // static_assert 为程序添加断言
    static_assert(value == 42, "unexpected!");
    return value;
}