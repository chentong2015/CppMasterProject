#include <iostream>
#include <set>

int mainTest() {
    std::set<std::string> st;
    st.insert({ "geeks", "for", "geeks", "org" });

    for (const auto & it : st) {
        std::cout << it << "\n";
    }

    for (auto it = st.begin(); it != st.end(); it++) {
        std::cout << *it << "\n";
    }

    return 0;
}