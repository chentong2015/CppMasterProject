#include <string>

struct Point {
    int x;
    int y;
};

struct my_struct{
    int i;
    char c;
};

class PointConsumer{
public:
    void set_point(Point p){};
    void set_points(std::initializer_list<Point> my_list){};
};

void testInit() {
    // 1. 括号中的表达式（表达式的逗号分隔列表）
    Point p1 { 1, 2 };

    // 2. 等号后跟表达式
    std::string s = "hello";

    // 3. 括号内的初始值设定项列表
    PointConsumer pc{};
    pc.set_point({});
    pc.set_point({ 3, 4 });
    pc.set_points({ { 3, 4 }, { 5, 6 } });
}

// TODO. 注意变量的默认初始值
void testInitDefault() {
    int i0;           // zero-initialized to 0
    static float f1;  // zero-initialized to 0.000000000
    double d{};       // zero-initialized to 0.00000000000000000
    int* ptr{};       // initialized to nullptr
    my_struct str{};  // i = 0, c = '\0'

    char s_array[3]{'a', 'b'};  // the third char is initialized to '\0'
    int int_array[5] = { 8, 9, 10 };  // the fourth and fifth are initialized to 0

    bool check; // true

    static int int1;   // 0
    static char char1; // '\0'
    static bool bool1; // false
}