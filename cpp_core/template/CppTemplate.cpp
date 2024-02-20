#include <iostream>
#include <string>

using namespace std;

template <typename C>
void print(const string& s, const C& c) {
    cout << s;
    for (const auto& e : c) {
        cout << e << " ";
    }
    cout << endl;
}
