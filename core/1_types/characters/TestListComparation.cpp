#include <iostream>
#include <list>
using namespace std;


int mainTest() {

    // Initializing two lists of integers
    list<std::string> list1 = { "10", "20", "30", "40", "50" };
    list1.sort();

    list<std::string> list2 = { "10", "20", "30", "50", "40" };
    list2.sort();

    // Comparing the two lists
    if (list1 != list2) {
        cout << "Both the lists are equal." << endl;
    }
    else {
        cout << "Both the lists are not equal." << endl;
    }

    string strElement = "values";
    string strElementCopy = "values";
    if (strElement.compare(strElementCopy))
    {
        cout << "OK equal." << endl;
    }
    else {
        cout << "Not equal." << endl;
    }

	return 0;
}