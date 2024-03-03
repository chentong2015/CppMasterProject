#include <iostream>
#include "InstanceOf.h"

using namespace std;

int main() {
    Parent p;
    Child c;
    OtherClass a;
    Parent *parentP = &p;
    Child *childP = &c;
    OtherClass *otherP = &a;

    if (instanceof<Parent>(parentP)) {
        cout << "p is an instance of the class Parent" << endl;
    }
    if (instanceof<Parent>(childP)) {
        cout << "c is an instance of the class Parent" << endl;
    }

    if (!instanceof<Child>(parentP)) {
        cout << "p is not an instance of the class Child" << endl;
    }
    if (!instanceof<OtherClass>(childP)) {
        cout << "c is not an instance of OtherClass class" << endl;
    }
}
