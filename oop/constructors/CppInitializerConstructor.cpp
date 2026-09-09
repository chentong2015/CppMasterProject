#include <iostream>
#include <list>
#include <map>

using namespace std;

// TODO. 初始化表达式列表构造函数
//  将initializer_list<T>作为构造函数参数的构造函数
class PointList {
public:
    // 当类通过直接初始化来实例化时，会在重载决策中选择该构造函数
    PointList(initializer_list<int> myList) {
        auto count = static_cast<size_t>(myList.size());
        if (count > 0) {
            for (int i: myList) {
                pointList.push_back(i);
            }
        }
    };
    const list<int>& getPointList() {
        return pointList;
    }
private:
    list<int> pointList;
};

// TODO. 标准库容器类以及string都具有initializer_list构造函数
// 通过列表化的数据直接初始化，底层调用对应的构造函数
void testLibCollections() {
    vector<int> v1 {9, 10, 11};
    map<int, string> m1 {{1, "a"}, {2, "b"}};
    string s {'a', 'b', 'c'};
}

int main() {
    // 通过大括号来初始化，并传递给特定类型的序列给构造函数
    PointList pc {{}};
    PointList pc1 {3, 4};
    PointList pc2 {initializer_list<int> {1, 2, 3}};

    list<int> pointList = pc2.getPointList();
    for (int point: pointList) {
        cout << point << endl;
    }
    return 0;
}
