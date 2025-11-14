#include <iostream>
#include <map>

using namespace std;

int mainTest() {
    map<string, string> apple_color;
    apple_color["test"] = "green";

    map<char, int> myMap;
    myMap['b'] = 100;
    myMap['a'] = 200;

    // TODO. 指定<key, value>特定类型的map的迭代器
    // 使用map的迭代器进行遍历，first->key，second->value
    for (map<char,int>::iterator it=myMap.begin(); it!=myMap.end(); ++it) {
        cout << it->first << endl;
        cout << it->second << endl;
    }

    // 直接对map进行初始化，使用auto自动推断迭代器
    map<int, string> m{{1,  "one"},{2,  "two"},{10, "ten"}};
    if (auto it = m.find(10); it != m.end()) {
        cout << it->second << "\n";
    }
    return 0;
}
