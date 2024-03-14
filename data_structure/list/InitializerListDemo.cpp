#include <iostream>
#include <list>
#include <map>

using namespace std;

// TODO. initializer_list<T> 构造函数
// initializer_list是具有特定类型的对象列表，作为构造函数的参数
// initializer_list通过大括号进行初始化并传递给类型构造函数
struct Point {
    int x;
    int y;
};

class PointList {
public:
    // 使用initializer_list来初始化指定类型的序列
    PointList(initializer_list<Point> my_list) {
        auto count = static_cast<size_t>(my_list.size());
        if (count > 0) {
            for (Point point: my_list) {
                pointList.push_back(point);
            }
        }
    };

    const list<Point>& getPointList() {
        return pointList;
    }
private:
    list<Point> pointList;
};

int main() {
    // TODO. 默认类型推断成initializer_list<T>
    auto iList = {1, 3, 2};
    std::cout << typeid(iList).name() << std::endl;

    // 直接通过大括号构建list，并复制到另一个list
    initializer_list<int> int_list {5, 6, 7};
    initializer_list<int> int_list2 (int_list);
    if (int_list.begin() == int_list2.begin()) {
        cout << "yes" << endl;
    }

    // 通过大括号来构建Point类型的对象列表
    PointList pc {{}};
    PointList pc1 {{3, 4}};
    PointList pc2 {{ 3, 4 }, { 5, 6 }};
    list<Point> pointList = pc2.getPointList();
    for (Point point: pointList) {
        cout << point.x << "-" << point.y << endl;
    }

    // TODO. 标准库容器类以及string都具有initializer_list构造函数
    vector<int> v1 {9, 10, 11};
    map<int, string> m1 {{1, "a"}, {2, "b"}};
    string s {'a', 'b', 'c'};

    return 0;
}
